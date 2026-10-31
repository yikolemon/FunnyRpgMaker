/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026fa50 */

uint FUN_1026fa50(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  ushort in_FPUControlWord;
  unkbyte10 extraout_ST0;
  
  bVar2 = DAT_103a549c == 0;
  if ((!bVar2) && (bVar2 = false, (MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f))
  {
    uVar1 = FUN_10281798();
    return uVar1;
  }
  uVar1 = __fload_withFB();
  if (bVar2) {
    if (((uVar1 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_1028315c();
      goto LAB_10281761;
    }
    param_2 = 0;
    if ((uVar1 & 0x80000000) == 0) goto LAB_102816f5;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_10281761;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(extraout_ST0);
LAB_102816f5:
      if (DAT_103a54b4 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_10281761:
  if (DAT_103a54b4 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}

