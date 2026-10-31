/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a87a */

bool FUN_1027a87a(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (0 < param_3) {
    if (param_3 <= (int)((&DAT_103255e4)[param_2] - (&DAT_103255e0)[param_2])) {
      return true;
    }
    cVar1 = FUN_1025c500(param_1);
    if ((cVar1 != '\0') && (param_2 == 1)) {
      return param_3 < 0x1e;
    }
  }
  return false;
}

