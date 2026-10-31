/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400811b6 */

void FUN_1400811b6(void)

{
  if (*(code **)(DAT_140f2a910 + 0x29d0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400811c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_140f2a910 + 0x29d0))();
    return;
  }
  return;
}

