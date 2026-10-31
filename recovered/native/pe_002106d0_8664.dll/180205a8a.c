/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180205a8a */

void FUN_180205a8a(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_180204fb5(param_1 + 0x90);
  FUN_180204fb5(param_1 + 0x520);
  FUN_180204fb5(param_1 + 0x30);
  FUN_180204fb5(param_1 + 0x4f0);
  if (*(int *)(param_1 + 0x8a8) != 0) {
    uVar2 = 0;
    do {
      FUN_180205c13(uVar1,*(undefined8 *)(param_1 + 0x8b0 + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x8a8));
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x8b0));
    *(undefined8 *)(param_1 + 0x8b0) = 0;
  }
  FUN_180205c93(param_1 + 0xc0);
  FUN_180205ca2(param_1 + 0x4d0,*(undefined8 *)(param_1 + 8));
  FUN_1802058da(param_1 + 0x1110,uVar1);
  FUN_180205c13(uVar1,param_1 + 0x5e0);
  FUN_180205cd0(param_1 + 0x10b0,*(undefined8 *)(param_1 + 8));
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x10e8));
  *(undefined8 *)(param_1 + 0x10e8) = 0;
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x5b0));
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x5b8));
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x5c8));
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x5d0));
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (*(code **)(param_1 + 0x1108) != (code *)0x0) {
    (**(code **)(param_1 + 0x1108))(*(undefined8 *)(param_1 + 0x1100));
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x1100));
    *(undefined8 *)(param_1 + 0x1100) = 0;
  }
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x1130));
  *(undefined8 *)(param_1 + 0x1130) = 0;
  return;
}

