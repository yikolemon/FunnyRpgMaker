/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ba108 */

void Unwind_1800ba108(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined1 *)(param_2 + 0x2b5) = uVar1;
  FUN_180001ef2(param_2 + 0x1d8);
  *(undefined1 *)(param_2 + 0x2b5) = uVar1;
  return;
}

