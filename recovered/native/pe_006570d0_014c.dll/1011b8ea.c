/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011b8ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * __fastcall FUN_1011b8ea(ulonglong *param_1,ulonglong *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar4;
  
  if (param_3 == 0) {
    uVar4 = *param_2;
  }
  else {
    if ((*(byte *)(DAT_1039d74c + 0x120d) & 4) == 0) {
      pfVar3 = (float *)(param_3 + 0x28);
      pfVar1 = (float *)(param_3 + 0x2c);
    }
    else {
      iVar2 = FUN_1010ede0(param_3);
      pfVar3 = (float *)(iVar2 + 0x18);
      pfVar1 = (float *)(iVar2 + 0x1c);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *param_2;
    auVar6._4_4_ = (float)(int)(*pfVar1 * (float)s_fff_fff__102b8e50._4_4_);
    auVar6._0_4_ = (float)(int)(*pfVar3 * (float)s_fff_fff__102b8e50._0_4_);
    auVar6._8_4_ = (float)(int)(ram0x102b8e58 * 0.0);
    auVar6._12_4_ = (float)(int)(_UNK_102b8e5c * 0.0);
    auVar6 = minps(auVar5,auVar6);
    uVar4 = auVar6._0_8_;
  }
  *param_1 = uVar4;
  return param_1;
}

