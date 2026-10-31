/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003cd10 */

void Unwind_14003cd10(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x11f);
  *(undefined1 *)(param_2 + 0x11e) = uVar1;
  FUN_14000109c(param_2 + 0xb0);
  *(undefined1 *)(param_2 + 0x11e) = uVar1;
  return;
}

