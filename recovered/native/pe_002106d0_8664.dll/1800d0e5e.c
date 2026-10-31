/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0e5e */

undefined8 FUN_1800d0e5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  FUN_180016c4c(&local_28);
  uVar1 = FUN_1800536de(param_1,param_2);
  thunk_FUN_1802464a0(uVar1,0x20);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

