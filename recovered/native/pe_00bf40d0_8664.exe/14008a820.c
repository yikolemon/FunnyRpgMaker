/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008a820 */

int FUN_14008a820(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      return (-1 < iVar1) - 1;
    }
  }
  return 0;
}

