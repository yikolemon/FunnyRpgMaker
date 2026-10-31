/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180120d0b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_180120d0b(ulonglong *param_1,ulonglong *param_2,longlong param_3)

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
    if ((*(byte *)(DAT_180419160 + 0x12f5) & 4) == 0) {
      pfVar2 = (float *)(param_3 + 0x28);
      pfVar3 = (float *)(param_3 + 0x2c);
    }
    else {
      lVar1 = FUN_180113b98(param_3);
      pfVar2 = (float *)(lVar1 + 0x18);
      pfVar3 = (float *)(lVar1 + 0x1c);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *param_2;
    auVar6._4_4_ = (float)(int)(*pfVar3 * (float)s_fff_fff__1802de8e0._4_4_);
    auVar6._0_4_ = (float)(int)(*pfVar2 * (float)s_fff_fff__1802de8e0._0_4_);
    auVar6._8_4_ = (float)(int)(ram0x0001802de8e8 * 0.0);
    auVar6._12_4_ = (float)(int)(_UNK_1802de8ec * 0.0);
    auVar6 = minps(auVar5,auVar6);
    uVar4 = auVar6._0_8_;
  }
  *param_1 = uVar4;
  return param_1;
}

