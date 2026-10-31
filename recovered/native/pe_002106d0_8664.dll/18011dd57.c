/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011dd57 */

void FUN_18011dd57(longlong param_1,undefined4 *param_2)

{
  if ((*(char *)(param_1 + 0x108) == '\x01') &&
     (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x78) == param_1)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10) = 0;
  }
  *(undefined4 **)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(bool *)(param_1 + 0x108) = *(longlong *)(param_2 + 0x1e) == param_1;
  return;
}

