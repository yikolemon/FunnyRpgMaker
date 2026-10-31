/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407737ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_1407737ba(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 unaff_RDI;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar4;
  
  iVar2 = (int)((ulonglong)unaff_RDI >> 0x20);
  if (iVar2 == 0) {
    uVar4 = *(ulonglong *)(ulonglong)param_2;
  }
  else {
    if ((*(byte *)((ulonglong)_DAT_150b10f1a + 0x120d) & 4) == 0) {
      uVar3 = iVar2 + 0x28;
      uVar1 = iVar2 + 0x2c;
    }
    else {
      iVar2 = FUN_140766cb0();
      uVar3 = iVar2 + 0x18;
      uVar1 = iVar2 + 0x1c;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(ulonglong)param_2;
    auVar6._4_4_ = (float)(int)(*(float *)(ulonglong)uVar1 * fRam0000000150a2c65a);
    auVar6._0_4_ = (float)(int)(*(float *)(ulonglong)uVar3 * _DAT_150a2c656);
    auVar6._8_4_ = (float)(int)(fRam0000000150a2c65e * 0.0);
    auVar6._12_4_ = (float)(int)(fRam0000000150a2c662 * 0.0);
    auVar6 = minps(auVar5,auVar6);
    uVar4 = auVar6._0_8_;
  }
  *(ulonglong *)(ulonglong)param_1 = uVar4;
  return (ulonglong *)(ulonglong)param_1;
}

