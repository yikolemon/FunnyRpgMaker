/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009794d */

void FUN_14009794d(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2958) != 0) {
    *(undefined8 *)(param_1 + 0x2950) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x2958) = 0;
  }
  FUN_140098456();
  return;
}

