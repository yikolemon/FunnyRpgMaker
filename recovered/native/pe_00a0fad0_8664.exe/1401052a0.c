/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401052a0 */

int FUN_1401052a0(longlong param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    sVar1 = (*(code *)PTR__guard_dispatch_icall_140178c20)(param_1,0xffff);
    if (sVar1 != -1) {
      iVar2 = fflush(*(FILE **)(param_1 + 0x80));
      return (-1 < iVar2) - 1;
    }
  }
  return 0;
}

