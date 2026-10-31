/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107ece */

void FUN_180107ece(undefined8 param_1)

{
  if (*(code **)(DAT_180419160 + 0xc50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180107ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_180419160 + 0xc50))(DAT_180419160,param_1);
    return;
  }
  return;
}

