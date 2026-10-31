/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013c019 */

void FUN_14013c019(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    lVar3 = *(longlong *)(param_1 + 0x2d0);
    if (*(code **)(param_1 + 1000) != (code *)0x0) {
      (**(code **)(param_1 + 1000))(*(undefined8 *)(param_1 + 0x3e0));
    }
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(param_1);
    }
    FUN_1401498bb(param_1);
    FUN_1401498e6(param_1);
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x3d8));
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    FUN_14012dd2b(uVar2,param_1 + 0x3b8);
    FUN_14012dd2b(uVar2,param_1 + 0x3c8);
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    FUN_1401415e5(param_1);
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  return;
}

