/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002e334 */

undefined4 * __thiscall FUN_1002e334(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_1c [2];
  undefined1 uStack_1a;
  undefined1 uStack_19;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  iVar2 = *(int *)*param_1;
  if (iVar2 != 0) {
    iVar1 = param_3[1];
    uVar3 = iVar1 + 1;
    if ((uint)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3,uVar3);
      iVar1 = param_3[1];
      uVar3 = iVar1 + 1;
    }
    param_3[1] = uVar3;
    *(char *)(*param_3 + iVar1) = (char)(0x202b2d00 >> ((byte)(iVar2 << 3) & 0x1f));
  }
  FUN_1002e422(&local_18,param_3,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],
               ((undefined4 *)param_1[1])[1],param_1[3]);
  if ((*(byte *)(param_1[4] + 1) & 0x20) != 0) {
    uStack_1a = *(undefined1 *)param_1[5];
    iVar2 = local_18[1];
    uVar3 = iVar2 + 1;
    if ((uint)local_18[2] < uVar3) {
      (*(code *)local_18[3])(local_18,uVar3);
      iVar2 = local_18[1];
      uVar3 = iVar2 + 1;
    }
    local_18[1] = uVar3;
    *(undefined1 *)(*local_18 + iVar2) = uStack_1a;
    if (0 < *(int *)param_1[6]) {
      uStack_19 = 0x30;
      FUN_10029039(param_2,local_18,*(int *)param_1[6],&uStack_19);
      goto LAB_1002e3fb;
    }
  }
  *param_2 = local_18;
LAB_1002e3fb:
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_1c)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

