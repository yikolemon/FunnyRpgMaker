/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5240 */

void FUN_1400b5240(void)

{
  longlong lVar1;
  PVOID pvVar2;
  
  while (DAT_14012ec58 < 10) {
    lVar1 = DAT_14012ec58 * 8;
    DAT_14012ec58 = DAT_14012ec58 + 1;
    pvVar2 = DecodePointer(*(PVOID *)(&DAT_14013d3a0 + lVar1));
    if (pvVar2 != (PVOID)0x0) {
      (*(code *)PTR__guard_dispatch_icall_1401200f0)();
    }
  }
  return;
}

