/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009681a */

void Unwind_14009681a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  thunk_FUN_1400ddcd0(*(undefined8 *)(param_2 + 0x28),0x20);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  return;
}

