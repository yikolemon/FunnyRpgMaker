/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074414 */

int __thiscall FUN_10074414(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iStack_40;
  char *local_3c;
  char local_35;
  undefined1 local_34 [32];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_40;
  if (param_2 == -1) {
    iVar5 = 0;
  }
  else {
    cVar4 = (char)param_2;
    iVar5 = param_2;
    if (**(int **)(param_1 + 0x20) != 0) {
      iVar6 = **(int **)(param_1 + 0x30);
      if (0 < iVar6) {
        **(int **)(param_1 + 0x30) = iVar6 + -1;
        pcVar1 = (char *)**(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x20) = (int)(pcVar1 + 1);
        *pcVar1 = cVar4;
        goto LAB_10074528;
      }
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar5 = -1;
    }
    else {
      if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
        iVar6 = *(int *)(param_1 + 0x50);
        iVar3 = *(int *)(param_1 + 0x54);
        **(int **)(param_1 + 0xc) = iVar6;
        **(int **)(param_1 + 0x1c) = iVar6;
        **(int **)(param_1 + 0x2c) = iVar3 - iVar6;
      }
      if (*(int **)(param_1 + 0x38) == (int *)0x0) {
        iVar6 = FUN_1026deca((int)cVar4,*(undefined4 *)(param_1 + 0x4c));
        if (iVar6 == -1) {
          iVar5 = -1;
        }
      }
      else {
        local_35 = cVar4;
        uVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))
                          (param_1 + 0x40,&local_35,local_34,&local_3c,local_34,&local_14,&iStack_40
                          );
        iVar5 = -1;
        if (uVar2 < 2) {
          iVar6 = iStack_40 - (int)local_34;
          if ((iVar6 != 0) &&
             (iVar3 = FUN_1026f01a(local_34,1,iVar6,*(undefined4 *)(param_1 + 0x4c)), iVar6 != iVar3
             )) goto LAB_10074528;
          *(undefined1 *)(param_1 + 0x3d) = 1;
          iVar6 = -1;
          bVar7 = local_3c == &local_35;
        }
        else {
          if (uVar2 != 3) goto LAB_10074528;
          iVar6 = FUN_1026deca((int)local_35,*(undefined4 *)(param_1 + 0x4c));
          bVar7 = iVar6 == -1;
        }
        iVar5 = param_2;
        if (bVar7) {
          iVar5 = iVar6;
        }
      }
    }
  }
LAB_10074528:
  if (DAT_10388d00 != (local_14 ^ (uint)&iStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar5;
}

