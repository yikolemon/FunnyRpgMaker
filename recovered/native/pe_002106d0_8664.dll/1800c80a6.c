/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c80a6 */

void Unwind_1800c80a6(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x380) = param_2 + 0xa0;
  *(undefined1 *)(param_2 + 0x3a3) = 1;
  *(undefined1 *)(param_2 + 0x3a2) = 1;
  FUN_180004cea(param_2 + 0x260);
  *(longlong *)(param_2 + 0x380) = param_2 + 0xa0;
  *(undefined1 *)(param_2 + 0x3a3) = 1;
  *(undefined1 *)(param_2 + 0x3a2) = 1;
  return;
}

