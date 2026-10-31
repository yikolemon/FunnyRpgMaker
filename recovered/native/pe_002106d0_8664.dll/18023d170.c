/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d170 */

void FUN_18023d170(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  FUN_18023d240(local_res8,0);
  if (DAT_180417ef8 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar1,1);
    }
  }
  DAT_180417ef8 = 0;
  FUN_18023d290(local_res8);
  return;
}

