/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004b35b */

void FUN_14004b35b(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
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
  FUN_14001cb65(*(longlong *)(param_1 + 0x288),lVar1);
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x288));
  *(undefined8 *)(param_1 + 0x288) = 0;
  FUN_14004d0be(param_1);
  return;
}

