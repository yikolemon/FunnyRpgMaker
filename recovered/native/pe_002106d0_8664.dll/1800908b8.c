/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800908b8 */

undefined8
FUN_1800908b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6)

{
  if ((param_6 >> 10 & 1) == 0) {
    FUN_180092f20(param_2);
  }
  else {
    FUN_180092e16(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return param_2;
}

