/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180012524 */

undefined8 * FUN_180012524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      FUN_18000171c(param_1,*param_1);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}

