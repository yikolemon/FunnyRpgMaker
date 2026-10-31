/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5060 */

/* WARNING: Switch with 1 destination removed at 0x0001400b5097 */

void FUN_1400b5060(void)

{
  undefined8 *puVar1;
  
  if ((DAT_14013cb48 != 0) &&
     (puVar1 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1401200f0)(),
     puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001400b31a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

