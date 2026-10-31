/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180245f60 */

int FUN_180245f60(longlong param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    sVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,0xffff);
    if (sVar1 != -1) {
      iVar2 = fflush(*(FILE **)(param_1 + 0x80));
      return (-1 < iVar2) - 1;
    }
  }
  return 0;
}

