/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e254a */

void Unwind_1800e254a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  thunk_FUN_1802464a0(*(undefined8 *)(param_2 + 0x28),0x18);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  return;
}

