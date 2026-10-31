/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020eac3 */

void __fastcall FUN_1020eac3(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[4];
  FUN_1020f4ed();
  FUN_1020f4ed();
  FUN_101c0017(uVar1,param_1[2]);
  param_1[2] = 0;
  FUN_101c0017(uVar1,param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  return;
}

