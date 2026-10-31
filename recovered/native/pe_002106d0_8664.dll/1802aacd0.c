/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aacd0 */

/* WARNING: Switch with 1 destination removed at 0x0001802aad07 */

void FUN_1802aacd0(void)

{
  undefined8 *puVar1;
  
  if ((DAT_180417ed8 != 0) &&
     (puVar1 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_18038bc80)(),
     puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001802a7f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

