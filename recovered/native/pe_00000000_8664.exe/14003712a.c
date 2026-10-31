/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003712a */

void FUN_14003712a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140037136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}

