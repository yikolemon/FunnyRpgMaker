/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013db4 */

undefined4 * __thiscall FUN_10013db4(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  uint *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_10058ec0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  uVar1 = *param_2;
  *(undefined1 *)param_1 = uVar1;
  local_28 = param_1;
  switch(uVar1) {
  case 1:
    local_20 = (undefined1 *)&local_28;
    uVar2 = FUN_10043d5a(*(undefined4 *)(param_2 + 8));
    *local_24 = uVar2;
    break;
  case 2:
    local_20 = (undefined1 *)&local_28;
    uVar2 = FUN_10044206(*(undefined4 *)(param_2 + 8));
    *local_24 = uVar2;
    break;
  case 3:
    local_20 = (undefined1 *)&local_28;
    uVar2 = FUN_10044450(*(undefined4 *)(param_2 + 8));
    *local_24 = uVar2;
    break;
  case 4:
    *local_24 = (uint)(byte)param_2[8];
    param_1[3] = 0;
    break;
  case 5:
    *(undefined8 *)local_24 = *(undefined8 *)(param_2 + 8);
    break;
  case 6:
    *(undefined8 *)local_24 = *(undefined8 *)(param_2 + 8);
    break;
  case 7:
    *(undefined8 *)local_24 = *(undefined8 *)(param_2 + 8);
    break;
  case 8:
    uVar2 = FUN_100444e8(*(undefined4 *)(param_2 + 8));
    *local_24 = uVar2;
  }
  *unaff_FS_OFFSET = local_1c;
  return local_28;
}

