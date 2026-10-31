/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401384d0 */

void FUN_1401384d0(void)

{
  longlong lVar1;
  PVOID pvVar2;
  
  while (DAT_1401ca390 < 10) {
    lVar1 = DAT_1401ca390 * 8;
    DAT_1401ca390 = DAT_1401ca390 + 1;
    pvVar2 = DecodePointer(*(PVOID *)(&DAT_1401d45d0 + lVar1));
    if (pvVar2 != (PVOID)0x0) {
      (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
  }
  return;
}

