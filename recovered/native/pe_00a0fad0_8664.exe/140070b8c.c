/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140070b8c */

void Unwind_140070b8c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_140070cee(*(longlong *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28),
                  *(undefined8 *)(param_2 + 0x38));
  }
  return;
}

