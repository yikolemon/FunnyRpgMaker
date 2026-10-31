/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014fcec */

void FUN_14014fcec(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x18))(param_1);
    }
    if (*(longlong *)(param_1 + 0x3e0) != 0) {
      FUN_140155176();
      FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x3e0));
      *(undefined8 *)(param_1 + 0x3e0) = 0;
    }
    FUN_140150419(param_1);
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  return;
}

