/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020b912 */

int FUN_18020b912(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1801cbe99(*(undefined8 *)(*param_1 + 0x2b8),&local_20);
  if (iVar1 == 0) {
    param_1[8] = local_20;
    FUN_1801cccac();
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

