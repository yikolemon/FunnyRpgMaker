/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140009292 */

void FUN_140009292(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_68 [7];
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 == param_1) || (*(longlong *)(param_2 + 0x38) == param_2)) {
    local_30 = (longlong *)0x0;
    FUN_140009352(local_68,param_1);
    FUN_140009352(param_1,param_2);
    FUN_140009352(param_2,local_68);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x20))(local_30,local_30 != local_68);
    }
  }
  else {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(longlong *)(param_2 + 0x38) = lVar1;
  }
  return;
}

