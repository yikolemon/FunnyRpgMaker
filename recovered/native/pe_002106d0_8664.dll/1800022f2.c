/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800022f2 */

int * FUN_1800022f2(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = FUN_1800024a1();
  }
  else {
    iVar1 = FUN_180239720(param_3);
    if (iVar1 == 0) {
      uVar2 = FUN_180002218();
    }
    else {
      uVar2 = FUN_1800024a1();
      param_3 = iVar1;
    }
  }
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = uVar2;
  return param_2;
}

