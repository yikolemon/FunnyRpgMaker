/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134ae5 */

undefined4 __fastcall FUN_10134ae5(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  if (((param_2 == (double *)0x0) || (dVar1 = *param_2, dVar1 < *param_1 || dVar1 == *param_1)) &&
     ((param_3 == (double *)0x0 || (dVar1 = *param_3, *param_1 <= dVar1)))) {
    return 0;
  }
  *param_1 = dVar1;
  return 1;
}

