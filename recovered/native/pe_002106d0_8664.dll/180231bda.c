/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180231bda */

void FUN_180231bda(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  iVar1 = FUN_18023218f(param_2);
  if (iVar1 == 0) {
    local_30 = *(undefined4 *)(param_1 + 1);
    local_38 = *param_1;
    FUN_1802323ab(&local_38,param_2,param_3,param_4);
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

