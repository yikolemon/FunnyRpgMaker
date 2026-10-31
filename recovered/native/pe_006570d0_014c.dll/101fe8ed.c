/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fe8ed */

void __fastcall FUN_101fe8ed(int param_1)

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
  FUN_101ff8fd();
  return;
}

