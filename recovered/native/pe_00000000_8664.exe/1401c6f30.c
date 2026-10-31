/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6f30 */

void FUN_1401c6f30(void)

{
  longlong lVar1;
  PVOID pvVar2;
  
  while (DAT_140f1c6b0 < 10) {
    lVar1 = DAT_140f1c6b0 * 8;
    DAT_140f1c6b0 = DAT_140f1c6b0 + 1;
    pvVar2 = DecodePointer(*(PVOID *)(&DAT_140f32530 + lVar1));
    if (pvVar2 != (PVOID)0x0) {
      (*(code *)PTR__guard_dispatch_icall_140ee15d0)();
    }
  }
  return;
}

