/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005842c */

void FUN_18005842c(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018005843a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(param_1 + 0x10,0);
  return;
}

