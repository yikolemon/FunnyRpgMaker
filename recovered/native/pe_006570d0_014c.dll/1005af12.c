/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005af12 */

int * __thiscall FUN_1005af12(int *param_1,int param_2,int param_3)

{
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1e20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = param_1;
  local_28 = FUN_10228350(0x18);
  *(int *)local_28 = local_28;
  *(int *)(local_28 + 4) = local_28;
  *(int *)(local_28 + 8) = local_28;
  *(undefined2 *)(local_28 + 0xc) = 0x101;
  *param_1 = local_28;
  local_14 = 0;
  while (param_2 != param_3) {
    local_2c = param_2;
    FUN_100bff72(local_28,param_2);
    param_2 = local_2c + 8;
  }
  ExceptionList = local_1c;
  return local_24;
}

