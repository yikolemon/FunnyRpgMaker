/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180210b14 */

void FUN_180210b14(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_180211489(*(undefined8 *)(param_1 + 0xe8));
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}

