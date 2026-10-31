/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100047e0 */

int * __thiscall FUN_100047e0(int *param_1,uint param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  iVar1 = param_1[4];
  if (0x7ffffffeU - iVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  local_1c = param_1[5];
  uVar4 = param_2 + iVar1 | 7;
  local_18 = 0x7ffffffe;
  if (((uVar4 < 0x7fffffff) && (local_1c <= 0x7ffffffe - (local_1c >> 1))) &&
     (local_18 = (local_1c >> 1) + local_1c, local_18 < uVar4)) {
    local_18 = uVar4;
  }
  iVar3 = FUN_10001406(param_1,&local_18);
  param_1[4] = param_2 + iVar1;
  param_1[5] = local_18;
  if (local_1c < 8) {
    FUN_1025b2d0(iVar3,param_1,iVar1 * 2);
    *(undefined2 *)(iVar3 + iVar1 * 2) = param_4;
    *(undefined2 *)(iVar3 + 2 + iVar1 * 2) = 0;
  }
  else {
    iVar2 = *param_1;
    FUN_1025b2d0(iVar3,iVar2,iVar1 * 2);
    *(undefined2 *)(iVar3 + iVar1 * 2) = param_4;
    *(undefined2 *)(iVar3 + 2 + iVar1 * 2) = 0;
    FUN_100017aa(param_1,iVar2,local_1c);
  }
  *param_1 = iVar3;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

