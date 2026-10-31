/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00451cb6 */

void __fastcall FUN_00451cb6(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00420cb6(*(int *)(param_1 + 0x48),(int *)(param_1 + 0x4c));
  }
  (**(code **)(param_1 + 0x18))(param_1);
  return;
}

