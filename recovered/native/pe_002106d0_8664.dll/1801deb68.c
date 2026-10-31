/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801deb68 */

undefined8 FUN_1801deb68(undefined8 *param_1,double param_2)

{
  undefined8 uVar1;
  
  if (param_2 <= DAT_18032a160) {
    return *param_1;
  }
  if (param_2 < 0.0) {
    uVar1 = FUN_1801d2ffc(*param_1,param_1[1],param_2 + DAT_1802ac578);
    return uVar1;
  }
  if (param_2 < DAT_1802df1c8) {
    uVar1 = FUN_1801d2ffc(param_1[1],param_1[2],param_2 + param_2);
    return uVar1;
  }
  if (param_2 < DAT_1802ac578) {
    uVar1 = FUN_1801d2ffc(param_1[2],param_1[3],param_2 + DAT_1802df1c0 + param_2 + DAT_1802df1c0);
    return uVar1;
  }
  return param_1[3];
}

