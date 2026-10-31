/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10091852 */

void FUN_10091852(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6)

{
  if ((param_6 & 0x100) == 0) {
    if (param_4 - param_3 <= param_2 - param_1) {
      FUN_1008eee8(param_1,param_2,param_3,param_4 - param_3 >> 1);
    }
    return;
  }
  FUN_1009191e();
  return;
}

