/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011e691 */

void FUN_18011e691(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2958) != 0) {
    *(undefined8 *)(param_1 + 0x2950) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x2958) = 0;
  }
  FUN_18011f19a();
  return;
}

