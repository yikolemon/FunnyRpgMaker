/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140060006 */

void Unwind_140060006(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0x28),0x20);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  return;
}

