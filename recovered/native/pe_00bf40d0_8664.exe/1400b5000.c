/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5000 */

void FUN_1400b5000(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = DAT_14013cb58;
  while (puVar1 != (undefined8 *)0x0) {
    DAT_14013cb58 = (undefined8 *)*puVar1;
    lVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)();
    if (lVar2 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar2,1);
    }
    thunk_FUN_1400a1290(puVar1);
    puVar1 = DAT_14013cb58;
  }
  DAT_14013cb58 = puVar1;
  return;
}

