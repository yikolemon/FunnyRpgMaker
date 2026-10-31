/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044b8e */

int * __thiscall
FUN_10044b8e(int *param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
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
  uVar4 = param_2 + iVar1 | 7;
  local_18 = 0x7ffffffe;
  if (((uVar4 < 0x7fffffff) && (local_20 = iVar1, local_1c <= 0x7ffffffe - (local_1c >> 1))) &&
     (local_18 = (local_1c >> 1) + local_1c, local_18 < uVar4)) {
    local_18 = uVar4;
  }
  iVar3 = FUN_10001406(param_1,&local_18);
  param_1[4] = param_2 + iVar1;
  param_1[5] = local_18;
  local_20 = iVar3;
  if (local_1c < 8) {
    FUN_1025b2d0(iVar3,param_1,param_4 * 2);
    iVar3 = iVar3 + param_4 * 2;
    FUN_1025b2d0(iVar3,param_5,param_6 * 2);
    FUN_1025b2d0(iVar3 + param_6 * 2,(int)param_1 + param_4 * 2,(iVar1 - param_4) * 2 + 2);
  }
  else {
    iVar2 = *param_1;
    FUN_1025b2d0(iVar3,iVar2,param_4 * 2);
    iVar3 = iVar3 + param_4 * 2;
    FUN_1025b2d0(iVar3,param_5,param_6 * 2);
    FUN_1025b2d0(param_6 * 2 + iVar3,iVar2 + param_4 * 2,(iVar1 - param_4) * 2 + 2);
    FUN_100017aa(param_1,iVar2,local_1c);
  }
  *param_1 = local_20;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

