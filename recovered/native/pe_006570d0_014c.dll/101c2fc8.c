/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2fc8 */

int FUN_101c2fc8(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  char *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  if (param_1 == (undefined4 *)0x0) {
    iVar4 = 0x21;
    goto LAB_101c313e;
  }
  if (param_2 == (uint *)0x0) {
    iVar4 = 6;
    goto LAB_101c313e;
  }
  iVar4 = 4;
  if (0x2000e < (int)param_2[4]) goto LAB_101c313e;
  uVar5 = param_1[4];
  if (uVar5 != 0) {
    local_1c = (char *)param_2[2];
    uVar8 = 0;
    do {
      piVar1 = (int *)param_1[uVar8 + 5];
      iVar2 = *piVar1;
      iVar4 = _strcmp(*(char **)(iVar2 + 8),local_1c);
      if (iVar4 == 0) {
        iVar4 = 5;
        if ((int)param_2[3] <= *(int *)(iVar2 + 0xc)) goto LAB_101c313e;
        FUN_101c3163(param_1,piVar1);
        uVar5 = param_1[4];
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    iVar4 = 0x30;
    if (0x1f < uVar5) goto LAB_101c313e;
  }
  uVar3 = *param_1;
  puVar6 = (undefined4 *)FUN_101bff17(uVar3,param_2[1],&local_18);
  iVar4 = local_18;
  if (local_18 != 0) goto LAB_101c313e;
  *puVar6 = param_2;
  puVar6[1] = param_1;
  puVar6[2] = uVar3;
  uVar5 = *param_2;
  puVar7 = param_2;
  if ((uVar5 & 2) == 0) {
LAB_101c30c9:
    if ((uVar5 & 4) != 0) {
      param_1[0x28] = puVar6;
      puVar7 = (uint *)*puVar6;
      uVar5 = *puVar7;
    }
    if ((uVar5 & 1) != 0) {
      puVar6[3] = puVar7;
    }
    if (((code *)param_2[6] == (code *)0x0) || (iVar4 = (*(code *)param_2[6])(puVar6), iVar4 == 0))
    {
      iVar4 = param_1[4];
      param_1[4] = iVar4 + 1;
      param_1[iVar4 + 5] = puVar6;
      iVar4 = 0;
      goto LAB_101c313e;
    }
  }
  else {
    iVar4 = FUN_101c31c5();
    if (iVar4 == 0) {
      puVar7 = (uint *)*puVar6;
      uVar5 = *puVar7;
      goto LAB_101c30c9;
    }
  }
  if (((((*(byte *)*puVar6 & 2) != 0) && (iVar2 = puVar6[3], iVar2 != 0)) &&
      (*(int *)(iVar2 + 0x24) == 0x6f75746c)) && (puVar6[0xd] != 0)) {
    (**(code **)(*(int *)(iVar2 + 0x38) + 0x14))(puVar6[0xd]);
  }
  FUN_101c0017(uVar3,puVar6);
LAB_101c313e:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}

