/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801559d3 */

int FUN_1801559d3(longlong param_1,uint param_2)

{
  int iVar1;
  
  if ((int)param_2 < 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_1800ff1ef(*(longlong *)(param_1 + 0x20),
                          (ulonglong)param_2 + *(longlong *)(param_1 + 0x20));
    iVar1 = iVar1 - *(int *)(param_1 + 0x20);
  }
  return iVar1;
}

