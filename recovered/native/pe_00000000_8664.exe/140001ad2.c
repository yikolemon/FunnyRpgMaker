/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001ad2 */

void Unwind_140001ad2(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x155);
  uVar2 = *(undefined1 *)(param_2 + 0x156);
  *(undefined1 *)(param_2 + 0x153) = uVar2;
  *(undefined1 *)(param_2 + 0x154) = uVar1;
  FUN_14000109c(param_2 + 0xd0);
  *(undefined1 *)(param_2 + 0x153) = uVar2;
  *(undefined1 *)(param_2 + 0x154) = uVar1;
  return;
}

