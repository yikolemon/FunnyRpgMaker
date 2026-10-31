/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00448ce2 */

void __fastcall FUN_00448ce2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
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
  FUN_0041cb3c(*(int *)(param_1 + 0x15c),iVar1);
  FUN_0041c607(iVar1,*(int *)(param_1 + 0x15c));
  *(undefined4 *)(param_1 + 0x15c) = 0;
  FUN_0044a7fc(param_1);
  return;
}

