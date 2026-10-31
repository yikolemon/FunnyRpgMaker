/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101baa92 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_101baa92(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_XMM0_Da;
  float fVar7;
  float in_XMM0_Db;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM2_Da;
  float fVar11;
  float fVar12;
  
  fVar7 = in_XMM0_Da + (float)DAT_102b89c0;
  fVar8 = in_XMM1_Da + DAT_102b89c0._4_4_;
  fVar9 = in_XMM0_Db + _UNK_102b89c8;
  fVar10 = in_XMM1_Db + _UNK_102b89cc;
  iVar5 = *(int *)(param_1 + 0x38);
  iVar6 = -0x40;
  fVar11 = fVar7;
  fVar12 = fVar8;
  do {
    fVar1 = *(float *)(&DAT_10302550 + iVar6);
    fVar2 = *(float *)(&UNK_10302554 + iVar6);
    if (iVar5 == *(int *)(param_1 + 0x3c)) {
      if (iVar5 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar5 / 2 + iVar5;
      }
      iVar4 = iVar5 + 1;
      if (iVar5 + 1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_100fa1fa(iVar4 * 8,fVar11,fVar12,fVar9,fVar10);
      fVar7 = fVar11;
      fVar8 = fVar12;
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
        fVar7 = fVar11;
        fVar8 = fVar12;
      }
      *(int *)(param_1 + 0x40) = iVar3;
      *(int *)(param_1 + 0x3c) = iVar4;
      iVar5 = *(int *)(param_1 + 0x38);
      fVar11 = fVar7;
      fVar12 = fVar8;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x40);
    }
    *(ulonglong *)(iVar3 + iVar5 * 8) =
         CONCAT44((float)(int)(fVar2 * in_XMM2_Da) + fVar8,(float)(int)(fVar1 * in_XMM2_Da) + fVar7)
    ;
    iVar5 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar5;
    iVar6 = iVar6 + 8;
  } while (iVar6 != 0);
  return;
}

