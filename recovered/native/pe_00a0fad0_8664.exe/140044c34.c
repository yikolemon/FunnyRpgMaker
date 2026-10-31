/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140044c34 */

undefined8 * FUN_140044c34(double *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  undefined1 local_118 [224];
  double local_38 [2];
  
  local_38[1] = -NAN;
  cVar1 = FUN_140022a03(param_3,local_38);
  if (((cVar1 == '\0') || (local_38[0] < *param_1)) ||
     (param_1[1] <= local_38[0] && local_38[0] != param_1[1])) {
    FUN_140009eb0(local_130,1);
    uVar2 = FUN_1400052b8(local_120,"Value ");
    uVar2 = FUN_1400058b9(uVar2,param_3);
    FUN_1400052b8(uVar2," not in range [");
    uVar2 = FUN_140022f40(local_120,*param_1);
    uVar2 = FUN_1400052b8(uVar2," - ");
    uVar2 = FUN_140022f40(uVar2,param_1[1]);
    FUN_1400052b8(uVar2,&DAT_1401705ae);
    FUN_1400170f8(local_118,param_2);
    FUN_140009ff0(local_130);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  return param_2;
}

