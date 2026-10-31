/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140133258 */

void FUN_140133258(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x1180) = param_2;
  *(undefined4 *)(param_1 + 0x1178) = *(undefined4 *)(param_2 + 0x24);
  return;
}

