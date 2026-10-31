/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087fd0 */

int FUN_140087fd0(longlong *param_1)

{
  short sVar1;
  int iVar2;
  
  if (param_1[0x10] != 0) {
    sVar1 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(param_1,0xffff);
    if (sVar1 != -1) {
      iVar2 = fflush((FILE *)param_1[0x10]);
      return (-1 < iVar2) - 1;
    }
  }
  return 0;
}

