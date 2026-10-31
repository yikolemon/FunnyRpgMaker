/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ce82 */

void Unwind_14005ce82(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xbf);
  *(undefined1 *)(param_2 + 0xbe) = uVar1;
  FUN_14000109c(param_2 + 0x90);
  *(undefined1 *)(param_2 + 0xbe) = uVar1;
  return;
}

