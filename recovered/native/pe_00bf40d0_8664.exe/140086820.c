/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086820 */

void FUN_140086820(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_1401200f0)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar1,1);
      return;
    }
  }
  return;
}

