/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e9e8 */

void Unwind_18016e9e8(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_180132bc8(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x68);
  return;
}

