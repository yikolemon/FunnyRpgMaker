/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aaf00 */

void FUN_1802aaf00(void)

{
  longlong lVar1;
  PVOID pvVar2;
  
  while (DAT_1804039f8 < 10) {
    lVar1 = DAT_1804039f8 * 8;
    DAT_1804039f8 = DAT_1804039f8 + 1;
    pvVar2 = DecodePointer(*(PVOID *)(&DAT_180419240 + lVar1));
    if (pvVar2 != (PVOID)0x0) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
  }
  return;
}

