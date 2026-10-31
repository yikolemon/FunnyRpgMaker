/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ec1b5 */

void FUN_1801ec1b5(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1801c9b65(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

