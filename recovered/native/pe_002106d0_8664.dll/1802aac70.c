/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aac70 */

void FUN_1802aac70(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = DAT_180417ee8;
  while (puVar1 != (undefined8 *)0x0) {
    DAT_180417ee8 = (undefined8 *)*puVar1;
    lVar2 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    if (lVar2 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar2,1);
    }
    thunk_FUN_180290e40(puVar1);
    puVar1 = DAT_180417ee8;
  }
  DAT_180417ee8 = puVar1;
  return;
}

