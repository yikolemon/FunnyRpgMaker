/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14023264c */

undefined8
FUN_14023264c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6)

{
  if ((param_6 >> 10 & 1) == 0) {
    FUN_140232cd6(param_2);
  }
  else {
    FUN_140232be0(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return param_2;
}

