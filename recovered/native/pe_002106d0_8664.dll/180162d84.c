/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180162d84 */

void FUN_180162d84(undefined8 *param_1)

{
  longlong local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong local_38;
  longlong local_30 [2];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18005b2ca(local_30);
  local_50 = *param_1;
  local_48 = *(longlong *)(local_50 + 0x10);
  if (0xf < *(ulonglong *)(local_50 + 0x18)) {
    local_50 = *(longlong *)local_50;
  }
  FUN_180162b30(local_40,&local_50,local_30);
  FUN_1800603f0(local_30,local_30,*(undefined8 *)(local_30[0] + 8));
  thunk_FUN_1802464a0(local_30[0],0x30);
  if (local_38 != 0) {
    FUN_1800af504(param_1[1],local_40);
  }
  param_1 = (undefined8 *)*param_1;
  param_1[2] = 0;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)param_1 = 0;
  return;
}

