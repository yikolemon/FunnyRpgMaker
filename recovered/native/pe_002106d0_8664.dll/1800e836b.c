/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e836b */

void Unwind_1800e836b(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1a4);
  *(undefined1 *)(param_2 + 0x1a5) = uVar1;
  FUN_180001ef2(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x1a5) = uVar1;
  return;
}

