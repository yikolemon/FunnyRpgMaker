/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100868a4 */

undefined4 * __thiscall FUN_100868a4(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c3270;
  local_1c = ExceptionList;
  local_24 = param_1 + 2;
  ExceptionList = &local_1c;
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
    uVar2 = FUN_10086cfe(*(undefined4 *)(param_2 + 8));
    *local_24 = uVar2;
    break;
  case 2:
    local_20 = (undefined1 *)&local_28;
    uVar2 = FUN_1008706c(*(undefined4 *)(param_2 + 8));
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
  ExceptionList = local_1c;
  return local_28;
}

