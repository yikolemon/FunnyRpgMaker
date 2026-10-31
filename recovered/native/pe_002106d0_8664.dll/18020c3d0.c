/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020c3d0 */

void FUN_18020c3d0(longlong param_1)

{
  if (*(code **)(param_1 + 0x100) != (code *)0x0) {
    (**(code **)(param_1 + 0x100))(param_1 + 0xb0);
  }
  if (*(code **)(param_1 + 0x1b8) != (code *)0x0) {
    (**(code **)(param_1 + 0x1b8))(param_1 + 0x168);
  }
  if (*(code **)(param_1 + 0x160) != (code *)0x0) {
    (**(code **)(param_1 + 0x160))(param_1 + 0x110);
  }
  if (*(code **)(param_1 + 0x210) != (code *)0x0) {
    (**(code **)(param_1 + 0x210))(param_1 + 0x1c0);
  }
  FUN_18020d41e(param_1);
  return;
}

