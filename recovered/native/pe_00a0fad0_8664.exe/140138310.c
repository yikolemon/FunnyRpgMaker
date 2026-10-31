/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140138310 */

void FUN_140138310(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = DAT_1401cc4c8;
  while (puVar1 != (undefined8 *)0x0) {
    DAT_1401cc4c8 = (undefined8 *)*puVar1;
    lVar2 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    if (lVar2 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar2,1);
    }
    thunk_FUN_1401212e0(puVar1);
    puVar1 = DAT_1401cc4c8;
  }
  DAT_1401cc4c8 = puVar1;
  return;
}

