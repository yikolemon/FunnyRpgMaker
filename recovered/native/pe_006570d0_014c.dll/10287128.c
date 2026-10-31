/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287128 */

int FUN_10287128(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  
  if (0 < param_4) {
    param_4 = FUN_10271eb0(param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10271eb0(param_5,param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    iVar1 = (param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3;
    if (param_4 - param_6 == 0) {
      iVar1 = 2;
    }
  }
  else {
    iVar1 = ___acrt_CompareStringEx_36(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
  }
  return iVar1;
}

