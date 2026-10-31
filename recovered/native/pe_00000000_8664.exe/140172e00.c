/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140172e00 */

void FUN_140172e00(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    lVar2 = *(longlong *)(param_1 + 0x2d0);
    if (lVar2 != 0) {
      if (*(code **)(lVar2 + 0xa8) != (code *)0x0) {
        (**(code **)(lVar2 + 0xa8))(param_1);
      }
      if (*(code **)(lVar2 + 0xd8) != (code *)0x0) {
        (**(code **)(lVar2 + 0xd8))(param_1);
      }
      if (*(code **)(lVar2 + 0x100) != (code *)0x0) {
        (**(code **)(lVar2 + 0x100))(param_1);
        (**(code **)(lVar2 + 0x108))(param_1);
      }
      if (*(code **)(lVar2 + 0x170) != (code *)0x0) {
        (**(code **)(lVar2 + 0x170))(param_1);
      }
    }
    FUN_1401774f0(param_1);
    FUN_140177534(param_1);
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined2 *)(param_1 + 0xf4) = 0;
    FUN_14012dd2b(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x290);
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x430) = 0;
    if (*(char *)(param_1 + 400) != '\0') {
      FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1c0));
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1c8));
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined1 *)(param_1 + 400) = 0;
    }
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x308));
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined2 *)(param_1 + 0x302) = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x68))(param_1);
    }
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x480));
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x3f0));
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x418));
    *(undefined8 *)(param_1 + 0x418) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x428));
    *(undefined8 *)(param_1 + 0x428) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x378));
    *(undefined8 *)(param_1 + 0x378) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x380));
    *(undefined8 *)(param_1 + 0x380) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x390));
    *(undefined8 *)(param_1 + 0x390) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x3a0));
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  return;
}

