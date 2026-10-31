/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140049cef */

void FUN_140049cef(longlong param_1,longlong param_2)

{
  FUN_14001c53d(param_1,*(longlong *)(param_2 + 0x30));
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  FUN_14001c53d(param_1,*(longlong *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_14001c53d(param_1,param_2);
  return;
}

