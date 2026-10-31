/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140011410 */

void Unwind_140011410(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  thunk_FUN_1400ddcd0(*(undefined8 *)(param_2 + 0x28),0x18);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  return;
}

