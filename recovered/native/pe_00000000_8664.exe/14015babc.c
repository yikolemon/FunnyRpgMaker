/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015babc */

void FUN_14015babc(longlong param_1)

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
  FUN_14015cb0a(param_1);
  return;
}

