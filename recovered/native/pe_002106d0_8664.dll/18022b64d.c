/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022b64d */

int FUN_18022b64d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1802246b0(param_1,param_2,&local_28);
  if (iVar1 == 0) {
    FUN_1801cfa7d(param_3,local_28,param_4);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

