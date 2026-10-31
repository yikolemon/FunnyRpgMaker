/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026cb00 */

uint FUN_1026cb00(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  ushort in_FPUControlWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar3;
  
  bVar2 = DAT_103a549c == 0;
  if ((!bVar2) && (bVar2 = false, (MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f))
  {
    uVar1 = FUN_1027d538();
    return uVar1;
  }
  uVar1 = __fload_withFB();
  if (bVar2) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
LAB_1027d4ea:
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1028315c();
    }
    if (DAT_103a54b4 == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar3 = extraout_ST0;
    if (in_FPUControlWord != 0x27f) {
      uVar1 = FUN_10283145();
      fVar3 = extraout_ST0_00;
    }
    if (uVar1 < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - fVar3) * ((float10)1 + fVar3)),fVar3);
    }
    else {
      if ((0x3ff00000 < uVar1) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_1027d4ea;
      uVar1 = 0;
    }
    if (DAT_103a54b4 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return uVar1;
}

