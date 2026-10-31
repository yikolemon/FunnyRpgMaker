/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102723f0 */

void FUN_102723f0(void)

{
  undefined *puVar1;
  
  if (DAT_1039b3e0 != 0xffffffff) {
    puVar1 = FlsGetValue(DAT_1039b3e0);
    FlsSetValue(DAT_1039b3e0,(PVOID)0x0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_103a5010)) {
      thunk_FUN_10274120(puVar1);
    }
  }
  return;
}

