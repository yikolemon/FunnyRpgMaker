/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002490 */

int * FUN_140002490(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    ppuVar2 = FUN_14000298b();
  }
  else {
    iVar1 = FUN_140086a60(param_3);
    if (iVar1 == 0) {
      ppuVar2 = FUN_1400023b5();
    }
    else {
      ppuVar2 = FUN_14000298b();
      param_3 = iVar1;
    }
  }
  *param_2 = param_3;
  *(undefined ***)(param_2 + 2) = ppuVar2;
  return param_2;
}

