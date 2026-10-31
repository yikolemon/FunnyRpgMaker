/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008f622 */

undefined4 __thiscall
FUN_1008f622(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  if ((param_6 >> 10 & 1) == 0) {
    FUN_10091a6a(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_10091990(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return param_2;
}

