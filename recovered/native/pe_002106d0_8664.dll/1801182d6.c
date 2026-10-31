/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801182d6 */

int FUN_1801182d6(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_1c = param_1;
  iVar1 = FUN_1800fed08(&local_1c,4,param_2);
  if (*(int *)(DAT_180419160 + 0x1660) == iVar1) {
    FUN_180117b67(iVar1,4,(longlong)param_1,0);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

