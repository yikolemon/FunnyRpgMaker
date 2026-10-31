/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101032c6 */

void FUN_101032c6(void)

{
  if (*(code **)(DAT_1039d74c + 10000) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x101032d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_1039d74c + 10000))();
    return;
  }
  return;
}

