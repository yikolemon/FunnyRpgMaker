/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140060ffa */

undefined8
FUN_140060ffa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6)

{
  if ((param_6 >> 10 & 1) == 0) {
    FUN_140064924(param_2);
  }
  else {
    FUN_14006481a(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return param_2;
}

