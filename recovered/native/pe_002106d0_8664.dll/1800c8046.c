/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c8046 */

void Unwind_1800c8046(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x378) = param_2 + 0x60;
  *(undefined1 *)(param_2 + 0x3a1) = 1;
  *(undefined1 *)(param_2 + 0x3a0) = 1;
  FUN_180004cea(param_2 + 0x1e8);
  *(longlong *)(param_2 + 0x378) = param_2 + 0x60;
  *(undefined1 *)(param_2 + 0x3a1) = 1;
  *(undefined1 *)(param_2 + 0x3a0) = 1;
  return;
}

