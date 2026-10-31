/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00456065 */

void __fastcall FUN_00456065(int param_1)

{
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_1 + 0x5c);
  }
  if (*(code **)(param_1 + 0xec) != (code *)0x0) {
    (**(code **)(param_1 + 0xec))(param_1 + 0xc0);
  }
  if (*(code **)(param_1 + 0xbc) != (code *)0x0) {
    (**(code **)(param_1 + 0xbc))(param_1 + 0x90);
  }
  if (*(code **)(param_1 + 0x11c) != (code *)0x0) {
    (**(code **)(param_1 + 0x11c))(param_1 + 0xf0);
  }
  FUN_00457075(param_1);
  return;
}

