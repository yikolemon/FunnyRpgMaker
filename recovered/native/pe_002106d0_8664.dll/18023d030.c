/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d030 */

void FUN_18023d030(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar1,1);
      return;
    }
  }
  return;
}

