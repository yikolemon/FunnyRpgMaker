/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007e50b */

undefined8 FUN_14007e50b(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 6;
  }
  else {
    FUN_14007ea56(param_1);
    FUN_14007eb77(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

