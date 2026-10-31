/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107e9e */

void FUN_180107e9e(void)

{
  if (*(code **)(DAT_180419160 + 0x29d0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180107eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_180419160 + 0x29d0))();
    return;
  }
  return;
}

