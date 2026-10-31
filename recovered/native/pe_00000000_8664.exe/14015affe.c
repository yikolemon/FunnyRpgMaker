/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015affe */

int FUN_14015affe(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  iVar1 = FUN_14012ae6d(*(undefined8 *)(*param_1 + 0x2b8),&local_20);
  if (iVar1 == 0) {
    param_1[8] = local_20;
    FUN_14012bc80();
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

