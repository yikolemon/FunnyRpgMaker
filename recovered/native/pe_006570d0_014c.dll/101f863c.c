/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f863c */

void __fastcall FUN_101f863c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1[4] != 0) && (uVar1 = param_1[4], param_1[3] != 0)) {
    uVar1 = 0;
    do {
      FUN_101c0017(param_2,*(undefined4 *)(param_1[4] + uVar1 * 4));
      *(undefined4 *)(param_1[4] + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1[3]);
    uVar1 = param_1[4];
  }
  FUN_101c0017(param_2,uVar1);
  param_1[4] = 0;
  uVar1 = 0;
  if ((param_1[1] != 0) && (uVar1 = param_1[1], *param_1 != 0)) {
    uVar1 = 0;
    do {
      FUN_101c0017(param_2,*(undefined4 *)(param_1[1] + 4 + uVar1 * 8));
      *(undefined4 *)(param_1[1] + 4 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_1);
    uVar1 = param_1[1];
  }
  FUN_101c0017(param_2,uVar1);
  param_1[1] = 0;
  return;
}

