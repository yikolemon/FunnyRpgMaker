/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012589c */

undefined8 FUN_14012589c(undefined8 *param_1,double param_2)

{
  undefined8 uVar1;
  
  if (param_2 <= DAT_140e8e150) {
    return *param_1;
  }
  if (param_2 < 0.0) {
    uVar1 = FUN_140119d30(*param_1,param_1[1],param_2 + DAT_1401ced60);
    return uVar1;
  }
  if (param_2 < DAT_140211f38) {
    uVar1 = FUN_140119d30(param_1[1],param_1[2],param_2 + param_2);
    return uVar1;
  }
  if (param_2 < DAT_1401ced60) {
    uVar1 = FUN_140119d30(param_1[2],param_1[3],param_2 + DAT_140211f30 + param_2 + DAT_140211f30);
    return uVar1;
  }
  return param_1[3];
}

