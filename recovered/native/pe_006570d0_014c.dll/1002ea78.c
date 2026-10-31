/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002ea78 */

void FUN_1002ea78(int *param_1,int param_2,uint *param_3,int param_4,uint param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iStack_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_1c;
  uVar3 = param_3[2] - param_5;
  if (param_3[2] < param_5) {
    uVar3 = 0;
  }
  uVar2 = uVar3 >> ((&DAT_10355ecb)[*param_3 >> 3 & 7] & 0x1f);
  uVar1 = *(int *)(param_2 + 4) + param_4 + (*param_3 >> 0xf & 7) * uVar3;
  if (*(uint *)(param_2 + 8) < uVar1) {
    (**(code **)(param_2 + 0xc))(param_2,uVar1);
  }
  if (uVar2 != 0) {
    FUN_100275d2(&local_18,param_2,uVar2,param_3);
    param_2 = local_18;
  }
  FUN_1001909c(*param_6,param_6[1] + *param_6);
  if (uVar3 != uVar2) {
    FUN_100275d2(&iStack_1c,param_2,uVar3 - uVar2,param_3);
    param_2 = iStack_1c;
  }
  *param_1 = param_2;
  if (DAT_10388d00 == (local_14 ^ (uint)&iStack_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

