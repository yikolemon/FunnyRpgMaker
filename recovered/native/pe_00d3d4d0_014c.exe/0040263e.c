/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040263e */

int * FUN_0040263e(int *param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  if (param_2 == 0) {
    param_2 = 0;
    ppuVar2 = FUN_00402b71();
  }
  else {
    iVar1 = std::_Winerror_map(param_2);
    if (iVar1 == 0) {
      ppuVar2 = FUN_00402538();
    }
    else {
      ppuVar2 = FUN_00402b71();
      param_2 = iVar1;
    }
  }
  *param_1 = param_2;
  param_1[1] = (int)ppuVar2;
  return param_1;
}

