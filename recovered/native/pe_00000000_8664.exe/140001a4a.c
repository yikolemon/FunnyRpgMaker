/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001a4a */

void Unwind_140001a4a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x151);
  *(undefined1 *)(param_2 + 0x157) = uVar1;
  FUN_14000109c(param_2 + 0x100);
  *(undefined1 *)(param_2 + 0x157) = uVar1;
  return;
}

