/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00457075 */

void __fastcall FUN_00457075(int param_1)

{
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_0041c607(*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  return;
}

