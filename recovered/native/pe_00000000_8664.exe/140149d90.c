/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140149d90 */

void FUN_140149d90(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2f8) != 0) {
      FUN_140128b39(uVar1);
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
    FUN_14014b9a1(param_1);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x248));
    *(undefined8 *)(param_1 + 0x248) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x230));
    *(undefined8 *)(param_1 + 0x230) = 0;
    FUN_140129161(*(undefined8 *)(param_1 + 0x238),uVar1);
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x238));
    *(undefined8 *)(param_1 + 0x238) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x208));
    *(undefined8 *)(param_1 + 0x208) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1d8));
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      FUN_14014bda1(uVar1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

