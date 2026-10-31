/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a3494 */

uint __cdecl FUN_004a3494(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_004a331c();
      goto LAB_004a3512;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x004a3503:
    if (uVar1 == 0) {
LAB_004a34b5:
      if (DAT_00521f28 != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_004fa5d0,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_004a3305();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_004a34b5;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x004a3503;
  }
  uVar2 = 1;
LAB_004a3512:
  if (DAT_00521f28 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_004fa5d0,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

