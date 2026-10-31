/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ce967 */

int FUN_1400ce967(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  iVar1 = *(int *)(param_1 + 0x18);
  if (param_2 < iVar1) {
    iVar1 = FUN_140076955(local_14,(longlong)param_2 + *(longlong *)(param_1 + 0x20),
                          (longlong)iVar1 + *(longlong *)(param_1 + 0x20));
    iVar1 = iVar1 + param_2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

