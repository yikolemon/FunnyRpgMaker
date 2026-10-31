/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007100 */

int * FUN_140007100(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = FUN_140007235();
  }
  else {
    iVar1 = FUN_1400d9c50(param_3);
    if (iVar1 == 0) {
      uVar2 = FUN_140007025();
    }
    else {
      uVar2 = FUN_140007235();
      param_3 = iVar1;
    }
  }
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = uVar2;
  return param_2;
}

