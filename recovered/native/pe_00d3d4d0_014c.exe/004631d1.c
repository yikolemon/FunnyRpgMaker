/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004631d1 */

bool __fastcall FUN_004631d1(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  uVar2 = param_2 + *(int *)(param_1 + 0x238);
  bVar3 = *(uint *)(param_1 + 0x230) <= uVar2;
  if (!bVar3) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x240) + uVar2 * 4);
    param_3[3] = uVar1;
    param_3[1] = uVar1;
    param_3[2] = *(undefined4 *)(*(int *)(param_1 + 0x240) + 4 + uVar2 * 4);
  }
  return bVar3;
}

