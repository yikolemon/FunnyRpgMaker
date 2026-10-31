/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180004ef0 */

void Unwind_180004ef0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xe6);
  *(undefined1 *)(param_2 + 0xe7) = uVar1;
  FUN_180001ef2(param_2 + 0xc0);
  *(undefined1 *)(param_2 + 0xe7) = uVar1;
  return;
}

