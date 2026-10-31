/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fdd21 */

void FUN_1801fdd21(longlong param_1)

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
  FUN_1801ca18d(*(undefined8 *)(param_1 + 0x288),uVar1);
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x288));
  *(undefined8 *)(param_1 + 0x288) = 0;
  FUN_1801ffa84(param_1);
  return;
}

