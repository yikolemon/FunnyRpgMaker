/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180013073 */

void Unwind_180013073(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x185);
  *(undefined1 *)(param_2 + 0x184) = uVar1;
  FUN_180001ef2(param_2 + 0x88);
  *(undefined1 *)(param_2 + 0x184) = uVar1;
  return;
}

