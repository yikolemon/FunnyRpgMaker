/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400f9f64 */

char * FUN_1400f9f64(int param_1)

{
  if (param_1 == 0x40000) {
    return "DrawLinesNone";
  }
  if (param_1 != 0x100000) {
    if (param_1 == 0x80000) {
      return "DrawLinesFull";
    }
    return "";
  }
  return "DrawLinesToNodes";
}

