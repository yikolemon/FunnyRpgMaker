/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018cb4 */

void FUN_140018cb4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140018cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}

