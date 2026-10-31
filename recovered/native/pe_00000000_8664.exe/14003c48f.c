/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003c48f */

void Unwind_14003c48f(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1ec);
  *(undefined1 *)(param_2 + 0x1e8) = uVar1;
  FUN_14000109c(param_2 + 0x188);
  *(undefined1 *)(param_2 + 0x1e8) = uVar1;
  return;
}

