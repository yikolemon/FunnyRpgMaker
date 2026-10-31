/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008f0d2 */

int * __thiscall
FUN_1008f0d2(int *param_1,uint param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6
            ,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar1 = param_1[4];
  if (0x7ffffffeU - iVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  local_1c = param_1[5];
  uVar3 = param_2 + iVar1 | 7;
  local_18 = 0x7ffffffe;
  if (((uVar3 < 0x7fffffff) && (local_20 = iVar1, local_1c <= 0x7ffffffe - (local_1c >> 1))) &&
     (local_18 = (local_1c >> 1) + local_1c, local_18 < uVar3)) {
    local_18 = uVar3;
  }
  iVar2 = FUN_10001406(param_1,&local_18);
  param_1[4] = param_2 + iVar1;
  param_1[5] = local_18;
  if (local_1c < 8) {
    FUN_1025b2d0(iVar2,param_1,param_4 * 2);
    iVar4 = param_4 * 2 + iVar2;
    FUN_1025b2d0(iVar4,param_6,param_7 * 2);
    FUN_1025b2d0(iVar4 + param_7 * 2,(int)param_1 + param_5 * 2 + param_4 * 2,
                 ((iVar1 - param_5) - param_4) * 2 + 2);
  }
  else {
    local_20 = *param_1;
    FUN_1025b2d0(iVar2,local_20,param_4 * 2);
    iVar4 = param_4 * 2 + iVar2;
    FUN_1025b2d0(iVar4,param_6,param_7 * 2);
    FUN_1025b2d0(iVar4 + param_7 * 2,local_20 + param_4 * 2 + param_5 * 2,
                 ((iVar1 - param_5) - param_4) * 2 + 2);
    FUN_100017aa(param_1,local_20,local_1c);
  }
  *param_1 = iVar2;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

