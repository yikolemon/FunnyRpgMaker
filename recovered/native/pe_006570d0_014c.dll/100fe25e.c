/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fe25e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe25e(float *param_1,int param_2,uint param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *local_40;
  float *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  if ((((param_2 == *(int *)(DAT_1039d74c + 0x2044)) &&
       (((param_3 & 4) != 0 || (*(char *)(DAT_1039d74c + 0x2040) != '\0')))) &&
      ((param_2 != *(int *)(DAT_1039d74c + 0x1e80) || ((*(byte *)(DAT_1039d74c + 0x1e84) & 2) == 0))
      )) && (iVar6 = *(int *)(DAT_1039d74c + 0x14cc), *(char *)(iVar6 + 0x1a5) == '\0')) {
    local_28 = 0;
    if ((param_3 & 8) == 0) {
      local_28 = *(undefined4 *)(DAT_1039d74c + 0xd14);
    }
    fVar2 = *(float *)(iVar6 + 0x28c);
    fVar3 = *(float *)(iVar6 + 0x290);
    fVar4 = *(float *)(iVar6 + 0x294);
    fVar5 = *(float *)(iVar6 + 0x298);
    uVar7 = -(uint)(fVar2 <= *param_1);
    uVar8 = -(uint)(fVar3 <= param_1[1]);
    uVar9 = -(uint)(param_1[2] < fVar4);
    uVar10 = -(uint)(param_1[3] < fVar5);
    local_24 = (float)(~uVar7 & (uint)fVar2 | (uint)*param_1 & uVar7);
    fStack_20 = (float)(~uVar8 & (uint)fVar3 | (uint)param_1[1] & uVar8);
    fStack_1c = (float)(~uVar9 & (uint)fVar4 | (uint)param_1[2] & uVar9);
    fStack_18 = (float)(~uVar10 & (uint)fVar5 | (uint)param_1[3] & uVar10);
    if ((param_3 & 2) == 0) {
      local_24 = local_24 + _DAT_102b8aa0;
      fStack_20 = fStack_20 + _UNK_102b8aa4;
      fStack_1c = fStack_1c + _UNK_102b8aa8;
      fStack_18 = fStack_18 + _UNK_102b8aac;
      auVar1._4_4_ = -(uint)(fStack_18 <= fVar5);
      auVar1._0_4_ = -(uint)(fStack_1c <= fVar4);
      auVar1._8_4_ = -(uint)(fVar2 <= local_24);
      auVar1._12_4_ = -(uint)(fVar3 <= fStack_20);
      iVar6 = movmskps(param_3,auVar1);
      if (iVar6 != 0xf) {
        local_38 = 0;
        local_40 = &local_24;
        local_3c = &fStack_1c;
        FUN_101881b4();
        local_3c = (float *)0x3f800000;
        local_40 = (float *)0x3b;
        local_38 = FUN_100fcb39();
        local_2c = 0;
        local_34 = local_28;
        local_40 = &local_24;
        local_30 = 0x40000000;
        local_3c = &fStack_1c;
        FUN_1018b762();
        FUN_10188384();
        goto LAB_100fe404;
      }
    }
    local_3c = (float *)0x3f800000;
    local_40 = (float *)0x3b;
    local_38 = FUN_100fcb39();
    local_34 = local_28;
    local_40 = &local_24;
    local_2c = 0;
    local_30 = 0x40000000;
    local_3c = &fStack_1c;
    FUN_1018b762();
  }
LAB_100fe404:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

