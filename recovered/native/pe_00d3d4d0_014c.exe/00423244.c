/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00423244 */

void __cdecl
FUN_00423244(double *param_1,double param_2,double param_3,double param_4,double param_5,
            double param_6,double param_7,double param_8)

{
  *param_1 = param_5 * (param_6 - param_2) + param_2;
  param_1[1] = param_5 * (param_7 - param_3) + param_3;
  param_1[2] = (param_8 - param_4) * param_5 + param_4;
  return;
}

