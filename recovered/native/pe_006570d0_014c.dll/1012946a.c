/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012946a */

void __fastcall FUN_1012946a(int param_1)

{
  int *piVar1;
  int *unaff_FS_OFFSET;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1012cb90;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_14 = 3;
  local_24 = param_1;
  piVar1 = &local_24;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_10129444(*(int *)(param_1 + 0x90));
    piVar1 = (int *)local_20;
  }
  local_20 = (undefined1 *)piVar1;
  if (*(int *)(local_24 + 0x94) != 0) {
    FUN_10129444(*(int *)(local_24 + 0x94));
  }
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0xe4) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0xe4));
  }
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0xb0) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0xb0));
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

