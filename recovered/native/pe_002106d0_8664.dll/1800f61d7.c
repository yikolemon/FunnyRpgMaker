/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f61d7 */

void FUN_1800f61d7(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  while (plVar1 = (longlong *)FUN_1800188ac(param_1), local_28 == *plVar1) {
    WaitOnAddress(param_1,&local_28,8,0xffffffff);
  }
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  return;
}

