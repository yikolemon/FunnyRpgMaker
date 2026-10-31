/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031939e */

void FUN_14031939e(undefined8 param_1)

{
  if (*(code **)(DAT_14062a630 + 0xc50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001403193b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14062a630 + 0xc50))(DAT_14062a630,param_1);
    return;
  }
  return;
}

