/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e0b80 */

void FUN_1400e0b80(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    uVar1 = FUN_140077ab4(0);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1401c5180(uVar1,*(longlong *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x10) << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x18));
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

