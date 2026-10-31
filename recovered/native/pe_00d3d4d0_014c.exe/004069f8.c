/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004069f8 */

void __cdecl
FUN_004069f8(undefined4 *param_1,undefined4 *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_2[4];
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  *param_1 = param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined2 *)((int)param_1 + 10) = param_4;
  return;
}

