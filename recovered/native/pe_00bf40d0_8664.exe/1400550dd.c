/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400550dd */

void FUN_1400550dd(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14002115a(*(longlong *)(param_1 + 0x90),(longlong *)(param_1 + 0x98));
  }
                    /* WARNING: Could not recover jumptable at 0x000140055110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1);
  return;
}

