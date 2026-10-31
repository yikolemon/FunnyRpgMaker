/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018a78b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_1018a78b(int *param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  fVar16 = param_7;
  fVar17 = param_7;
  fVar18 = param_7;
  fVar19 = param_7;
  fVar20 = param_6;
  fVar21 = param_6;
  fVar22 = param_6;
  fVar23 = param_6;
  while( true ) {
    param_2 = param_2 + 1;
    fVar6 = param_6 - in_XMM0_Da;
    fVar7 = param_7 - in_XMM1_Da;
    fVar8 = fVar7 * (in_XMM2_Da - fVar20) - fVar6 * (param_3 - fVar16);
    fVar11 = fVar7 * (param_4 - fVar21) - fVar6 * (param_5 - fVar17);
    uVar4 = -(uint)((float)((uint)fVar8 ^ _DAT_1028f620) <= fVar8);
    uVar5 = -(uint)((float)((uint)fVar11 ^ _UNK_1028f624) <= fVar11);
    fVar8 = (float)(~uVar5 & ((uint)fVar11 ^ _UNK_1028f624) | (uint)fVar11 & uVar5) +
            (float)(~uVar4 & ((uint)fVar8 ^ _DAT_1028f620) | (uint)fVar8 & uVar4);
    if (fVar8 * fVar8 < (fVar6 * fVar6 + fVar7 * fVar7) * param_8) {
      iVar1 = *param_1;
      if (iVar1 == param_1[1]) {
        if (iVar1 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = iVar1 / 2 + iVar1;
        }
        iVar3 = iVar1 + 1;
        if (iVar1 + 1 < iVar2) {
          iVar3 = iVar2;
        }
        iVar2 = FUN_100fa1fa(iVar3 * 8);
        if (param_1[2] != 0) {
          FUN_1025b2d0(iVar2,param_1[2],*param_1 << 3);
          FUN_100fa2cb(param_1[2]);
        }
        param_1[2] = iVar2;
        param_1[1] = iVar3;
        iVar1 = *param_1;
      }
      else {
        iVar2 = param_1[2];
      }
      *(float *)(iVar2 + iVar1 * 8) = param_6;
      *(float *)(iVar2 + 4 + iVar1 * 8) = param_7;
      *param_1 = *param_1 + 1;
      return;
    }
    if (param_2 == 0xb) break;
    fVar6 = (param_4 + in_XMM2_Da) * DAT_102b89c0._4_4_;
    param_4 = (param_4 + param_6) * DAT_102b70e0;
    fVar8 = ((in_XMM0_Da + in_XMM2_Da) * (float)DAT_102b89c0 + fVar6) * (float)DAT_102b89c0;
    fVar11 = (param_4 + fVar6) * DAT_102b89c0._4_4_;
    fVar9 = (fVar11 + fVar8) * DAT_102b70e0;
    fVar7 = (in_XMM1_Da + param_3) * (float)DAT_102b89c0;
    fVar6 = (param_5 + param_3) * DAT_102b89c0._4_4_;
    param_5 = (param_5 + param_7) * DAT_102b70e0;
    fVar10 = (fVar7 + fVar6) * (float)DAT_102b89c0;
    fVar12 = (param_5 + fVar6) * DAT_102b89c0._4_4_;
    fVar6 = (fVar12 + fVar10) * DAT_102b70e0;
    in_XMM2_Da = fVar11;
    param_3 = fVar12;
    FUN_1018a78b(fVar7,fVar8,fVar10,fVar9,fVar6,param_8,fVar11,fVar11,fVar11,fVar11,param_5,uVar13,
                 uVar14,uVar15,fVar12,fVar12,fVar12,fVar12,in_XMM0_Da,in_XMM0_Db,in_XMM0_Dc,
                 in_XMM0_Dd,in_XMM1_Da,in_XMM1_Db,in_XMM1_Dc,in_XMM1_Dd,fVar16,fVar17,fVar18,fVar19,
                 fVar20,fVar21,fVar22,fVar23);
    in_XMM1_Da = fVar6;
    in_XMM1_Db = fVar12;
    in_XMM1_Dc = fVar12;
    in_XMM1_Dd = fVar12;
    in_XMM0_Da = fVar9;
    in_XMM0_Db = fVar11;
    in_XMM0_Dc = fVar11;
    in_XMM0_Dd = fVar11;
  }
  return;
}

