/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018ac20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_1018ac20(int *param_1,int param_2,float param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM2_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = param_4 - in_XMM0_Da;
  fVar10 = param_5 - in_XMM1_Da;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar9 = (in_XMM2_Da - param_4) * fVar10 - (param_3 - param_5) * fVar8;
  fVar7 = 0.0;
  if ((fVar8 * fVar8 + fVar10 * fVar10) * param_6 <= fVar9 * fVar9 * DAT_102b8cb0) {
    do {
      param_2 = param_2 + 1;
      if (param_2 == 0xb) {
        return;
      }
      fVar5 = in_XMM2_Da + in_XMM0_Db;
      fVar7 = param_3 + in_XMM1_Db;
      fVar8 = param_3 + 0.0;
      in_XMM0_Db = (in_XMM2_Da + param_4) * DAT_102b89c0._4_4_;
      fVar5 = fVar5 * _UNK_102b89c8;
      fVar6 = (in_XMM2_Da + 0.0) * _UNK_102b89cc;
      fVar10 = (param_3 + in_XMM1_Da) * (float)DAT_102b89c0;
      in_XMM1_Db = (param_3 + param_5) * DAT_102b89c0._4_4_;
      in_XMM0_Da = ((in_XMM2_Da + in_XMM0_Da) * (float)DAT_102b89c0 + in_XMM0_Db) * DAT_102b70e0;
      in_XMM1_Da = (fVar10 + in_XMM1_Db) * DAT_102b70e0;
      param_3 = in_XMM1_Db;
      in_XMM2_Da = in_XMM0_Db;
      FUN_1018ac20(fVar10,in_XMM0_Da,in_XMM1_Da,param_6,in_XMM0_Da,in_XMM0_Db,fVar5,fVar6,in_XMM1_Da
                   ,in_XMM1_Db,fVar7 * _UNK_102b89c8,fVar8 * _UNK_102b89cc,in_XMM1_Db,in_XMM1_Db,
                   in_XMM1_Db,in_XMM1_Db,in_XMM0_Db,in_XMM0_Db,in_XMM0_Db,in_XMM0_Db);
      fVar8 = param_4 - in_XMM0_Da;
      fVar4 = param_5 - in_XMM1_Da;
      fVar9 = (in_XMM2_Da - param_4) * fVar4 - (param_3 - param_5) * fVar8;
      fVar10 = in_XMM0_Da;
      fVar7 = in_XMM0_Db;
    } while ((fVar8 * fVar8 + fVar4 * fVar4) * param_6 <= fVar9 * fVar9 * DAT_102b8cb0);
  }
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
    iVar2 = FUN_100fa1fa(iVar3 * 8,fVar10,fVar7,fVar5,fVar6);
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
  *(float *)(iVar2 + iVar1 * 8) = param_4;
  *(float *)(iVar2 + 4 + iVar1 * 8) = param_5;
  *param_1 = *param_1 + 1;
  return;
}

