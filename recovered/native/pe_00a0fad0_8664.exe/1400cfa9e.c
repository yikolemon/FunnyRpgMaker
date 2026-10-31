/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cfa9e */

void Unwind_1400cfa9e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x344);
  uVar2 = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_2 + 800) = uVar2;
  *(undefined1 *)(param_2 + 0x349) = 0;
  *(undefined1 *)(param_2 + 0x348) = uVar1;
  FUN_14007bf0e(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 800) = uVar2;
  *(undefined1 *)(param_2 + 0x349) = 0;
  *(undefined1 *)(param_2 + 0x348) = uVar1;
  return;
}

