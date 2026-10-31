/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004904c0 */

float10 __cdecl FUN_004904c0(double param_1)

{
  uint uVar1;
  int iVar2;
  ushort in_FPUControlWord;
  float10 fVar3;
  undefined1 auVar4 [16];
  
  if (1 < DAT_0051bfb0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_1;
    auVar4 = roundsd(auVar4,auVar4,10);
    return (float10)auVar4._0_8_;
  }
  if ((DAT_00521f1c != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    fVar3 = FUN_004904e0(param_1);
    return fVar3;
  }
  uVar1 = FUN_004a1510();
  if ((param_1._4_4_ & 0x7ff00000) != 0x7ff00000) {
    fVar3 = FUN_004a6120(param_1);
    if (((double)fVar3 != param_1) && ((uVar1 & 0x20) == 0)) {
      fVar3 = (float10)FUN_004a0be0(0x10,0xc,param_1,(double)fVar3,uVar1);
      return fVar3;
    }
    FUN_004a1510();
    return (float10)(double)fVar3;
  }
  iVar2 = FUN_00491810(SUB84(param_1,0),param_1._4_4_);
  if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) {
    fVar3 = (float10)FUN_004a0be0(8,0xc,param_1,param_1 + DAT_004a88f8,uVar1);
    return fVar3;
  }
  FUN_004a1510();
  return (float10)param_1;
}

