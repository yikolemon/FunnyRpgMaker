/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400811e6 */

void FUN_1400811e6(undefined8 param_1)

{
  if (*(code **)(DAT_140f2a910 + 0xc50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400811fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_140f2a910 + 0xc50))(DAT_140f2a910,param_1);
    return;
  }
  return;
}

