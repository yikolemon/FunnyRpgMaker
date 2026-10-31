/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180207aa1 */

void FUN_180207aa1(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1801ced57(*(undefined8 *)(param_1 + 0x90),param_1 + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x000180207ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1);
  return;
}

