/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3ae0 */

void FUN_1400d3ae0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar1,1);
      return;
    }
  }
  return;
}

