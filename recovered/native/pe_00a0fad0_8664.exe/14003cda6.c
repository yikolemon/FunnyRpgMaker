/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003cda6 */

undefined8 * FUN_14003cda6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 local_38 [16];
  longlong *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_14000cd6c(local_38,param_1);
  if ((*(byte *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
    local_28 = param_1;
    (**(code **)(*plVar1 + 0x50))(plVar1,local_20,0,1,2);
  }
  else {
    *local_20 = 0xffffffffffffffff;
    local_20[1] = 0;
    local_20[2] = 0;
  }
  FUN_14000ce2e(local_38);
  return local_20;
}

