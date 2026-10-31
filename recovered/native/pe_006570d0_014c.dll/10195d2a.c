/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195d2a */

void __fastcall FUN_10195d2a(int param_1)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_10196060;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_14 = 0xffffffff;
  local_24 = param_1;
  ppuVar1 = &local_2c;
  if (*(int *)(param_1 + 200) != 0) {
    FUN_100fa2cb(*(int *)(param_1 + 200));
    ppuVar1 = (undefined4 **)local_20;
  }
  local_20 = (undefined1 *)ppuVar1;
  local_14 = 1;
  puVar2 = *(undefined4 **)(local_24 + 0xbc);
  local_28 = puVar2 + *(int *)(local_24 + 0xb4);
  while (puVar2 != local_28) {
    local_2c = puVar2;
    FUN_100fa2cb(*puVar2);
    puVar2 = local_2c + 1;
  }
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0xbc) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0xbc));
  }
  if (*(int *)(local_24 + 0x7c) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x7c));
  }
  if (*(int *)(local_24 + 0x70) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x70));
  }
  if (*(int *)(local_24 + 100) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 100));
  }
  if (*(int *)(local_24 + 0x58) == 0) {
    *unaff_FS_OFFSET = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 0x58));
    *unaff_FS_OFFSET = local_1c;
  }
  return;
}

