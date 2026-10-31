/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101112a9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101112a9(void)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  undefined8 in_XMM2_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong local_84;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_84;
  if (*(char *)(DAT_1039d74c + 0x27de) == '\x01') {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pfVar6 = (float *)(DAT_1039d74c + 0x1e80);
  pfVar7 = local_64;
  for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  *(undefined4 *)(DAT_1039d74c + 0x1e44) = 0;
  FUN_100fe900(*(undefined4 *)(*(int *)(iVar4 + 0x14cc) + 0x3c));
  local_74 = local_64[3] + _DAT_102b8d60;
  fStack_70 = fStack_54 + _UNK_102b8d64;
  fStack_6c = fStack_50 + _UNK_102b8d68;
  fStack_68 = fStack_4c + _UNK_102b8d6c;
  local_7c = *(undefined4 *)(iVar4 + 0xe4);
  local_78 = *(undefined4 *)(iVar4 + 0xe8);
  uVar1 = *(ulonglong *)(iVar4 + 0xe4);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar3._4_8_ = in_XMM2_Qb;
  auVar3._0_4_ = fStack_70;
  auVar10._0_8_ = auVar3._0_8_ << 0x20;
  auVar10._8_4_ = fStack_6c;
  auVar10._12_4_ = fStack_68;
  auVar11._12_4_ = fStack_68;
  auVar11._8_4_ = fStack_6c;
  auVar11._0_8_ = auVar10._8_8_;
  auVar12 = minps(auVar11,auVar12);
  uVar8 = -(uint)((float)uVar1 < local_74);
  uVar9 = -(uint)((float)(uVar1 >> 0x20) < fStack_70);
  local_84 = CONCAT44(~uVar9 & auVar12._4_4_,~uVar8 & auVar12._0_4_) |
             CONCAT44((uint)fStack_70 & uVar9,(uint)local_74 & uVar8);
  FUN_1018b762(&local_74,&fStack_6c,_DAT_102b8d70,_UNK_102b8d74,_UNK_102b8d78,_UNK_102b8d7c);
  FUN_1018b2de(&local_7c,&local_84,0xff00ff00,0x3f800000);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_84)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

