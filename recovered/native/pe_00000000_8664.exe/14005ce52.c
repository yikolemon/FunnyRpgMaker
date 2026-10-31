/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ce52 */

void Unwind_14005ce52(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xbd);
  *(undefined1 *)(param_2 + 0xbf) = uVar1;
  FUN_140013f0c(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0xbf) = uVar1;
  return;
}

