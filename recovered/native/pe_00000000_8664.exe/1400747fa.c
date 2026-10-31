/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400747fa */

void Unwind_1400747fa(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xce);
  uVar2 = *(undefined1 *)(param_2 + 0xcf);
  *(undefined1 *)(param_2 + 0xcd) = uVar2;
  *(undefined1 *)(param_2 + 0xc9) = uVar1;
  FUN_14000109c(param_2 + 0x78);
  *(undefined1 *)(param_2 + 0xcd) = uVar2;
  *(undefined1 *)(param_2 + 0xc9) = uVar1;
  return;
}

