/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180165df4 */

void Unwind_180165df4(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_180132bc8(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}

