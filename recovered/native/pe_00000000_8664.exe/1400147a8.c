/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400147a8 */

int FUN_1400147a8(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  char **local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  longlong *local_80;
  longlong local_70;
  char *local_68;
  char local_59;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  if (param_2 == -1) {
    iVar7 = 0;
  }
  else {
    cVar6 = (char)param_2;
    iVar7 = param_2;
    if (**(longlong **)(param_1 + 0x40) != 0) {
      iVar4 = **(int **)(param_1 + 0x58);
      if (0 < iVar4) {
        **(int **)(param_1 + 0x58) = iVar4 + -1;
        pcVar1 = (char *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pcVar1 + 1);
        *pcVar1 = cVar6;
        goto LAB_140014916;
      }
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      iVar7 = -1;
    }
    else {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        iVar4 = *(int *)(param_1 + 0x90);
        lVar8 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar8;
        **(longlong **)(param_1 + 0x38) = lVar8;
        **(int **)(param_1 + 0x50) = iVar4 - (int)lVar8;
      }
      plVar2 = *(longlong **)(param_1 + 0x68);
      if (plVar2 == (longlong *)0x0) {
        iVar4 = FUN_1401a3ad8((int)cVar6,*(undefined8 *)(param_1 + 0x80));
        if (iVar4 == -1) {
          iVar7 = -1;
        }
      }
      else {
        local_88 = &local_38;
        local_80 = &local_70;
        local_98 = &local_68;
        local_90 = local_58;
        local_59 = cVar6;
        uVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x74,&local_59);
        iVar7 = -1;
        if (uVar3 < 2) {
          lVar8 = local_70 - (longlong)local_58;
          if ((lVar8 != 0) &&
             (lVar5 = FUN_1401a4ca4(local_58,1,lVar8,*(undefined8 *)(param_1 + 0x80)),
             lVar8 != lVar5)) goto LAB_140014916;
          *(undefined1 *)(param_1 + 0x71) = 1;
          bVar9 = local_68 == &local_59;
          iVar4 = -1;
        }
        else {
          if (uVar3 != 3) goto LAB_140014916;
          iVar4 = FUN_1401a3ad8((int)local_59,*(undefined8 *)(param_1 + 0x80));
          bVar9 = iVar4 == -1;
        }
        iVar7 = param_2;
        if (bVar9) {
          iVar7 = iVar4;
        }
      }
    }
  }
LAB_140014916:
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_b8);
  }
  return iVar7;
}

