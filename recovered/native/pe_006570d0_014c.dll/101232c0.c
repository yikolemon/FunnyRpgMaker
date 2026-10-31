/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101232c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101232c0(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong *local_70;
  int local_6c;
  int local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_54 [8];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined8 local_24;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_70;
  iVar9 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(int *)(DAT_1039d74c + 0xc9c) == 0) {
    local_54._4_4_ = DAT_102b8950._4_4_;
    local_54._0_4_ = (undefined4)DAT_102b8950;
    uStack_4c = _UNK_102b8958;
    uStack_48 = _UNK_102b895c;
    local_44._4_4_ = _UNK_102b8d24;
    local_44._0_4_ = _DAT_102b8d20;
    uStack_3c = _UNK_102b8d28;
    uStack_38 = _UNK_102b8d2c;
    iVar6 = DAT_1039d74c;
    fVar10 = (float)*(undefined8 *)(iVar9 + 0x144) + _DAT_102b8ff0;
    fVar11 = (float)((ulonglong)*(undefined8 *)(iVar9 + 0x144) >> 0x20) + _UNK_102b8ff4;
  }
  else {
    puVar7 = *(ulonglong **)(DAT_1039d74c + 0xca4);
    local_70 = puVar7 + *(int *)(DAT_1039d74c + 0xc9c) * 5;
    local_54._4_4_ = DAT_102b8950._4_4_;
    local_54._0_4_ = (undefined4)DAT_102b8950;
    uStack_4c = _UNK_102b8958;
    uStack_48 = _UNK_102b895c;
    local_44._4_4_ = _UNK_102b8d24;
    local_44._0_4_ = _DAT_102b8d20;
    uStack_3c = _UNK_102b8d28;
    uStack_38 = _UNK_102b8d2c;
    puVar4 = puVar7;
    do {
      uVar1 = *puVar4;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar1;
      auVar12._0_4_ = (float)puVar4[1] + (float)uVar1;
      auVar12._4_4_ = (float)(puVar4[1] >> 0x20) + (float)(uVar1 >> 0x20);
      auVar12._8_8_ = 0;
      _local_44 = maxps(auVar12,_local_44);
      _local_54 = minps(auVar13,_local_54);
      puVar4 = puVar4 + 5;
    } while (puVar4 != local_70);
    local_64 = _DAT_102b8fd0 * local_54._0_4_ + (float)*(undefined8 *)(iVar9 + 0x144);
    fStack_60 = _UNK_102b8fd4 * local_54._4_4_ +
                (float)((ulonglong)*(undefined8 *)(iVar9 + 0x144) >> 0x20);
    fStack_5c = _UNK_102b8fd8 * local_54._8_4_ + 0.0;
    fStack_58 = _UNK_102b8fdc * local_54._12_4_ + 0.0;
    local_6c = DAT_1039d74c;
    puVar4 = puVar7;
    local_68 = iVar9;
    local_34 = local_64;
    fStack_30 = fStack_60;
    fStack_2c = local_64;
    fStack_28 = fStack_60;
    do {
      fVar10 = (float)*puVar7;
      fVar11 = (float)(*puVar7 >> 0x20);
      fStack_1c = ((float)puVar7[1] + fVar10) * _UNK_102b8fe8 + fStack_2c;
      fStack_18 = ((float)(puVar7[1] >> 0x20) + fVar11) * _UNK_102b8fec + fStack_28;
      local_24 = CONCAT44(fVar11 * _UNK_102b8fe4 + fStack_30,fVar10 * _DAT_102b8fe0 + local_34);
      uVar5 = 0xff00ffff;
      if (*(int *)(local_6c + 0x2814) !=
          ((int)puVar4 - *(int *)(local_6c + 0xca4) >> 3) * -0x33333333) {
        uVar5 = FUN_100fcb39(5,0x3f800000);
      }
      FUN_1018b762(&local_24,&fStack_1c,uVar5,0x40800000,0x3f800000,0);
      iVar9 = local_68;
      uVar5 = FUN_100fcb39(5,0x3dcccccd);
      FUN_1018b85a(&local_24,&fStack_1c,uVar5,0x40800000,0);
      puVar7 = puVar7 + 5;
      puVar4 = puVar4 + 5;
      iVar6 = local_6c;
      fVar10 = local_64;
      fVar11 = fStack_60;
    } while (puVar7 != local_70);
  }
  iVar2 = *(int *)(iVar6 + 0x1fe0);
  if (iVar2 != 0) {
    iVar6 = *(int *)(iVar6 + 0x1fe8);
    iVar8 = 0;
    local_64 = fVar10;
    fStack_60 = fVar11;
    fStack_5c = fVar10;
    fStack_58 = fVar11;
    do {
      iVar3 = *(int *)(iVar6 + iVar8);
      fVar10 = (float)*(undefined8 *)(iVar3 + 8);
      fVar11 = (float)((ulonglong)*(undefined8 *)(iVar3 + 8) >> 0x20);
      fStack_1c = ((float)*(undefined8 *)(iVar3 + 0x10) + fVar10) * _UNK_102b8fe8 + fStack_5c;
      fStack_18 = ((float)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20) + fVar11) *
                  _UNK_102b8fec + fStack_58;
      local_24 = CONCAT44(fVar11 * _UNK_102b8fe4 + fStack_60,fVar10 * _DAT_102b8fe0 + local_64);
      FUN_1011d7b0(*(undefined4 *)(iVar9 + 0x2e8),iVar3,&local_24);
      iVar8 = iVar8 + 4;
    } while (iVar2 << 2 != iVar8);
  }
  local_24 = CONCAT44(((float)local_44._4_4_ - (float)local_54._4_4_) * _UNK_102b9004,
                      ((float)local_44._0_4_ - (float)local_54._0_4_) * _DAT_102b9000);
  FUN_10131d8e(&local_24);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_70)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

