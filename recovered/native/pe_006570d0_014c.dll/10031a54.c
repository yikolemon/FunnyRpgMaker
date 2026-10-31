/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10031a54 */

undefined4 * __thiscall FUN_10031a54(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_1c [2];
  undefined1 uStack_1a;
  undefined1 uStack_19;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  iVar3 = *(int *)*param_1;
  if (iVar3 != 0) {
    iVar2 = param_3[1];
    uVar4 = iVar2 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar2 = param_3[1];
      uVar4 = iVar2 + 1;
    }
    param_3[1] = uVar4;
    *(char *)(*param_3 + iVar2) = (char)(0x202b2d00 >> ((byte)(iVar3 << 3) & 0x1f));
  }
  puVar1 = (undefined4 *)param_1[1];
  FUN_10031b45(&local_18,param_3,*puVar1,puVar1[1],*(undefined4 *)param_1[2],puVar1[2],param_1[3]);
  if ((*(byte *)(param_1[4] + 1) & 0x20) != 0) {
    uStack_1a = *(undefined1 *)param_1[5];
    iVar3 = local_18[1];
    uVar4 = iVar3 + 1;
    if ((uint)local_18[2] < uVar4) {
      (*(code *)local_18[3])(local_18,uVar4);
      iVar3 = local_18[1];
      uVar4 = iVar3 + 1;
    }
    local_18[1] = uVar4;
    *(undefined1 *)(*local_18 + iVar3) = uStack_1a;
    if (0 < *(int *)param_1[6]) {
      uStack_19 = 0x30;
      FUN_10029039(param_2,local_18,*(int *)param_1[6],&uStack_19);
      goto LAB_10031b1e;
    }
  }
  *param_2 = local_18;
LAB_10031b1e:
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_1c)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

