/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400250fb */

double FUN_1400250fb(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = DAT_1400e7478;
  if (0.0 <= param_1) {
    if (DAT_1400e7478 <= param_1) {
      dVar2 = (double)FUN_140098470(param_1,DAT_1400e7478);
      return dVar2;
    }
  }
  else {
    dVar1 = (double)FUN_140098470(param_1,DAT_1400e7478);
    param_1 = dVar1 + dVar2;
  }
  return param_1;
}

