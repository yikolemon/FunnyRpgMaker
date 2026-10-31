/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008f6d0 */

undefined8
FUN_14008f6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6)

{
  if ((param_6 >> 10 & 1) == 0) {
    FUN_1400931c3(param_2);
  }
  else {
    FUN_1400930b9(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return param_2;
}

