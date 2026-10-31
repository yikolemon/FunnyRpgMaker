/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008b922 */

int * __thiscall FUN_1008b922(int *param_1,int *param_2)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c35e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_10044618(param_1[1] - *param_1,param_1,param_1 + 1);
  *(undefined1 *)(*param_2 + param_1[3]) = 0x55;
  ExceptionList = local_1c;
  return param_2;
}

