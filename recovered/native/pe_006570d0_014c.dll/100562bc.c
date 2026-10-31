/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100562bc */

undefined8 * __thiscall FUN_100562bc(undefined8 *param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_28;
  local_10 = 0xffffffff;
  local_14 = &LAB_1005ad00;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_10056d24(&local_28,param_2);
  *param_1 = CONCAT44(uStack_24,local_28);
  ExceptionList = local_18;
  return param_1;
}

