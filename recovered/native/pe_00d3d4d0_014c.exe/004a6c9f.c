/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a6c9f */

uint __thiscall FUN_004a6c9f(void *this,int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_004a331c();
      goto LAB_004a6d41;
    }
    uVar2 = 0;
    if ((uVar1 & 0x80000000) == 0) goto LAB_004a6cd5;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_004a6d41;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(extraout_ST0);
      uVar2 = param_2;
LAB_004a6cd5:
      if (DAT_00521f28 != 0) {
        return uVar2;
      }
      uVar1 = __math_exit("log10",0x1b,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_004a6d41:
  if (DAT_00521f28 != 0) {
    return uVar1;
  }
  __startOneArgErrorHandling("log10",0x1b,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

