/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403321db */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_1403321db(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar4;
  
  if (param_3 == 0) {
    uVar4 = *param_2;
  }
  else {
    if ((*(byte *)(DAT_14062a630 + 0x12f5) & 4) == 0) {
      pfVar2 = (float *)(param_3 + 0x28);
      pfVar3 = (float *)(param_3 + 0x2c);
    }
    else {
      lVar1 = FUN_140325068(param_3);
      pfVar2 = (float *)(lVar1 + 0x18);
      pfVar3 = (float *)(lVar1 + 0x1c);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *param_2;
    auVar6._4_4_ = (float)(int)(*pfVar3 * _UNK_1404efdb4);
    auVar6._0_4_ = (float)(int)(*pfVar2 * _DAT_1404efdb0);
    auVar6._8_4_ = (float)(int)(_UNK_1404efdb8 * 0.0);
    auVar6._12_4_ = (float)(int)(_UNK_1404efdbc * 0.0);
    auVar6 = minps(auVar5,auVar6);
    uVar4 = auVar6._0_8_;
  }
  *param_1 = uVar4;
  return param_1;
}

