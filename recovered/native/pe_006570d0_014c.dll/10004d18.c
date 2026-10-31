/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10004d18 */

int * __thiscall
FUN_10004d18(int *param_1,uint param_2,undefined4 param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  local_28 = param_1[4];
  if (0x7ffffffeU - local_28 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  param_2 = param_2 + local_28;
  local_20 = param_1[5];
  uVar2 = param_2 | 7;
  local_18 = 0x7ffffffe;
  if (((uVar2 < 0x7fffffff) && (local_20 <= 0x7ffffffe - (local_20 >> 1))) &&
     (local_18 = (local_20 >> 1) + local_20, local_18 < uVar2)) {
    local_18 = uVar2;
  }
  iVar1 = FUN_10001406(param_1,&local_18);
  iVar3 = local_28;
  param_1[4] = param_2;
  param_1[5] = local_18;
  local_24 = iVar1;
  if (local_20 < 8) {
    FUN_1025b2d0(iVar1,param_1,local_28 * 2);
    iVar1 = local_24 + iVar3 * 2;
    if (param_4 != 0) {
      iVar3 = 0;
      do {
        *(undefined2 *)(iVar1 + iVar3 * 2) = param_5;
        iVar3 = iVar3 + 1;
      } while (param_4 != iVar3);
    }
    *(undefined2 *)(iVar1 + param_4 * 2) = 0;
  }
  else {
    local_1c = *param_1;
    FUN_1025b2d0(iVar1,local_1c,local_28 * 2);
    iVar1 = iVar1 + local_28 * 2;
    if (param_4 != 0) {
      iVar3 = 0;
      do {
        *(undefined2 *)(iVar1 + iVar3 * 2) = param_5;
        iVar3 = iVar3 + 1;
      } while (param_4 != iVar3);
    }
    *(undefined2 *)(iVar1 + param_4 * 2) = 0;
    FUN_100017aa(param_1,local_1c,local_20);
  }
  *param_1 = local_24;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

