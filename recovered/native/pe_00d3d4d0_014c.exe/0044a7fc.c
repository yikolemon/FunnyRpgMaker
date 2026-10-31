/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044a7fc */

void __fastcall FUN_0044a7fc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_0041c607(iVar1,*(int *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(char *)(param_1 + 0x5d) == '\0') {
    FUN_0041c607(iVar1,*(int *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  (**(code **)(param_1 + 0x18))(param_1);
  return;
}

