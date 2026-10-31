/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800df79c */

void Unwind_1800df79c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1cf);
  *(undefined1 *)(param_2 + 0x1ce) = uVar1;
  FUN_180001ef2(param_2 + 0x180);
  *(undefined1 *)(param_2 + 0x1ce) = uVar1;
  return;
}

