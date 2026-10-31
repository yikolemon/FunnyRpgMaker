/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180215d5b */

void FUN_180215d5b(longlong param_1,longlong param_2,undefined2 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  longlong local_18;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = &local_a;
  lVar1 = param_2 + param_1;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  local_18 = param_1;
  local_a = param_3;
  FUN_18021619e(&local_18,lVar1,param_1,param_2);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

