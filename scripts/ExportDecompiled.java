// Export address-indexed pseudocode and call edges, not compilable source.
// @category FunnyRpgMaker
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.symbol.Reference;
import java.io.*;
import java.nio.charset.StandardCharsets;

public class ExportDecompiled extends GhidraScript {
    public void run() throws Exception {
        File output = new File(getScriptArgs()[0], currentProgram.getName());
        output.mkdirs();
        try (PrintWriter strings = new PrintWriter(new File(output, "strings.tsv"), StandardCharsets.UTF_8);
             PrintWriter references = new PrintWriter(new File(output, "string_refs.tsv"), StandardCharsets.UTF_8)) {
            strings.println("address\tvalue");
            references.println("string_address\tfrom_address\tfunction_address\tfunction_name");
            DataIterator data = currentProgram.getListing().getDefinedData(true);
            while (data.hasNext() && !monitor.isCancelled()) {
                Data item = data.next();
                if (!(item.getValue() instanceof String)) continue;
                String value = (String) item.getValue();
                strings.println(item.getAddress() + "\t" + value.replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n"));
                for (Reference reference : getReferencesTo(item.getAddress())) {
                    Function owner = getFunctionContaining(reference.getFromAddress());
                    references.println(item.getAddress() + "\t" + reference.getFromAddress() + "\t" + (owner == null ? "" : owner.getEntryPoint()) + "\t" + (owner == null ? "" : owner.getName()));
                }
            }
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int success = 0, failed = 0;
        try (PrintWriter index = new PrintWriter(new File(output, "functions.tsv"), StandardCharsets.UTF_8);
             PrintWriter edges = new PrintWriter(new File(output, "calls.tsv"), StandardCharsets.UTF_8)) {
            index.println("address\tname\tstatus\tfile");
            edges.println("caller\tcallee\tcallee_name");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                if (function.isExternal()) continue;
                String address = function.getEntryPoint().toString();
                DecompileResults result = decompiler.decompileFunction(function, 60, monitor);
                boolean ok = result.decompileCompleted() && result.getDecompiledFunction() != null;
                String filename = address + ".c";
                try (PrintWriter code = new PrintWriter(new File(output, filename), StandardCharsets.UTF_8)) {
                    code.println("/* Ghidra pseudocode. Image: " + currentProgram.getName() + " Address: " + address + " */");
                    if (ok) { code.print(result.getDecompiledFunction().getC()); success++; }
                    else { code.println("/* Decompilation failed: " + result.getErrorMessage().replace("*/", "* /") + " */"); failed++; }
                }
                index.println(address + "\t" + function.getName() + "\t" + (ok ? "ok" : "failed") + "\t" + filename);
                for (Function callee : function.getCalledFunctions(monitor)) {
                    edges.println(address + "\t" + callee.getEntryPoint() + "\t" + callee.getName());
                }
                if ((success + failed) % 100 == 0) println("Exported " + success + ", failed " + failed);
            }
        } finally { decompiler.dispose(); }
        println("EXPORT COMPLETE " + currentProgram.getName() + ": ok=" + success + " failed=" + failed);
    }
}
