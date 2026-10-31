/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001a34c */

void Unwind_14001a34c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_14001a382(*(longlong *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),
                  *(undefined8 *)(param_2 + 0x30));
  }
  return;
}

