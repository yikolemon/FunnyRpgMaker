/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cde2c */

void FUN_1800cde2c(longlong *param_1)

{
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1800ced47(&local_28);
  local_20 = local_28;
  local_28 = 0;
  local_30 = local_20;
  (**(code **)(*param_1 + 0x40))(param_1,&local_30);
  if (local_28 != 0) {
    local_20 = local_28;
    FUN_18003459c(local_28);
    thunk_FUN_1802464a0(local_20,0xd8);
  }
  return;
}

