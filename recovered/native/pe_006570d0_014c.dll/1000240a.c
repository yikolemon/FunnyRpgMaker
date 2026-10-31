/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000240a */

int * FUN_1000240a(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = 0;
    iVar2 = FUN_100025af();
  }
  else {
    iVar1 = std::_Winerror_map(param_2);
    if (iVar1 == 0) {
      iVar2 = FUN_10002303();
    }
    else {
      iVar2 = FUN_100025af();
      param_2 = iVar1;
    }
  }
  *param_1 = param_2;
  param_1[1] = iVar2;
  return param_1;
}

