/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10282ebf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10282ebf(int param_1)

{
  uint uVar1;
  undefined1 in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      if (DAT_103a54b4 != 0) {
        return 1;
      }
      uVar1 = __startOneArgErrorHandling();
    }
    return uVar1;
  }
  fVar2 = (float10)fsin(extraout_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar2 = fVar2 - ROUND(fVar2 / _DAT_103261ca) * _DAT_103261ca;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fsin(fVar2);
  }
  if (DAT_103a54b4 != 0) {
    return (uint)in_FPUStatusWord;
  }
  uVar1 = __math_exit();
  return uVar1;
}

