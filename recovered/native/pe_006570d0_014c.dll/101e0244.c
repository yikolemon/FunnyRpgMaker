/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e0244 */

undefined4 __fastcall FUN_101e0244(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_101e0725();
  uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x198) + 0x38) + 0x3c))(uVar1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x198) + 0x38) + 0x30))(uVar1);
  return uVar2;
}

