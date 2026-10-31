/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b42e0 */

char * FUN_1801b42e0(int param_1)

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

