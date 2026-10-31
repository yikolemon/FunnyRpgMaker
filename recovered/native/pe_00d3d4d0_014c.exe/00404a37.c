/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404a37 */

void __cdecl FUN_00404a37(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}

