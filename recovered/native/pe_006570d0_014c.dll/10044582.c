/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044582 */

undefined4 * FUN_10044582(undefined4 *param_1,int *param_2)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a660;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10044618(param_2[1] - *param_2,param_2,param_2 + 1);
  *(char *)(param_1 + 6) = (char)param_2[6];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  ExceptionList = local_1c;
  return param_1;
}

