/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2f67 */

double FUN_1801d2f67(double param_1)

{
  double dVar1;
  
  dVar1 = DAT_18032a328;
  if (0.0 <= param_1) {
    if (DAT_18032a328 <= param_1) {
      dVar1 = (double)FUN_180285280(param_1,DAT_18032a328);
      return dVar1;
    }
  }
  else {
    param_1 = (double)FUN_180285280(param_1,DAT_18032a328);
    param_1 = param_1 + dVar1;
  }
  return param_1;
}

