/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa220 */

void FUN_1802aa220(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_180248010(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}

