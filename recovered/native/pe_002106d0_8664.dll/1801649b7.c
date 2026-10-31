/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801649b7 */

void Unwind_1801649b7(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1d6);
  *(undefined1 *)(param_2 + 0x1d7) = uVar1;
  FUN_180001ef2(param_2 + 0x1b0);
  *(undefined1 *)(param_2 + 0x1d7) = uVar1;
  return;
}

