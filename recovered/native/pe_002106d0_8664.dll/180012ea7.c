/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180012ea7 */

void Unwind_180012ea7(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x187);
  *(undefined1 *)(param_2 + 0x186) = uVar1;
  FUN_180001ef2(param_2 + 0xe8);
  *(undefined1 *)(param_2 + 0x186) = uVar1;
  return;
}

