/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10021215 */

void FUN_10021215(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6)

{
  if ((param_6 & 0x100) == 0) {
    if (param_4 - param_3 <= param_2 - param_1) {
      FUN_10004e4d(param_1,param_2,param_3,param_4 - param_3);
    }
    return;
  }
  FUN_100212e2();
  return;
}

