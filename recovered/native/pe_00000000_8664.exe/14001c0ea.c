/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001c0ea */

void Unwind_14001c0ea(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x9e);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  FUN_140013f0c(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  return;
}

