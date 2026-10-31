/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014c8c1 */

undefined4 FUN_1014c8c1(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint *local_7c;
  uint *local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  char *local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint local_10;
  
  iVar1 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_7c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar1 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    uVar2 = 0;
    if ((*(byte *)(iVar1 + 0xd) & 4) != 0) {
      FUN_10115649();
      local_7c = (uint *)0x10334f73;
      FUN_101131fa();
      local_7c = (uint *)(float)(int)((*(float *)(iVar1 + 0x8c) * DAT_102b70e0 -
                                      *(float *)(iVar1 + 0x90)) + DAT_102b70e0);
      local_78 = (uint *)0x0;
      fVar3 = (float10)FUN_100fdbca();
      local_64 = (float)fVar3;
      local_78 = (uint *)(float)(int)(*(float *)(iVar1 + 0x8c) * DAT_102b70e0 + DAT_102b70e0);
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      local_60 = *(char **)(iVar1 + 0x50);
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      local_50 = *(float *)(iVar1 + 0x54) + *(float *)(iVar1 + 0x90);
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      local_70 = *(float *)(iVar1 + 0x60) + (float)local_60;
      local_30 = *(float *)(iVar1 + 0x94);
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      local_7c = *(uint **)(iVar1 + 0x88);
      local_40 = (float)local_78;
      fVar3 = (float10)FUN_100fdbca();
      local_68 = (float)fVar3;
      local_78 = (uint *)(local_70 - local_68);
      local_7c = (uint *)local_60;
      fVar3 = (float10)FUN_100fdbca();
      local_6c = (float)fVar3;
      fVar8 = local_40 + (float)local_60;
      fVar9 = local_50 + local_64;
      fVar10 = DAT_102b9640 + local_6c;
      fVar11 = local_30 + local_50;
      fVar8 = (float)(int)((int)fVar8 - (uint)((float)(int)fVar8 != fVar8 && fVar8 < 0.0));
      fVar9 = (float)(int)((int)fVar9 - (uint)((float)(int)fVar9 != fVar9 && fVar9 < 0.0));
      fVar10 = (float)(int)((int)fVar10 - (uint)((float)(int)fVar10 != fVar10 && fVar10 < 0.0));
      fVar11 = (float)(int)((int)fVar11 - (uint)((float)(int)fVar11 != fVar11 && fVar11 < 0.0));
      uVar4 = -(uint)(*(float *)(iVar1 + 0x23c) <= fVar8);
      uVar5 = -(uint)(*(float *)(iVar1 + 0x240) <= fVar9);
      uVar6 = -(uint)(fVar10 < *(float *)(iVar1 + 0x244));
      uVar7 = -(uint)(fVar11 < *(float *)(iVar1 + 0x248));
      local_20 = ~uVar4 & (uint)*(float *)(iVar1 + 0x23c) | (uint)fVar8 & uVar4;
      uStack_1c = ~uVar5 & (uint)*(float *)(iVar1 + 0x240) | (uint)fVar9 & uVar5;
      uStack_18 = ~uVar6 & (uint)*(float *)(iVar1 + 0x244) | (uint)fVar10 & uVar6;
      uStack_14 = ~uVar7 & (uint)*(float *)(iVar1 + 0x248) | (uint)fVar11 & uVar7;
      local_74 = 0;
      local_7c = &local_20;
      local_78 = &uStack_18;
      FUN_1010a52a();
      fVar8 = (float)local_60 + (float)*(undefined8 *)(iVar1 + 0x1a8);
      fVar9 = local_50 + (float)((ulonglong)*(undefined8 *)(iVar1 + 0x1a8) >> 0x20);
      *(ulonglong *)(iVar1 + 0x15c) = CONCAT44(fVar9,fVar8);
      *(ulonglong *)(iVar1 + 0x144) = CONCAT44(fVar9,fVar8);
      *(undefined4 *)(iVar1 + 0x1f0) = 0;
      *(undefined1 *)(iVar1 + 0x184) = 0;
      *(undefined4 *)(iVar1 + 0x19c) = 1;
      *(undefined1 *)(iVar1 + 0x1a7) = 1;
      FUN_10131ed3();
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_7c)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

