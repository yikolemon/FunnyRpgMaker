/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d4b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1026d4b0(int param_1)

{
  uint uVar1;
  bool bVar2;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar3;
  
  bVar2 = DAT_103a549c == 0;
  if ((!bVar2) && (bVar2 = false, (MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f))
  {
    uVar1 = FUN_1027e288();
    return uVar1;
  }
  uVar1 = __fload_withFB();
  if (bVar2) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      if (DAT_103a54b4 != 0) {
        return 1;
      }
      uVar1 = __startOneArgErrorHandling();
    }
    return uVar1;
  }
  fVar3 = (float10)fcos(extraout_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar3 = fVar3 - ROUND(fVar3 / _DAT_103261ca) * _DAT_103261ca;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fcos(fVar3);
  }
  if (DAT_103a54b4 != 0) {
    return (uint)in_FPUStatusWord;
  }
  uVar1 = __math_exit();
  return uVar1;
}

