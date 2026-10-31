/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000dde4 */

void Unwind_14000dde4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_14000df46(*(longlong *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28),
                  *(undefined8 *)(param_2 + 0x38));
  }
  return;
}

