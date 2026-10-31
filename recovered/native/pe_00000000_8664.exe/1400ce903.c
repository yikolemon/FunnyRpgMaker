/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ce903 */

int FUN_1400ce903(longlong param_1,uint param_2)

{
  int iVar1;
  
  if ((int)param_2 < 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_1400784ab(*(longlong *)(param_1 + 0x20),
                          (ulonglong)param_2 + *(longlong *)(param_1 + 0x20));
    iVar1 = iVar1 - *(int *)(param_1 + 0x20);
  }
  return iVar1;
}

