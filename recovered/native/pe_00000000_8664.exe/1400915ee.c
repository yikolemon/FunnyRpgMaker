/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400915ee */

int FUN_1400915ee(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_1c = param_1;
  iVar1 = FUN_140077fc4(&local_1c,4,param_2);
  if (*(int *)(DAT_140f2a910 + 0x1660) == iVar1) {
    FUN_140090e7f(iVar1,4,(longlong)param_1,0);
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

