/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011d7b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d7b0(undefined4 param_1,int *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_88;
  int local_84;
  float *local_80;
  int local_7c;
  int local_78;
  float local_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54 [8];
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar9 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_88;
  local_84 = *(int *)(DAT_1039d74c + 0x14cc);
  local_44 = *param_3;
  fStack_40 = param_3[1];
  fStack_3c = 0.0;
  fStack_38 = 0.0;
  _fStack_4c = 0;
  local_54 = (undefined1  [8])*(ulonglong *)(param_3 + 2);
  local_74 = (float)param_2[2];
  fStack_70 = (float)param_2[3];
  uStack_6c = 0;
  uStack_68 = 0;
  local_64 = param_2[4];
  iStack_60 = param_2[5];
  uStack_5c = 0;
  uStack_58 = 0;
  local_88 = *(float *)(&DAT_102b8eb0 + (uint)(((uint)param_2[1] >> 0xc & 1) == 0) * 4);
  uVar3 = FUN_100fcb39(5,DAT_102b8e90 * local_88);
  local_80 = param_3 + 2;
  FUN_1018b85a(param_3,param_3 + 2,uVar3,0,0);
  if (*(int *)(iVar9 + 0x1484) != 0) {
    auVar12._0_4_ = (float)local_54._0_4_ - local_44;
    auVar12._4_4_ = (float)local_54._4_4_ - fStack_40;
    auVar12._8_4_ = fStack_4c - fStack_3c;
    auVar12._12_4_ = fStack_48 - fStack_38;
    auVar13._4_4_ = iStack_60;
    auVar13._0_4_ = local_64;
    auVar13._8_4_ = uStack_5c;
    auVar13._12_4_ = uStack_58;
    auVar13 = divps(auVar12,auVar13);
    local_44 = local_44 - local_74 * auVar13._0_4_;
    fStack_40 = fStack_40 - fStack_70 * auVar13._4_4_;
    iVar7 = *(int *)(iVar9 + 0x148c);
    iVar6 = *(int *)(iVar9 + 0x1484) << 2;
    local_54 = auVar13._0_8_;
    _fStack_4c = local_54;
    iVar8 = 0;
    local_64 = iVar9;
    local_7c = iVar7;
    local_78 = iVar6;
    fStack_3c = local_44;
    fStack_38 = fStack_40;
    do {
      iVar1 = *(int *)(iVar7 + iVar8);
      if (((*(char *)(iVar1 + 0xfa) == '\x01') && ((*(byte *)(iVar1 + 0xf) & 1) == 0)) &&
         (*(int **)(iVar1 + 0x3c) == param_2)) {
        fVar10 = (float)*(undefined8 *)(iVar1 + 0x50);
        fVar11 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x50) >> 0x20);
        local_24 = (float)(int)(fVar10 * (float)local_54._0_4_ + local_44);
        fStack_20 = (float)(int)(fVar11 * (float)local_54._4_4_ + fStack_40);
        fStack_1c = (float)(int)(((float)*(undefined8 *)(iVar1 + 0x58) + fVar10) * fStack_4c +
                                fStack_3c);
        fStack_18 = (float)(int)(((float)((ulonglong)*(undefined8 *)(iVar1 + 0x58) >> 0x20) + fVar11
                                 ) * fStack_48 + fStack_38);
        local_34 = (float)(int)(fVar10 * (float)local_54._0_4_ + local_44);
        fStack_30 = (float)(int)(fVar11 * (float)local_54._4_4_ + fStack_40);
        fStack_2c = (float)(int)((*(float *)(iVar1 + 0x60) + fVar10) * fStack_4c + fStack_3c);
        fStack_28 = (float)(int)((((fVar11 + *(float *)(iVar1 + 0x90)) - *(float *)(iVar1 + 0x54)) *
                                  DAT_102b6c58 + *(float *)(iVar1 + 0x54)) * fStack_48 + fStack_38);
        FUN_1010fa6a(param_3);
        FUN_1010fa6a(param_3);
        iVar7 = local_84;
        if (*(int *)(iVar9 + 0x2048) == 0) {
          local_74 = 1.4013e-44;
        }
        else {
          local_74 = (float)(*(int *)(iVar1 + 0x3b4) == *(int *)(*(int *)(iVar9 + 0x2048) + 0x3b4) |
                            10);
        }
        uVar3 = FUN_100fcb39(2,local_88);
        FUN_1018b85a(&local_24,&fStack_1c,uVar3,0,0);
        uVar3 = FUN_100fcb39(local_74,local_88);
        FUN_1018b85a(&local_34,&fStack_2c,uVar3,0,0);
        uVar3 = FUN_100fcb39(5,local_88);
        FUN_1018b762(&local_24,&fStack_1c,uVar3,0,0x3f800000,0);
        local_74 = *(float *)(iVar7 + 0x2e8);
        uVar3 = *(undefined4 *)(iVar1 + 4);
        uVar4 = FUN_100fd57d(uVar3,0);
        uVar5 = FUN_100fcb39(0,local_88);
        iVar9 = local_64;
        FUN_1018c69a(*(undefined4 *)(local_64 + 0x1220),*(undefined4 *)(local_64 + 0x1228),&local_34
                     ,uVar5,uVar3,uVar4,0,0);
        iVar6 = local_78;
        iVar7 = local_7c;
      }
      iVar8 = iVar8 + 4;
    } while (iVar6 != iVar8);
  }
  uVar3 = FUN_100fcb39(5,local_88);
  pfVar2 = local_80;
  FUN_1018b762(param_3,local_80,uVar3,0,0x3f800000,0);
  if (*param_2 == *(int *)(iVar9 + 0x2818)) {
    FUN_1018b762(param_3,pfVar2,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,_UNK_102b8bcc);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

