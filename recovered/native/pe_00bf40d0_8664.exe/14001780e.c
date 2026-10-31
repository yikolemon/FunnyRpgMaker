/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001780e */

void Unwind_14001780e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x9e);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  FUN_140005584((int *)(param_2 + 0x28));
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  return;
}

