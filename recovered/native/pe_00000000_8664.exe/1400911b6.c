/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400911b6 */

int FUN_1400911b6(longlong *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  iVar1 = FUN_140077fc4(&local_24,4,
                        *(undefined4 *)(param_1[0x2a] + -4 + (longlong)(int)param_1[0x29] * 4));
  if (*(int *)(*param_1 + 0x1660) == iVar1) {
    FUN_140090e7f(iVar1,4,(longlong)param_2,0);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

