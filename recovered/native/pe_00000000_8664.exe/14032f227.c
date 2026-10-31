/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032f227 */

void FUN_14032f227(longlong param_1,undefined4 *param_2)

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

