/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c2ce */

void Unwind_18001c2ce(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xbd);
  *(undefined1 *)(param_2 + 0xbf) = uVar1;
  FUN_18000d016(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0xbf) = uVar1;
  return;
}

