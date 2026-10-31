/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015934f */

void FUN_14015934f(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x28);
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

