/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6cf0 */

void FUN_1401c6cf0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = DAT_140f2abf8;
  while (puVar1 != (undefined8 *)0x0) {
    DAT_140f2abf8 = (undefined8 *)*puVar1;
    lVar2 = (*(code *)PTR__guard_dispatch_icall_140ee15d0)();
    if (lVar2 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140ee15d0)(lVar2,1);
    }
    thunk_FUN_1401aea30(puVar1);
    puVar1 = DAT_140f2abf8;
  }
  DAT_140f2abf8 = puVar1;
  return;
}

