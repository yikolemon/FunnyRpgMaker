/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003c3e9 */

void Unwind_14003c3e9(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1ed);
  *(undefined1 *)(param_2 + 0x1e9) = uVar1;
  FUN_14000109c(param_2 + 0x188);
  *(undefined1 *)(param_2 + 0x1e9) = uVar1;
  return;
}

