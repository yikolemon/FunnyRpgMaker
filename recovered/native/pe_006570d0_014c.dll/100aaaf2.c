/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aaaf2 */

void __fastcall FUN_100aaaf2(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *unaff_FS_OFFSET;
  int local_3c;
  int local_38;
  undefined1 local_34 [4];
  int local_30;
  undefined4 *local_2c;
  int local_28 [2];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1b70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1005c1aa();
  local_14 = 0;
  local_3c = *param_1;
  local_38 = *(int *)(local_3c + 0x10);
  if (0xf < *(uint *)(local_3c + 0x14)) {
    local_3c = *(int *)local_3c;
  }
  local_2c = param_1;
  FUN_100a9852(local_28);
  puVar1 = local_2c;
  local_14 = 0xffffffff;
  FUN_10060a06(local_28,*(undefined4 *)(local_28[0] + 4));
  FUN_102283a0(local_28[0],0x18);
  if (local_30 != 0) {
    FUN_100aaef8(local_34);
  }
  puVar1 = (undefined4 *)*puVar1;
  puVar1[4] = 0;
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = local_1c;
  return;
}

