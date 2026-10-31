/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ccf5e */

int FUN_1801ccf5e(undefined8 *param_1,uint *param_2)

{
  char *_Str2;
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (param_1 == (undefined8 *)0x0) {
    iVar4 = 0x21;
    goto LAB_1801cd0d4;
  }
  if (param_2 == (uint *)0x0) {
    iVar4 = 6;
    goto LAB_1801cd0d4;
  }
  iVar4 = 4;
  if (0x2000e < (int)param_2[5]) goto LAB_1801cd0d4;
  uVar8 = *(uint *)((longlong)param_1 + 0x14);
  if ((ulonglong)uVar8 != 0) {
    _Str2 = *(char **)(param_2 + 2);
    uVar7 = 0;
    do {
      plVar1 = (longlong *)param_1[uVar7 + 3];
      lVar2 = *plVar1;
      iVar4 = strcmp(*(char **)(lVar2 + 8),_Str2);
      if (iVar4 == 0) {
        iVar4 = 5;
        if ((int)param_2[4] <= *(int *)(lVar2 + 0x10)) goto LAB_1801cd0d4;
        FUN_1801cd109(param_1,plVar1);
        uVar8 = *(uint *)((longlong)param_1 + 0x14);
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
    iVar4 = 0x30;
    if (0x1f < uVar8) goto LAB_1801cd0d4;
  }
  uVar3 = *param_1;
  puVar5 = (undefined8 *)FUN_1801c9a4b(uVar3,param_2[1],&local_4c);
  iVar4 = local_4c;
  if (local_4c != 0) goto LAB_1801cd0d4;
  *puVar5 = param_2;
  puVar5[1] = param_1;
  puVar5[2] = uVar3;
  uVar8 = *param_2;
  puVar6 = param_2;
  if ((uVar8 & 2) == 0) {
LAB_1801cd05f:
    if ((uVar8 & 4) != 0) {
      param_1[0x26] = puVar5;
      puVar6 = (uint *)*puVar5;
      uVar8 = *puVar6;
    }
    if ((uVar8 & 1) != 0) {
      puVar5[3] = puVar6;
    }
    if ((*(code **)(param_2 + 8) == (code *)0x0) ||
       (iVar4 = (**(code **)(param_2 + 8))(puVar5), iVar4 == 0)) {
      uVar8 = *(uint *)((longlong)param_1 + 0x14);
      *(uint *)((longlong)param_1 + 0x14) = uVar8 + 1;
      param_1[(ulonglong)uVar8 + 3] = puVar5;
      iVar4 = 0;
      goto LAB_1801cd0d4;
    }
  }
  else {
    iVar4 = FUN_1801cd17b(puVar5);
    if (iVar4 == 0) {
      puVar6 = (uint *)*puVar5;
      uVar8 = *puVar6;
      goto LAB_1801cd05f;
    }
  }
  if (((((*(byte *)*puVar5 & 2) != 0) && (lVar2 = puVar5[3], lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) == 0x6f75746c)) && (puVar5[0xc] != 0)) {
    (**(code **)(*(longlong *)(lVar2 + 0x60) + 0x28))();
  }
  FUN_1801c9b65(uVar3,puVar5);
LAB_1801cd0d4:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return iVar4;
}

