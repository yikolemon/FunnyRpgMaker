/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180020978 */

void FUN_180020978(longlong param_1,longlong param_2)

{
  *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = param_2;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = param_2;
  *(longlong *)(param_2 + 0x10) = param_1;
  return;
}

