/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e4daf */

void Unwind_1800e4daf(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x6255);
  *(undefined1 *)(param_2 + 0x6254) = uVar1;
  FUN_180001ef2(param_2 + 0x6178);
  *(undefined1 *)(param_2 + 0x6254) = uVar1;
  return;
}

