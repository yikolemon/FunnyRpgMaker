/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bace4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_101bace4(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_64;
  local_18 = &LAB_101bcfd0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  local_14 = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_44 = 0;
  local_24 = param_1;
  FUN_101b75f6(&local_64,0x20,"%s","Lettuce");
  uStack_40 = CONCAT13(uStack_40._3_1_,0x101);
  uStack_3c = _DAT_10302ac0;
  uStack_38 = _UNK_10302ac4;
  uStack_34 = _UNK_10302ac8;
  uStack_30 = _UNK_10302acc;
  iVar3 = *local_24;
  if (iVar3 == local_24[1]) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    local_2c = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      local_2c = iVar4;
    }
    iVar4 = FUN_100fa1fa(local_2c * 0x38);
    piVar2 = local_24;
    if (local_24[2] != 0) {
      local_28 = iVar4;
      FUN_1025b2d0(iVar4,local_24[2],*local_24 * 0x38);
      FUN_100fa2cb(piVar2[2]);
      iVar4 = local_28;
    }
    local_24[2] = iVar4;
    local_24[1] = local_2c;
    iVar3 = *local_24;
  }
  else {
    iVar4 = local_24[2];
  }
  iVar3 = iVar3 * 0x38;
  *(ulonglong *)(iVar4 + 0x30 + iVar3) = CONCAT44(uStack_30,uStack_34);
  puVar1 = (undefined4 *)(iVar4 + 0x20 + iVar3);
  *puVar1 = local_44;
  puVar1[1] = uStack_40;
  puVar1[2] = uStack_3c;
  puVar1[3] = uStack_38;
  puVar1 = (undefined4 *)(iVar4 + 0x10 + iVar3);
  *puVar1 = local_54;
  puVar1[1] = uStack_50;
  puVar1[2] = uStack_4c;
  puVar1[3] = uStack_48;
  puVar1 = (undefined4 *)(iVar4 + iVar3);
  *puVar1 = local_64;
  puVar1[1] = uStack_60;
  puVar1[2] = uStack_5c;
  puVar1[3] = uStack_58;
  *local_24 = *local_24 + 1;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_44 = 1;
  FUN_101b75f6(&local_64,0x20,"%s","Eggplant");
  uStack_40 = CONCAT13(uStack_40._3_1_,0x101);
  uStack_3c = _DAT_10302ad0;
  uStack_38 = _UNK_10302ad4;
  uStack_34 = _UNK_10302ad8;
  uStack_30 = _UNK_10302adc;
  iVar3 = *local_24;
  if (iVar3 == local_24[1]) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    local_2c = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      local_2c = iVar4;
    }
    iVar4 = FUN_100fa1fa(local_2c * 0x38);
    piVar2 = local_24;
    if (local_24[2] != 0) {
      local_28 = iVar4;
      FUN_1025b2d0(iVar4,local_24[2],*local_24 * 0x38);
      FUN_100fa2cb(piVar2[2]);
      iVar4 = local_28;
    }
    local_24[2] = iVar4;
    local_24[1] = local_2c;
    iVar3 = *local_24;
  }
  else {
    iVar4 = local_24[2];
  }
  iVar3 = iVar3 * 0x38;
  *(ulonglong *)(iVar4 + 0x30 + iVar3) = CONCAT44(uStack_30,uStack_34);
  puVar1 = (undefined4 *)(iVar4 + 0x20 + iVar3);
  *puVar1 = local_44;
  puVar1[1] = uStack_40;
  puVar1[2] = uStack_3c;
  puVar1[3] = uStack_38;
  puVar1 = (undefined4 *)(iVar4 + 0x10 + iVar3);
  *puVar1 = local_54;
  puVar1[1] = uStack_50;
  puVar1[2] = uStack_4c;
  puVar1[3] = uStack_48;
  puVar1 = (undefined4 *)(iVar4 + iVar3);
  *puVar1 = local_64;
  puVar1[1] = uStack_60;
  puVar1[2] = uStack_5c;
  puVar1[3] = uStack_58;
  *local_24 = *local_24 + 1;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_44 = 2;
  FUN_101b75f6(&local_64,0x20,"%s","Carrot");
  uStack_40 = CONCAT13(uStack_40._3_1_,0x101);
  uStack_3c = _DAT_10302ae0;
  uStack_38 = _UNK_10302ae4;
  uStack_34 = _UNK_10302ae8;
  uStack_30 = _UNK_10302aec;
  iVar3 = *local_24;
  if (iVar3 == local_24[1]) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    local_2c = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      local_2c = iVar4;
    }
    iVar4 = FUN_100fa1fa(local_2c * 0x38);
    piVar2 = local_24;
    if (local_24[2] != 0) {
      local_28 = iVar4;
      FUN_1025b2d0(iVar4,local_24[2],*local_24 * 0x38);
      FUN_100fa2cb(piVar2[2]);
      iVar4 = local_28;
    }
    local_24[2] = iVar4;
    local_24[1] = local_2c;
    iVar3 = *local_24;
  }
  else {
    iVar4 = local_24[2];
  }
  iVar3 = iVar3 * 0x38;
  *(ulonglong *)(iVar4 + 0x30 + iVar3) = CONCAT44(uStack_30,uStack_34);
  puVar1 = (undefined4 *)(iVar4 + 0x20 + iVar3);
  *puVar1 = local_44;
  puVar1[1] = uStack_40;
  puVar1[2] = uStack_3c;
  puVar1[3] = uStack_38;
  puVar1 = (undefined4 *)(iVar4 + 0x10 + iVar3);
  *puVar1 = local_54;
  puVar1[1] = uStack_50;
  puVar1[2] = uStack_4c;
  puVar1[3] = uStack_48;
  puVar1 = (undefined4 *)(iVar4 + iVar3);
  *puVar1 = local_64;
  puVar1[1] = uStack_60;
  puVar1[2] = uStack_5c;
  puVar1[3] = uStack_58;
  *local_24 = *local_24 + 1;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_44 = 3;
  FUN_101b75f6(&local_64,0x20,"%s","Tomato");
  uStack_40 = uStack_40 & 0xff000000;
  uStack_3c = _DAT_10302af0;
  uStack_38 = _UNK_10302af4;
  uStack_34 = _UNK_10302af8;
  uStack_30 = _UNK_10302afc;
  iVar3 = *local_24;
  if (iVar3 == local_24[1]) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    local_2c = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      local_2c = iVar4;
    }
    iVar4 = FUN_100fa1fa(local_2c * 0x38);
    piVar2 = local_24;
    if (local_24[2] != 0) {
      local_28 = iVar4;
      FUN_1025b2d0(iVar4,local_24[2],*local_24 * 0x38);
      FUN_100fa2cb(piVar2[2]);
      iVar4 = local_28;
    }
    local_24[2] = iVar4;
    local_24[1] = local_2c;
    iVar3 = *local_24;
  }
  else {
    iVar4 = local_24[2];
  }
  iVar3 = iVar3 * 0x38;
  *(ulonglong *)(iVar4 + 0x30 + iVar3) = CONCAT44(uStack_30,uStack_34);
  puVar1 = (undefined4 *)(iVar4 + 0x20 + iVar3);
  *puVar1 = local_44;
  puVar1[1] = uStack_40;
  puVar1[2] = uStack_3c;
  puVar1[3] = uStack_38;
  puVar1 = (undefined4 *)(iVar4 + 0x10 + iVar3);
  *puVar1 = local_54;
  puVar1[1] = uStack_50;
  puVar1[2] = uStack_4c;
  puVar1[3] = uStack_48;
  puVar1 = (undefined4 *)(iVar4 + iVar3);
  *puVar1 = local_64;
  puVar1[1] = uStack_60;
  puVar1[2] = uStack_5c;
  puVar1[3] = uStack_58;
  *local_24 = *local_24 + 1;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_44 = 4;
  FUN_101b75f6(&local_64,0x20,"%s","A Rather Long Title");
  uStack_40 = uStack_40 & 0xff000000;
  uStack_3c = _DAT_10302b00;
  uStack_38 = _UNK_10302b04;
  uStack_34 = _UNK_10302b08;
  uStack_30 = _UNK_10302b0c;
  iVar3 = *local_24;
  if (iVar3 == local_24[1]) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    local_2c = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      local_2c = iVar4;
    }
    iVar4 = FUN_100fa1fa(local_2c * 0x38);
    piVar2 = local_24;
    if (local_24[2] != 0) {
      local_28 = iVar4;
      FUN_1025b2d0(iVar4,local_24[2],*local_24 * 0x38);
      FUN_100fa2cb(piVar2[2]);
      iVar4 = local_28;
    }
    local_24[2] = iVar4;
    local_24[1] = local_2c;
    iVar3 = *local_24;
  }
  else {
    iVar4 = local_24[2];
  }
  iVar3 = iVar3 * 0x38;
  *(ulonglong *)(iVar4 + 0x30 + iVar3) = CONCAT44(uStack_30,uStack_34);
  puVar1 = (undefined4 *)(iVar4 + 0x20 + iVar3);
  *puVar1 = local_44;
  puVar1[1] = uStack_40;
  puVar1[2] = uStack_3c;
  puVar1[3] = uStack_38;
  puVar1 = (undefined4 *)(iVar4 + 0x10 + iVar3);
  *puVar1 = local_54;
  puVar1[1] = uStack_50;
  puVar1[2] = uStack_4c;
  puVar1[3] = uStack_48;
  puVar1 = (undefined4 *)(iVar4 + iVar3);
  *puVar1 = local_64;
  puVar1[1] = uStack_60;
  puVar1[2] = uStack_5c;
  puVar1[3] = uStack_58;
  *local_24 = *local_24 + 1;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_44 = 5;
  FUN_101b75f6(&local_64,0x20,"%s","Some Document");
  uStack_40 = uStack_40 & 0xff000000;
  uStack_3c = _DAT_10302b10;
  uStack_38 = _UNK_10302b14;
  uStack_34 = _UNK_10302b18;
  uStack_30 = _UNK_10302b1c;
  iVar3 = *local_24;
  if (iVar3 == local_24[1]) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    local_2c = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      local_2c = iVar4;
    }
    local_28 = FUN_100fa1fa(local_2c * 0x38);
    piVar2 = local_24;
    if (local_24[2] != 0) {
      FUN_1025b2d0(local_28,local_24[2],*local_24 * 0x38);
      FUN_100fa2cb(piVar2[2]);
    }
    local_24[2] = local_28;
    local_24[1] = local_2c;
    iVar3 = *local_24;
  }
  else {
    local_28 = local_24[2];
  }
  iVar3 = iVar3 * 0x38;
  *(ulonglong *)(local_28 + 0x30 + iVar3) = CONCAT44(uStack_30,uStack_34);
  puVar1 = (undefined4 *)(local_28 + 0x20 + iVar3);
  *puVar1 = local_44;
  puVar1[1] = uStack_40;
  puVar1[2] = uStack_3c;
  puVar1[3] = uStack_38;
  puVar1 = (undefined4 *)(local_28 + 0x10 + iVar3);
  *puVar1 = local_54;
  puVar1[1] = uStack_50;
  puVar1[2] = uStack_4c;
  puVar1[3] = uStack_48;
  puVar1 = (undefined4 *)(local_28 + iVar3);
  *puVar1 = local_64;
  puVar1[1] = uStack_60;
  puVar1[2] = uStack_5c;
  puVar1[3] = uStack_58;
  *local_24 = *local_24 + 1;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

