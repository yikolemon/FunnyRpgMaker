/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140155176 */

void FUN_140155176(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1401546a1(param_1 + 0x90);
  FUN_1401546a1(param_1 + 0x520);
  FUN_1401546a1(param_1 + 0x30);
  FUN_1401546a1(param_1 + 0x4f0);
  if (*(int *)(param_1 + 0x8a8) != 0) {
    uVar2 = 0;
    do {
      FUN_1401552ff(uVar1,*(undefined8 *)(param_1 + 0x8b0 + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x8a8));
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x8b0));
    *(undefined8 *)(param_1 + 0x8b0) = 0;
  }
  FUN_14015537f(param_1 + 0xc0);
  FUN_14015538e(param_1 + 0x4d0,*(undefined8 *)(param_1 + 8));
  FUN_140154fc6(param_1 + 0x1110,uVar1);
  FUN_1401552ff(uVar1,param_1 + 0x5e0);
  FUN_1401553bc(param_1 + 0x10b0,*(undefined8 *)(param_1 + 8));
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x10e8));
  *(undefined8 *)(param_1 + 0x10e8) = 0;
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x5b0));
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x5b8));
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x5c8));
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x5d0));
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (*(code **)(param_1 + 0x1108) != (code *)0x0) {
    (**(code **)(param_1 + 0x1108))(*(undefined8 *)(param_1 + 0x1100));
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1100));
    *(undefined8 *)(param_1 + 0x1100) = 0;
  }
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1130));
  *(undefined8 *)(param_1 + 0x1130) = 0;
  return;
}

