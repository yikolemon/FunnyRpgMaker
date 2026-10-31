/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a6adc */

void FUN_1403a6adc(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    uVar1 = FUN_14030fcc8(0);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1404b97c0(uVar1,*(longlong *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x10) << 3);
      FUN_14030fda4(*(undefined8 *)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

