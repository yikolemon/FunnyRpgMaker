/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049aa90 */

int __cdecl FUN_0049aa90(ushort *param_1,ushort *param_2,int param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; ((param_3 = param_3 + -1, param_3 != 0 && (*param_1 != 0)) && (*param_1 == *param_2));
      param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

