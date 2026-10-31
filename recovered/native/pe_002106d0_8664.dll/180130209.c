/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180130209 */

void FUN_180130209(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_18012f879();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

