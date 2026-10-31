/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10031cd2 */

undefined4 *
FUN_10031cd2(undefined4 *param_1,int *param_2,uint *param_3,int param_4,uint param_5,
            undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint local_1c;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  uVar4 = param_3[2] - param_5;
  if (param_3[2] < param_5) {
    uVar4 = 0;
  }
  uVar3 = uVar4 >> ((&DAT_10355ecb)[*param_3 >> 3 & 7] & 0x1f);
  uVar2 = param_2[1] + param_4 + (*param_3 >> 0xf & 7) * uVar4;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
  }
  local_1c = uVar3;
  if (uVar3 != 0) {
    FUN_100275d2(&local_18,param_2,uVar3,param_3);
    param_2 = local_18;
  }
  iVar6 = *(int *)*param_6;
  if (iVar6 != 0) {
    iVar1 = param_2[1];
    uVar2 = iVar1 + 1;
    if ((uint)param_2[2] < uVar2) {
      (*(code *)param_2[3])(param_2,uVar2);
      iVar1 = param_2[1];
      uVar2 = iVar1 + 1;
    }
    param_2[1] = uVar2;
    *(char *)(*param_2 + iVar1) = (char)(0x202b2d00 >> ((byte)(iVar6 << 3) & 0x1f));
  }
  FUN_10031e2c(&local_18,param_2,*(undefined4 *)param_6[1],((undefined4 *)param_6[1])[1],
               *(undefined4 *)param_6[2],*(undefined4 *)param_6[3],(int)*(char *)param_6[4],
               param_6[5]);
  piVar5 = local_18;
  iVar6 = *(int *)param_6[6];
  if (0 < iVar6) {
    do {
      iVar1 = piVar5[1];
      uVar2 = iVar1 + 1;
      if ((uint)piVar5[2] < uVar2) {
        (*(code *)piVar5[3])(piVar5,uVar2);
        iVar1 = piVar5[1];
        uVar2 = iVar1 + 1;
      }
      piVar5[1] = uVar2;
      *(undefined1 *)(*piVar5 + iVar1) = 0x30;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar4 != local_1c) {
    FUN_100275d2(&local_18,piVar5,uVar4 - local_1c,param_3);
    piVar5 = local_18;
  }
  *param_1 = piVar5;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

