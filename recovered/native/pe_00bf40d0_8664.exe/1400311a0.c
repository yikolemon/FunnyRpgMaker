/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400311a0 */

void FUN_1400311a0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x1180) = param_2;
  *(undefined4 *)(param_1 + 0x1178) = *(undefined4 *)(param_2 + 0x24);
  return;
}

