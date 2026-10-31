/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cbfaf */

void Unwind_1800cbfaf(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xff);
  *(undefined1 *)(param_2 + 0xfe) = uVar1;
  FUN_180001ef2(param_2 + 0x60);
  *(undefined1 *)(param_2 + 0xfe) = uVar1;
  return;
}

