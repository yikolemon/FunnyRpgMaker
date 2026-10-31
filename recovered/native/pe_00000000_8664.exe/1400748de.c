/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400748de */

void Unwind_1400748de(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xcb);
  uVar2 = *(undefined1 *)(param_2 + 0xcc);
  *(undefined1 *)(param_2 + 200) = uVar2;
  *(undefined1 *)(param_2 + 0xca) = uVar1;
  FUN_14000109c(param_2 + 0x78);
  *(undefined1 *)(param_2 + 200) = uVar2;
  *(undefined1 *)(param_2 + 0xca) = uVar1;
  return;
}

