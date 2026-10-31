/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139ea7 */

uint FUN_180139ea7(uint param_1,uint param_2,undefined8 param_3,uint param_4)

{
  if (((short)param_2 == 0) ||
     ((int)(param_1 & 0xffff) <= (int)((param_4 & 0xffff) - (param_2 & 0xffff)))) {
    param_4 = param_2 + param_1;
  }
  return param_4;
}

