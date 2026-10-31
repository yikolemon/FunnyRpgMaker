/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f156a */

void __fastcall FUN_101f156a(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    (**(code **)(param_1 + 0x90))(param_1 + 100);
  }
  if (*(code **)(param_1 + 0xf4) != (code *)0x0) {
    (**(code **)(param_1 + 0xf4))(param_1 + 200);
  }
  if (*(code **)(param_1 + 0xc4) != (code *)0x0) {
    (**(code **)(param_1 + 0xc4))(param_1 + 0x98);
  }
  if (*(code **)(param_1 + 0x124) != (code *)0x0) {
    (**(code **)(param_1 + 0x124))(param_1 + 0xf8);
  }
  if (*(code **)(param_1 + 0x158) != (code *)0x0) {
    (**(code **)(param_1 + 0x158))(param_1 + 300);
  }
  FUN_101c054c(*(undefined4 *)(param_1 + 0x15c),uVar1);
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x15c));
  *(undefined4 *)(param_1 + 0x15c) = 0;
  FUN_101f3084();
  return;
}

