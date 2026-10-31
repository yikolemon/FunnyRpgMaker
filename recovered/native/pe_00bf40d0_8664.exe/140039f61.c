/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140039f61 */

void FUN_140039f61(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar3 = *(longlong *)(param_1 + 0x2d0);
    if (*(code **)(param_1 + 1000) != (code *)0x0) {
      (**(code **)(param_1 + 1000))(*(undefined8 *)(param_1 + 0x3e0));
    }
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(param_1);
    }
    FUN_140047803(param_1);
    FUN_14004782e(param_1);
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x3d8));
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    FUN_14002115a(lVar2,(longlong *)(param_1 + 0x3b8));
    FUN_14002115a(lVar2,(longlong *)(param_1 + 0x3c8));
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    FUN_14003f52d(param_1);
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  return;
}

