/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6d50 */

/* WARNING: Switch with 1 destination removed at 0x0001401c6d87 */

void FUN_1401c6d50(void)

{
  undefined8 *puVar1;
  
  if ((DAT_140f2abe8 != 0) &&
     (puVar1 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_140ee15d0)(),
     puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001401c4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

