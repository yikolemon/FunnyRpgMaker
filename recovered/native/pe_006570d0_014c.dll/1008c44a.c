/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c44a */

undefined4 * __thiscall FUN_1008c44a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_c = 0xffffffff;
  local_10 = &LAB_100c36a0;
  local_14 = ExceptionList;
  if (param_1[4] == 0) {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    *(undefined1 *)param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    ExceptionList = &local_14;
    FUN_100868a4(param_1[4]);
    ExceptionList = local_14;
  }
  return param_2;
}

