/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d4120 */

void FUN_1400d4120(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  FUN_1400d39b0(local_res8,0);
  if (DAT_1401cc4d8 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar1,1);
    }
  }
  DAT_1401cc4d8 = 0;
  FUN_1400d3a00(local_res8);
  return;
}

