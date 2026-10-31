/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180155a37 */

int FUN_180155a37(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  iVar1 = *(int *)(param_1 + 0x18);
  if (param_2 < iVar1) {
    iVar1 = FUN_1800fd699(local_14,(longlong)param_2 + *(longlong *)(param_1 + 0x20),
                          (longlong)iVar1 + *(longlong *)(param_1 + 0x20));
    iVar1 = iVar1 + param_2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

