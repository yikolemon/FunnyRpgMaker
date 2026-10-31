/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401fae */

void __cdecl FUN_00401fae(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  
  puVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_00406ade(param_1,param_2,*puVar1);
  return;
}

