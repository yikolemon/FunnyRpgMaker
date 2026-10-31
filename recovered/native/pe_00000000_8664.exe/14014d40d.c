/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014d40d */

void FUN_14014d40d(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x110) != (code *)0x0) {
    (**(code **)(param_1 + 0x110))(param_1 + 0xc0);
  }
  if (*(code **)(param_1 + 0x1c8) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c8))(param_1 + 0x178);
  }
  if (*(code **)(param_1 + 0x170) != (code *)0x0) {
    (**(code **)(param_1 + 0x170))(param_1 + 0x120);
  }
  if (*(code **)(param_1 + 0x220) != (code *)0x0) {
    (**(code **)(param_1 + 0x220))(param_1 + 0x1d0);
  }
  if (*(code **)(param_1 + 0x280) != (code *)0x0) {
    (**(code **)(param_1 + 0x280))(param_1 + 0x230);
  }
  FUN_140129161(*(undefined8 *)(param_1 + 0x288),uVar1);
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x288));
  *(undefined8 *)(param_1 + 0x288) = 0;
  FUN_14014f170(param_1);
  return;
}

