/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140118614 */

bool FUN_140118614(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_140118464(param_2 - param_1);
  dVar2 = (double)FUN_140118464(param_3 - param_1);
  return dVar1 < dVar2;
}

