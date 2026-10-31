/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd470 */

void FUN_1800bd470(longlong param_1)

{
  FUN_1800bd8be(param_1 + 0x20);
  if (*(longlong *)(param_1 + 8) != 0) {
    (*DAT_180417870)();
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

