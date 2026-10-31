/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b882a */

void * __fastcall FUN_101b882a(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *unaff_FS_OFFSET;
  int local_30;
  int local_2c;
  int local_28;
  void *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_101bcf50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined4 *)((int)param_1 + 0x104) = 0;
  *(undefined4 *)((int)param_1 + 0x100) = 0;
  *(undefined4 *)((int)param_1 + 0x108) = 0;
  *(undefined4 *)((int)param_1 + 0x110) = 0;
  *(undefined4 *)((int)param_1 + 0x10c) = 0;
  *(undefined4 *)((int)param_1 + 0x114) = 0;
  *(undefined4 *)((int)param_1 + 0x11c) = 0;
  *(undefined4 *)((int)param_1 + 0x118) = 0;
  *(undefined4 *)((int)param_1 + 0x120) = 0;
  local_14 = 2;
  local_30 = (int)param_1 + 0x128;
  local_24 = param_1;
  FUN_100fb460(&DAT_10356101);
  local_14 = 3;
  FUN_101b9292();
  pvVar3 = local_24;
  _memset(local_24,0,0x100);
  *(undefined4 *)((int)pvVar3 + 0x124) = 0xffffffff;
  iVar2 = *(int *)((int)pvVar3 + 0x10c);
  if (iVar2 == *(int *)((int)pvVar3 + 0x110)) {
    if (iVar2 == 0) {
      iVar1 = 8;
    }
    else {
      iVar1 = iVar2 / 2 + iVar2;
    }
    local_2c = iVar2 + 1;
    if (iVar2 + 1 < iVar1) {
      local_2c = iVar1;
    }
    iVar1 = FUN_100fa1fa(local_2c * 4);
    pvVar3 = local_24;
    if (*(int *)((int)local_24 + 0x114) != 0) {
      local_28 = iVar1;
      FUN_1025b2d0(iVar1,*(int *)((int)local_24 + 0x114),*(int *)((int)local_24 + 0x10c) << 2);
      FUN_100fa2cb(*(undefined4 *)((int)pvVar3 + 0x114));
      iVar1 = local_28;
    }
    *(int *)((int)local_24 + 0x114) = iVar1;
    *(int *)((int)local_24 + 0x110) = local_2c;
    iVar2 = *(int *)((int)local_24 + 0x10c);
    pvVar3 = local_24;
  }
  else {
    iVar1 = *(int *)((int)pvVar3 + 0x114);
  }
  *(undefined **)(iVar1 + iVar2 * 4) = &DAT_1033c2fc;
  iVar1 = *(int *)((int)pvVar3 + 0x10c);
  iVar2 = iVar1 + 1;
  *(int *)((int)pvVar3 + 0x10c) = iVar2;
  if (iVar2 == *(int *)((int)pvVar3 + 0x110)) {
    local_2c = iVar1 + 2;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (local_2c < iVar2) {
      local_2c = iVar2;
    }
    iVar1 = FUN_100fa1fa(local_2c * 4);
    pvVar3 = local_24;
    if (*(int *)((int)local_24 + 0x114) != 0) {
      local_28 = iVar1;
      FUN_1025b2d0(iVar1,*(int *)((int)local_24 + 0x114),*(int *)((int)local_24 + 0x10c) << 2);
      FUN_100fa2cb(*(undefined4 *)((int)pvVar3 + 0x114));
      iVar1 = local_28;
    }
    *(int *)((int)local_24 + 0x114) = iVar1;
    *(int *)((int)local_24 + 0x110) = local_2c;
    iVar2 = *(int *)((int)local_24 + 0x10c);
    pvVar3 = local_24;
  }
  else {
    iVar1 = *(int *)((int)pvVar3 + 0x114);
  }
  *(char **)(iVar1 + iVar2 * 4) = "HISTORY";
  iVar1 = *(int *)((int)pvVar3 + 0x10c);
  iVar2 = iVar1 + 1;
  *(int *)((int)pvVar3 + 0x10c) = iVar2;
  if (iVar2 == *(int *)((int)pvVar3 + 0x110)) {
    local_2c = iVar1 + 2;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (local_2c < iVar2) {
      local_2c = iVar2;
    }
    iVar1 = FUN_100fa1fa(local_2c * 4);
    pvVar3 = local_24;
    if (*(int *)((int)local_24 + 0x114) != 0) {
      local_28 = iVar1;
      FUN_1025b2d0(iVar1,*(int *)((int)local_24 + 0x114),*(int *)((int)local_24 + 0x10c) << 2);
      FUN_100fa2cb(*(undefined4 *)((int)pvVar3 + 0x114));
      iVar1 = local_28;
    }
    *(int *)((int)local_24 + 0x114) = iVar1;
    *(int *)((int)local_24 + 0x110) = local_2c;
    iVar2 = *(int *)((int)local_24 + 0x10c);
    pvVar3 = local_24;
  }
  else {
    iVar1 = *(int *)((int)pvVar3 + 0x114);
  }
  *(char **)(iVar1 + iVar2 * 4) = "CLEAR";
  iVar1 = *(int *)((int)pvVar3 + 0x10c);
  iVar2 = iVar1 + 1;
  *(int *)((int)pvVar3 + 0x10c) = iVar2;
  if (iVar2 == *(int *)((int)pvVar3 + 0x110)) {
    local_2c = iVar1 + 2;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (local_2c < iVar2) {
      local_2c = iVar2;
    }
    iVar1 = FUN_100fa1fa(local_2c * 4);
    pvVar3 = local_24;
    if (*(int *)((int)local_24 + 0x114) != 0) {
      local_28 = iVar1;
      FUN_1025b2d0(iVar1,*(int *)((int)local_24 + 0x114),*(int *)((int)local_24 + 0x10c) << 2);
      FUN_100fa2cb(*(undefined4 *)((int)pvVar3 + 0x114));
      iVar1 = local_28;
    }
    *(int *)((int)local_24 + 0x114) = iVar1;
    *(int *)((int)local_24 + 0x110) = local_2c;
    iVar2 = *(int *)((int)local_24 + 0x10c);
    pvVar3 = local_24;
  }
  else {
    iVar1 = *(int *)((int)pvVar3 + 0x114);
  }
  *(char **)(iVar1 + iVar2 * 4) = "CLASSIFY";
  *(int *)((int)pvVar3 + 0x10c) = *(int *)((int)pvVar3 + 0x10c) + 1;
  *(undefined2 *)((int)pvVar3 + 0x238) = 1;
  FUN_101b92e6(pvVar3,"Welcome to Dear ImGui!");
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

