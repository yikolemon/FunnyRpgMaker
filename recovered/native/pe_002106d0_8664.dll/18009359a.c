/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009359a */

void Unwind_18009359a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xbf);
  *(undefined1 *)(param_2 + 0xbe) = uVar1;
  FUN_180001ef2(param_2 + 0x90);
  *(undefined1 *)(param_2 + 0xbe) = uVar1;
  return;
}

