/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ac19f */

char * __fastcall FUN_101ac19f(int param_1)

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

