/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140044e60 */

undefined8 * FUN_140044e60(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *local_38 [2];
  longlong *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_14003d894(local_38,param_1,1);
  if ((*(byte *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
    local_28 = param_1;
    (**(code **)(*plVar1 + 0x50))(plVar1,local_20,0,1,1);
  }
  else {
    *local_20 = 0xffffffffffffffff;
    local_20[1] = 0;
    local_20[2] = 0;
  }
  plVar1 = *(longlong **)((longlong)local_38[0] + (longlong)*(int *)(*local_38[0] + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return local_20;
}

