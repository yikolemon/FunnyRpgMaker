/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040d208 */

undefined4 * __cdecl FUN_0040d208(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2[2];
  uVar1 = iVar2 + 1;
  if ((uint)param_2[3] < uVar1) {
    (**(code **)*param_2)(uVar1);
    iVar2 = param_2[2];
    uVar1 = iVar2 + 1;
  }
  param_2[2] = uVar1;
  *(undefined2 *)(param_2[1] + iVar2 * 2) = param_3;
  *param_1 = param_2;
  return param_1;
}

