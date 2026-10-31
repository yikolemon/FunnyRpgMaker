/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c7fe6 */

void Unwind_1800c7fe6(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x370) = param_2 + 0x20;
  *(undefined1 *)(param_2 + 0x39f) = 1;
  *(undefined1 *)(param_2 + 0x39e) = 1;
  FUN_180004cea(param_2 + 0x308);
  *(longlong *)(param_2 + 0x370) = param_2 + 0x20;
  *(undefined1 *)(param_2 + 0x39f) = 1;
  *(undefined1 *)(param_2 + 0x39e) = 1;
  return;
}

