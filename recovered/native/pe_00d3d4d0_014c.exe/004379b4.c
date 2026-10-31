/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004379b4 */

undefined4 __fastcall FUN_004379b4(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00437e95(param_1);
  uVar2 = (**(code **)(*(int *)(param_1[0x66] + 0x38) + 0x3c))(uVar1);
  (**(code **)(*(int *)(param_1[0x66] + 0x38) + 0x30))(uVar1);
  return uVar2;
}

