/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10148eda */

void FUN_10148eda(float *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 **ppuVar5;
  float10 fVar6;
  undefined4 **local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float *local_1c;
  float local_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_78;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  if ((*(int *)(iVar2 + 0x1cc) != 0) &&
     ((*(uint *)(iVar2 + 0x1d0) >> ((byte)((char)*(int *)(iVar2 + 0x1cc) - 1) & 0x1f) & 1) != 0)) {
    iVar1 = *(int *)(DAT_1039d74c + 0x1fdc) + *(int *)(DAT_1039d74c + 0x1fd4) * 0x28;
    local_50 = (float *)(float)(int)*(float *)(iVar1 + -0xc);
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_60 = (float)(int)(*param_1 - *(float *)(DAT_1039d74c + 0xd24));
    fStack_5c = (float)(int)param_1[1];
    local_74 = *(float *)(DAT_1039d74c + 0xd98);
    local_64 = 0.0;
    uStack_58 = 0;
    uStack_54 = 0;
    if (0.0 < local_74) {
      local_78 = (undefined4 **)(local_60 - (float)local_50);
      fVar6 = (float10)FUN_100ea38a();
      local_64 = (float)fVar6;
      local_40 = local_64;
    }
    local_74 = fStack_5c - local_64;
    local_78 = *(undefined4 ***)(iVar1 + -8);
    local_3c = local_74;
    fStack_38 = fStack_5c;
    fStack_34 = fStack_5c;
    fStack_30 = fStack_5c;
    local_2c = fStack_5c;
    fStack_28 = fStack_5c;
    fStack_24 = fStack_5c;
    fStack_20 = fStack_5c;
    fVar6 = (float10)FUN_100fdbca();
    *(float *)(iVar1 + -8) = (float)fVar6;
    if ((float)local_50 < local_60) {
      if (local_64 <= 0.0) {
        local_64 = *(float *)(iVar3 + 0xd94);
        local_74 = 1.0;
        local_78 = (undefined4 **)0x37;
        local_6c = (float)FUN_100fcb39();
        local_68 = local_64;
        local_70 = local_2c;
        local_74 = local_60;
        local_78 = (undefined4 **)local_50;
        FUN_1018b44e();
      }
      else {
        local_50 = (float *)(DAT_102b70e0 + local_64 + (float)local_50);
        local_78 = &local_1c;
        local_18 = local_3c;
        local_74 = local_64;
        local_6c = 4.2039e-45;
        local_70 = 8.40779e-45;
        local_1c = local_50;
        FUN_10189c26();
        if ((float)local_50 < local_60) {
          iVar1 = *(int *)(iVar2 + 0x2e8);
          iVar4 = *(int *)(iVar1 + 0x38);
          if (iVar4 == *(int *)(iVar1 + 0x3c)) {
            if (iVar4 == 0) {
              ppuVar5 = (undefined4 **)0x8;
            }
            else {
              ppuVar5 = (undefined4 **)(iVar4 / 2 + iVar4);
            }
            local_50 = (float *)(iVar4 + 1);
            if (iVar4 + 1 < (int)ppuVar5) {
              local_50 = (float *)ppuVar5;
            }
            local_78 = (undefined4 **)((int)local_50 * 8);
            ppuVar5 = (undefined4 **)FUN_100fa1fa();
            local_74 = *(float *)(iVar1 + 0x40);
            if (local_74 != 0.0) {
              local_70 = (float)(*(int *)(iVar1 + 0x38) << 3);
              local_78 = ppuVar5;
              FUN_1025b2d0();
              local_78 = *(undefined4 ***)(iVar1 + 0x40);
              FUN_100fa2cb();
            }
            *(undefined4 ***)(iVar1 + 0x40) = ppuVar5;
            *(float **)(iVar1 + 0x3c) = local_50;
            iVar4 = *(int *)(iVar1 + 0x38);
          }
          else {
            ppuVar5 = *(undefined4 ***)(iVar1 + 0x40);
          }
          *(ulonglong *)(ppuVar5 + iVar4 * 2) = CONCAT44(fStack_5c,local_60);
          *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 1;
        }
        iVar2 = *(int *)(iVar2 + 0x2e8);
        local_60 = *(float *)(iVar3 + 0xd94);
        local_74 = 1.0;
        local_78 = (undefined4 **)0x37;
        local_70 = (float)FUN_100fcb39();
        local_74 = *(float *)(iVar2 + 0x38);
        local_78 = *(undefined4 ***)(iVar2 + 0x40);
        local_68 = 0.0;
        local_6c = local_60;
        FUN_101888a4();
        *(undefined4 *)(iVar2 + 0x38) = 0;
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

