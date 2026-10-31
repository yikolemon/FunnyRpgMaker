/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bdce */

void Unwind_14003bdce(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x256);
  *(undefined1 *)(param_2 + 0x24c) = uVar1;
  FUN_14000109c(param_2 + 0xe0);
  *(undefined1 *)(param_2 + 0x24c) = uVar1;
  return;
}

