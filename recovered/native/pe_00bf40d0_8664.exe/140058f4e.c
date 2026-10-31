/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140058f4e */

int FUN_140058f4e(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  iVar1 = FUN_14001e7f4(*(longlong *)(*param_1 + 0x2b8),&local_20);
  if (iVar1 == 0) {
    param_1[8] = (longlong)local_20;
    FUN_14001f607(local_20);
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

