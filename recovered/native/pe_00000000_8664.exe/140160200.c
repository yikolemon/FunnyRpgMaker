/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140160200 */

void FUN_140160200(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_140160b75(*(undefined8 *)(param_1 + 0xe8));
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}

