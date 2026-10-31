/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107eb5 */

undefined8 FUN_180107eb5(void)

{
  undefined8 uVar1;
  
  if (*(code **)(DAT_180419160 + 0xc48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180107ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_180419160 + 0xc48))();
    return uVar1;
  }
  return 0;
}

