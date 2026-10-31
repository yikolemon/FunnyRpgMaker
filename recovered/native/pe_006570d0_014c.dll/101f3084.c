/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f3084 */

void __fastcall FUN_101f3084(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(char *)(param_1 + 0x5d) == '\0') {
    FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  (**(code **)(param_1 + 0x18))(param_1);
  return;
}

