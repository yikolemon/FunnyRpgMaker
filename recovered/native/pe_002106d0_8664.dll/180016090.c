/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180016090 */

void Unwind_180016090(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x18) == '\x01') {
    FUN_180004cea(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}

