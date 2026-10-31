/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028838f */

uint FUN_1028838f(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 in_ZF;
  unkbyte10 extraout_ST0;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_1028315c();
      goto LAB_10288431;
    }
    param_2 = 0;
    if ((uVar1 & 0x80000000) == 0) goto LAB_102883c5;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_10288431;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(extraout_ST0);
LAB_102883c5:
      if (DAT_103a54b4 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_10288431:
  if (DAT_103a54b4 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}

