/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1a09 */

void __fastcall FUN_100b1a09(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_28;
  local_14 = &LAB_100c1be0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  if (param_1 != param_2) {
    local_28 = param_3;
    do {
      local_24 = param_3;
      *local_24 = *param_1;
      uVar2 = param_1[3];
      param_1[3] = 0;
      uVar1 = *(undefined8 *)(param_1 + 1);
      param_1[2] = 0;
      param_1[1] = 0;
      *(undefined8 *)(local_24 + 1) = uVar1;
      local_24[3] = uVar2;
      param_3 = local_24 + 4;
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  local_10 = 0xffffffff;
  local_20 = param_3;
  FUN_100b1b3b();
  ExceptionList = local_18;
  return;
}

