/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077e338 */

int FUN_14077e338(longlong param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x434) != 0) &&
     (iVar1 = *(int *)((ulonglong)*(uint *)(param_1 + 0x434) + 0x7c), iVar1 != 0)) {
    return iVar1;
  }
  return (int)param_1;
}

