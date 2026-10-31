/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a28f2 */

int * __thiscall
FUN_100a28f2(int *param_1,uint param_2,undefined4 param_3,int param_4,int param_5,undefined2 param_6
            )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  local_28 = param_1[4];
  if (0x7ffffffeU - local_28 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  local_2c = param_2 + local_28;
  uVar2 = param_1[5];
  uVar4 = local_2c | 7;
  local_18 = 0x7ffffffe;
  if (((uVar4 < 0x7fffffff) && (uVar2 <= 0x7ffffffe - (uVar2 >> 1))) &&
     (local_18 = (uVar2 >> 1) + uVar2, local_18 < uVar4)) {
    local_18 = uVar4;
  }
  local_1c = param_1;
  iVar3 = FUN_10001406(param_1,&local_18);
  param_1[4] = local_2c;
  param_1[5] = local_18;
  local_2c = uVar2;
  if (uVar2 < 8) {
    FUN_1025b2d0(iVar3,param_1,param_4 * 2);
    iVar1 = iVar3 + param_4 * 2;
    if (param_5 != 0) {
      iVar6 = 0;
      do {
        *(undefined2 *)(iVar1 + iVar6 * 2) = param_6;
        iVar6 = iVar6 + 1;
      } while (param_5 != iVar6);
    }
    FUN_1025b2d0(iVar1 + param_5 * 2,(int)param_1 + param_4 * 2,(local_28 - param_4) * 2 + 2);
  }
  else {
    local_24 = *param_1;
    FUN_1025b2d0(iVar3,local_24,param_4 * 2);
    iVar6 = local_24;
    iVar1 = iVar3 + param_4 * 2;
    if (param_5 != 0) {
      iVar5 = 0;
      do {
        *(undefined2 *)(iVar1 + iVar5 * 2) = param_6;
        iVar5 = iVar5 + 1;
      } while (param_5 != iVar5);
    }
    local_20 = iVar3;
    FUN_1025b2d0(iVar1 + param_5 * 2,local_24 + param_4 * 2,(local_28 - param_4) * 2 + 2);
    FUN_100017aa(param_1,iVar6,local_2c);
    iVar3 = local_20;
  }
  *param_1 = iVar3;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

