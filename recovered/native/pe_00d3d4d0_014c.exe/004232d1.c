/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004232d1 */

double * __cdecl
FUN_004232d1(double *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,double param_6,double param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,double param_12,int param_13)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_0042328c((double)CONCAT44(param_9,param_8),(double)CONCAT44(param_11,param_10),
                       param_12,param_13);
  fVar2 = FUN_0042328c((double)CONCAT44(param_3,param_2),(double)CONCAT44(param_5,param_4),param_6,
                       param_13);
  fVar1 = FUN_00423214((double)fVar2,param_7,(double)fVar1);
  FUN_00423244(param_1,(double)CONCAT44(param_3,param_2),(double)CONCAT44(param_5,param_4),param_6,
               (double)fVar1,(double)CONCAT44(param_9,param_8),(double)CONCAT44(param_11,param_10),
               param_12);
  return param_1;
}

