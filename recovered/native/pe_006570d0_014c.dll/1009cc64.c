/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009cc64 */

undefined8 * __thiscall FUN_1009cc64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_2c;
  local_14 = &LAB_100c3df0;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  uVar1 = *param_2;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)param_2 = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  local_2c = (int)param_1 + 0xc;
  uVar2 = *(undefined4 *)((int)param_2 + 0x14);
  *(undefined4 *)((int)param_2 + 0x14) = 0;
  uVar1 = *(undefined8 *)((int)param_2 + 0xc);
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  *(undefined8 *)((int)param_1 + 0xc) = uVar1;
  *(undefined4 *)((int)param_1 + 0x14) = uVar2;
  local_10 = 1;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  local_28 = (int)param_1 + 0x1c;
  local_20 = param_1;
  FUN_1006d7c2((undefined4 *)((int)param_2 + 0x1c));
  local_10 = 2;
  local_24 = (int)local_20 + 0x34;
  FUN_1006d7c2((undefined4 *)((int)param_2 + 0x34));
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

