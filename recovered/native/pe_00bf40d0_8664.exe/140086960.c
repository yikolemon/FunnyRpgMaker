/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086960 */

void FUN_140086960(void)

{
  longlong lVar1;
  int local_res8 [8];
  
  FUN_140086460(local_res8,0);
  if (DAT_14013cb68 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_1401200f0)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar1,1);
    }
  }
  DAT_14013cb68 = 0;
  FUN_1400864b0(local_res8);
  return;
}

