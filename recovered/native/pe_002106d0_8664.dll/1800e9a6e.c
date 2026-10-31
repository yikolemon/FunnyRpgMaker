/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e9a6e */

void FUN_1800e9a6e(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_180080a14(param_1 + 8,*param_1);
  *param_1 = 2;
  local_20 = param_2[1];
  local_28 = *param_2;
  uVar1 = FUN_1800e9ae0();
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

