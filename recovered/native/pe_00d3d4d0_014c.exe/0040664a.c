/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040664a */

undefined4 * __cdecl FUN_0040664a(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 (*pauVar1) [32];
  uint uVar2;
  
  pauVar1 = (undefined1 (*) [32])*param_2;
  *param_1 = pauVar1;
  uVar2 = FUN_00494090(pauVar1);
  param_1[1] = uVar2;
  return param_1;
}

