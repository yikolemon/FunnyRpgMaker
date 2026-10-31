/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001cbbc */

int __fastcall FUN_1001cbbc(int param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100593d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = param_1 + 0x20;
  local_14 = 0;
  local_2c = param_1;
  local_24 = local_28;
  local_30 = FUN_1001d146(0);
  local_28 = local_24;
  FUN_1001d1e2();
  local_28 = local_24;
  FUN_1001d25a(local_30);
  local_28 = local_24;
  iVar1 = FUN_1001d312();
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(local_2c + 0x40);
  *(int *)(iVar1 + 0x1c) = *(int *)(local_2c + 8) + 1;
  local_28 = local_24;
  local_24 = iVar1;
  FUN_1001d320(iVar1,0,0,1);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

