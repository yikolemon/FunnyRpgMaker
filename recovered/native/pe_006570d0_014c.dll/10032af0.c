/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10032af0 */

int * FUN_10032af0(int *param_1,int param_2,uint *param_3,int param_4,uint param_5,char *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_1c;
  uVar4 = param_3[2] - param_5;
  if (param_3[2] < param_5) {
    uVar4 = 0;
  }
  uVar3 = uVar4 >> ((&DAT_10355ec6)[*param_3 >> 3 & 7] & 0x1f);
  uVar2 = *(int *)(param_2 + 4) + param_4 + (*param_3 >> 0xf & 7) * uVar4;
  if (*(uint *)(param_2 + 8) < uVar2) {
    (**(code **)(param_2 + 0xc))(param_2,uVar2);
  }
  if (uVar3 != 0) {
    FUN_100275d2(&iStack_1c,param_2,uVar3,param_3);
    param_2 = iStack_1c;
  }
  iVar1 = *(int *)(param_6 + 8);
  if (*param_6 == '\x01') {
    uStack_18 = *(undefined4 *)(param_6 + 4);
    iStack_1c = param_2;
    param_2 = FUN_1003314b(CONCAT44(uStack_18,param_2),iVar1,*(undefined4 *)(param_6 + 0xc));
  }
  else {
    FUN_1001909c(iVar1,*(int *)(param_6 + 4) + iVar1);
  }
  if (uVar4 != uVar3) {
    FUN_100275d2(&iStack_1c,param_2,uVar4 - uVar3,param_3);
    param_2 = iStack_1c;
  }
  *param_1 = param_2;
  if (DAT_10388d00 == (local_14 ^ (uint)&iStack_1c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

