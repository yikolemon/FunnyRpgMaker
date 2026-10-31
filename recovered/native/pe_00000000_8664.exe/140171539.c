/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140171539 */

void FUN_140171539(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_140128b39();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

