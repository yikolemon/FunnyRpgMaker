/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d1e0 */

void FUN_18028d1e0(void)

{
  undefined *puVar1;
  
  if (DAT_180415e80 != 0xffffffff) {
    puVar1 = FlsGetValue(DAT_180415e80);
    FlsSetValue(DAT_180415e80,(PVOID)0x0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_180421180)) {
      thunk_FUN_180290e40(puVar1);
      return;
    }
  }
  return;
}

