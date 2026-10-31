/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140231e48 */

void FUN_140231e48(longlong param_1,longlong param_2)

{
  *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = param_2;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = param_2;
  *(longlong *)(param_2 + 0x10) = param_1;
  return;
}

