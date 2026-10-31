/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016840e */

void FUN_18016840e(longlong param_1,int param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x66 + (longlong)param_2 * 0x74) == '\x01') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0x74 + 0x70) = 1;
    *(short *)(param_1 + 0x210) = (short)param_2;
  }
  return;
}

