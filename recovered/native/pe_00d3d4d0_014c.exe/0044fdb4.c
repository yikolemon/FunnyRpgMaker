/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044fdb4 */

void __fastcall FUN_0044fdb4(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1[4] != 0) && (uVar1 = param_1[4], param_1[3] != 0)) {
    uVar1 = 0;
    do {
      FUN_0041c607(param_2,*(int *)(param_1[4] + uVar1 * 4));
      *(undefined4 *)(param_1[4] + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1[3]);
    uVar1 = param_1[4];
  }
  FUN_0041c607(param_2,uVar1);
  param_1[4] = 0;
  uVar1 = 0;
  if ((param_1[1] != 0) && (uVar1 = param_1[1], *param_1 != 0)) {
    uVar1 = 0;
    do {
      FUN_0041c607(param_2,*(int *)(param_1[1] + 4 + uVar1 * 8));
      *(undefined4 *)(param_1[1] + 4 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_1);
    uVar1 = param_1[1];
  }
  FUN_0041c607(param_2,uVar1);
  param_1[1] = 0;
  return;
}

