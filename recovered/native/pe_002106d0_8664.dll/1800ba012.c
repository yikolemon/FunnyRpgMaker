/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ba012 */

void Unwind_1800ba012(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x2b7);
  *(undefined1 *)(param_2 + 0x2b6) = uVar1;
  FUN_180001ef2(param_2 + 0x140);
  *(undefined1 *)(param_2 + 0x2b6) = uVar1;
  return;
}

