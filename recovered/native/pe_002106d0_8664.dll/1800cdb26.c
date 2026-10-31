/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cdb26 */

void FUN_1800cdb26(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1 + 3;
  local_20 = param_2;
  FUN_180044980();
  local_38 = *local_20;
  *local_20 = 0;
  local_28 = local_38;
  (**(code **)(*param_1 + 0x40))(param_1,&local_38);
  FUN_18023d6e0(local_30);
  puVar1 = (undefined8 *)*local_20;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

