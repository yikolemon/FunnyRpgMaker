/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102832d4 */

uint FUN_102832d4(uint param_1,uint param_2)

{
  uint uVar1;
  bool in_ZF;
  short in_FPUControlWord;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_1028315c();
      goto LAB_10283352;
    }
    param_1 = param_2 & 0x80000000;
    param_2 = 0;
joined_r0x10283343:
    if (param_1 == 0) {
LAB_102832f5:
      if (DAT_103a54b4 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      param_2 = FUN_10283145();
    }
    if ((param_2 & 0x80000000) == 0) goto LAB_102832f5;
    if (((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) goto joined_r0x10283343;
  }
  uVar1 = 1;
LAB_10283352:
  if (DAT_103a54b4 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}

