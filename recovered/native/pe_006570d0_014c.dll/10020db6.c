/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10020db6 */

undefined4 __thiscall
FUN_10020db6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  if ((param_6 >> 10 & 1) == 0) {
    FUN_10021412(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_1002134c(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return param_2;
}

