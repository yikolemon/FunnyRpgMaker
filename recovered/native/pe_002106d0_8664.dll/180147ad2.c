/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180147ad2 */

void FUN_180147ad2(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 4) != *(int *)(param_2 + 8)) {
    FUN_180155f01();
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}

