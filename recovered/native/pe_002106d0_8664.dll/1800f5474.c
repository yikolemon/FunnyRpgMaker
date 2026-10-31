/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f5474 */

void Unwind_1800f5474(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0;
  FUN_1800f54c6(*(undefined8 *)(param_2 + 0x20));
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 8);
  return;
}

