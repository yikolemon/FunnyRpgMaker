/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ff8fd */

void __fastcall FUN_101ff8fd(int param_1)

{
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_101c0017(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  return;
}

