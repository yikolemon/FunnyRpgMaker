/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140138370 */

/* WARNING: Switch with 1 destination removed at 0x0001401383a7 */

void FUN_140138370(void)

{
  undefined8 *puVar1;
  
  if ((DAT_1401cc4b8 != 0) &&
     (puVar1 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_140178c20)(),
     puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140135df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

