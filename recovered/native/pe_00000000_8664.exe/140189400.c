/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189400 */

void FUN_140189400(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  FUN_140188dc0(local_res8,0);
  if (DAT_140f2ac08 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_140ee15d0)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140ee15d0)(lVar1,1);
    }
  }
  DAT_140f2ac08 = 0;
  FUN_140188e10(local_res8);
  return;
}

