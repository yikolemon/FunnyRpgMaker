/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180200600 */

void FUN_180200600(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x18))(param_1);
    }
    if (*(longlong *)(param_1 + 0x3e0) != 0) {
      FUN_180205a8a();
      FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x3e0));
      *(undefined8 *)(param_1 + 0x3e0) = 0;
    }
    FUN_180200d2d(param_1);
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  return;
}

