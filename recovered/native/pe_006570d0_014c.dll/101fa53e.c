/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fa53e */

void __fastcall FUN_101fa53e(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_101c4c3e(*(undefined4 *)(param_1 + 0x48),param_1 + 0x4c);
  }
  (**(code **)(param_1 + 0x18))(param_1);
  return;
}

