/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026dde0 */

float10 FUN_1026dde0(double param_1)

{
  uint uVar1;
  int iVar2;
  ushort in_FPUControlWord;
  float10 fVar3;
  undefined1 auVar4 [16];
  
  if (1 < DAT_1039d7b4) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_1;
    auVar4 = roundsd(auVar4,auVar4,9);
    return (float10)auVar4._0_8_;
  }
  if ((DAT_103a549c != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    fVar3 = (float10)FUN_1026de00();
    return fVar3;
  }
  uVar1 = FUN_10281250(0x173f,0xffff);
  if ((param_1._4_4_ & 0x7ff00000) != 0x7ff00000) {
    fVar3 = (float10)FUN_10286ed0(SUB84(param_1,0),param_1._4_4_);
    if (((double)fVar3 != param_1) && ((uVar1 & 0x20) == 0)) {
      fVar3 = (float10)FUN_102807c0(0x10,0xb,param_1,(double)fVar3,uVar1);
      return fVar3;
    }
    FUN_10281250(uVar1,0xffff);
    return (float10)(double)fVar3;
  }
  iVar2 = FUN_1026e700();
  if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) {
    fVar3 = (float10)FUN_102807c0(8,0xb,param_1,param_1 + DAT_1028b438,uVar1);
    return fVar3;
  }
  FUN_10281250(uVar1,0xffff);
  return (float10)param_1;
}

