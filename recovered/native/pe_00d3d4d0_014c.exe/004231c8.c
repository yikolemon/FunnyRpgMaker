/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004231c8 */

bool __cdecl FUN_004231c8(double param_1,double param_2,double param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00422f8c(param_2 - param_1);
  fVar2 = (float10)FUN_00422f8c(param_3 - param_1);
  return (double)fVar1 < (double)fVar2;
}

