/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f836 */

/* WARNING: Type propagation algorithm not settling */

uint __thiscall FUN_1001f836(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_20 [3];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_20;
  uVar3 = (param_2 - *param_1) * 8 + param_3;
  if (param_4 != 0) {
    if ((param_1[3] ^ 0x7fffffffU) < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_1001f97c();
    }
    local_20[1] = 0;
    FUN_1001f986(param_1[3] + param_4 + 0x1f >> 5,local_20 + 1);
    uVar1 = param_1[3];
    if (uVar1 == 0) {
      param_1[3] = param_4;
    }
    else {
      iVar2 = *param_1;
      param_4 = param_4 + uVar1;
      param_1[3] = param_4;
      local_20[0] = iVar2 + (uVar3 >> 5) * 4;
      FUN_1001fb9d(local_20 + 1,((int)uVar3 >> 0x1f & 0xe0000000U) + local_20[0],uVar3 & 0x1f,
                   ((int)uVar1 >> 0x1f & 0xe0000000U) + iVar2 + (uVar1 >> 5) * 4,uVar1 & 0x1f,
                   ((int)param_4 >> 0x1f & 0xe0000000U) + iVar2 + (param_4 >> 5) * 4,param_4 & 0x1f)
      ;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)local_20)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

