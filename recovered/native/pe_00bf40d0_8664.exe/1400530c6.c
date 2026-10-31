/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400530c6 */

void FUN_1400530c6(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_1400525f1((longlong *)(param_1 + 0x90));
  FUN_1400525f1((longlong *)(param_1 + 0x520));
  FUN_1400525f1((longlong *)(param_1 + 0x30));
  FUN_1400525f1((longlong *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x8a8) != 0) {
    uVar2 = 0;
    do {
      FUN_14005324f(lVar1,*(longlong *)(param_1 + 0x8b0 + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x8a8));
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x8b0));
    *(undefined8 *)(param_1 + 0x8b0) = 0;
  }
  FUN_1400532cf((undefined8 *)(param_1 + 0xc0));
  FUN_1400532de((undefined8 *)(param_1 + 0x4d0),*(longlong *)(param_1 + 8));
  FUN_140052f16((uint *)(param_1 + 0x1110),lVar1);
  FUN_14005324f(lVar1,param_1 + 0x5e0);
  FUN_14005330c((undefined1 *)(param_1 + 0x10b0),*(longlong *)(param_1 + 8));
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x10e8));
  *(undefined8 *)(param_1 + 0x10e8) = 0;
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x5b0));
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x5b8));
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x5c8));
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x5d0));
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (*(code **)(param_1 + 0x1108) != (code *)0x0) {
    (**(code **)(param_1 + 0x1108))(*(undefined8 *)(param_1 + 0x1100));
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x1100));
    *(undefined8 *)(param_1 + 0x1100) = 0;
  }
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x1130));
  *(undefined8 *)(param_1 + 0x1130) = 0;
  return;
}

