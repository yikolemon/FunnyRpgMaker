/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001610e */

void Unwind_18001610e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x18) == '\x01') {
    FUN_180004cea(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}

