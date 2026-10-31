/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026058c */

void __fastcall FUN_1026058c(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 uVar7;
  int *piVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 local_2c;
  undefined4 local_24;
  int *local_20;
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a4c4;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar6 = *(char *)(param_1 + 0x2d);
  local_1c[0] = param_1;
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_10260660:
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x10;
LAB_10260664:
      cVar6 = FUN_1026230d(0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_1026068d:
        cVar6 = FUN_1025fd06();
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_1026061a:
            cVar6 = FUN_1025fc07(0);
            goto LAB_1026069d;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) goto LAB_102609ac;
        }
LAB_102605f8:
        cVar6 = FUN_1025fd79();
      }
    }
    else if (cVar6 == 'X') {
      uVar13 = 1;
LAB_1026062f:
      cVar6 = FUN_10261ff3(uVar13);
    }
    else {
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') goto LAB_102609ac;
          goto LAB_1026061a;
        }
        goto LAB_102605f8;
      }
      cVar6 = FUN_1025fc93();
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      cVar6 = FUN_1025ff30();
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_102605f8;
      if (cVar6 == 'i') goto LAB_10260660;
      if (cVar6 != 'n') goto LAB_102609ac;
      cVar6 = FUN_1025ff63();
    }
  }
  else {
    if (cVar6 != 'p') {
      if (cVar6 == 's') goto LAB_1026068d;
      if (cVar6 != 'u') {
        if (cVar6 != 'x') goto LAB_102609ac;
        uVar13 = 0;
        goto LAB_1026062f;
      }
      goto LAB_10260664;
    }
    cVar6 = FUN_1025ff4d(local_14);
  }
LAB_1026069d:
  if ((cVar6 == '\0') || (*(char *)(param_1 + 0x2c) != '\0')) goto LAB_102609ac;
  piVar8 = (int *)0x0;
  local_24 = (undefined2 *)((uint)local_24 & 0xff000000);
  local_20 = (int *)0x0;
  if ((*(uint *)(param_1 + 0x1c) >> 4 & 1) != 0) {
    if ((*(uint *)(param_1 + 0x1c) >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x1c) >> 1 & 1) != 0) {
          local_24 = (undefined2 *)CONCAT31(local_24._1_3_,0x20);
          piVar8 = (int *)0x1;
          local_20 = (int *)0x1;
        }
        goto LAB_102606fe;
      }
      local_24 = (undefined2 *)CONCAT31(local_24._1_3_,0x2b);
    }
    else {
      local_24 = (undefined2 *)CONCAT31(local_24._1_3_,0x2d);
    }
    local_20 = (int *)0x1;
    piVar8 = (int *)0x1;
  }
LAB_102606fe:
  cVar6 = *(char *)(param_1 + 0x2d);
  if (((cVar6 != 'x') && (cVar6 != 'X')) ||
     (bVar3 = true, (*(uint *)(param_1 + 0x1c) >> 5 & 1) == 0)) {
    bVar3 = false;
  }
  if ((cVar6 == 'a') || (bVar4 = false, cVar6 == 'A')) {
    bVar4 = true;
  }
  if ((bVar3) || (bVar4)) {
    *(undefined1 *)((int)&local_24 + (int)piVar8) = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar7 = 0x58;
    }
    else {
      uVar7 = 0x78;
    }
    *(undefined1 *)((int)&local_24 + (int)piVar8 + 1) = uVar7;
    piVar8 = (int *)((int)piVar8 + 2);
    local_20 = piVar8;
  }
  iVar10 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x34)) - (int)piVar8;
  uVar5 = local_2c;
  if (((*(byte *)(param_1 + 0x1c) & 0xc) == 0) &&
     (local_2c = local_2c & 0xffffffff, uVar5 = local_2c, 0 < iVar10)) {
    iVar11 = *(int *)(param_1 + 0x14);
    local_2c._4_4_ = 0;
    do {
      iVar12 = *(int *)(param_1 + 0x448);
      if (*(int *)(iVar12 + 8) == *(int *)(iVar12 + 4)) {
        if (*(char *)(iVar12 + 0xc) == '\0') {
          iVar11 = -1;
        }
        else {
          iVar11 = iVar11 + 1;
        }
        *(int *)(param_1 + 0x14) = iVar11;
      }
      else {
        *(int *)(param_1 + 0x14) = iVar11 + 1;
        *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        *(undefined1 *)**(undefined4 **)(param_1 + 0x448) = 0x20;
        **(int **)(param_1 + 0x448) = **(int **)(param_1 + 0x448) + 1;
      }
      iVar11 = *(int *)(param_1 + 0x14);
      piVar8 = local_20;
    } while ((iVar11 != -1) && (local_2c._4_4_ = local_2c._4_4_ + 1, local_2c._4_4_ < iVar10));
  }
  local_2c = uVar5;
  iVar11 = 0;
  piVar1 = (int *)(param_1 + 0x14);
  local_20 = (int *)(param_1 + 0x448);
  FUN_102600f0(&local_24,piVar8,piVar1,*(undefined4 *)(param_1 + 8));
  if (((*(uint *)(param_1 + 0x1c) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x1c) >> 2 & 1) == 0 && (local_2c = local_2c & 0xffffffff, 0 < iVar10)))
     ) {
    iVar12 = *piVar1;
    do {
      iVar2 = *local_20;
      if (*(int *)(iVar2 + 8) == *(int *)(iVar2 + 4)) {
        if (*(char *)(iVar2 + 0xc) == '\0') {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar12 + 1;
        }
        *piVar1 = iVar12;
      }
      else {
        *piVar1 = iVar12 + 1;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        **(undefined1 **)*local_20 = 0x30;
        *(int *)*local_20 = *(int *)*local_20 + 1;
      }
      iVar12 = *piVar1;
      param_1 = local_1c[0];
    } while ((iVar12 != -1) && (iVar11 = iVar11 + 1, iVar11 < iVar10));
  }
  iVar11 = 0;
  local_8 = 0;
  if ((*(char *)(param_1 + 0x38) == '\0') || (*(int *)(param_1 + 0x34) < 1)) {
    FUN_102600f0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),piVar1,
                 *(undefined4 *)(param_1 + 8));
  }
  else {
    local_1c[0] = *(int *)(param_1 + 8);
    if (*(char *)(local_1c[0] + 0x14) == '\0') {
      FUN_1025ec50();
    }
    if (*(int *)(*(int *)(local_1c[0] + 0xc) + 8) == 0xfde9) {
      local_20 = (int *)0x0;
      local_2c = 0;
      puVar9 = *(undefined2 **)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          local_24 = puVar9 + 1;
          iVar12 = FUN_10278471(local_1c,*puVar9,&local_2c,*(undefined4 *)(param_1 + 8));
          if (iVar12 == -1) goto LAB_102608d5;
          FUN_102600f0(local_1c,iVar12,piVar1,*(undefined4 *)(param_1 + 8));
          local_20 = (int *)((int)local_20 + 1);
          puVar9 = local_24;
        } while (local_20 != *(int **)(param_1 + 0x34));
      }
    }
    else {
      local_2c = local_2c & 0xffffffff;
      puVar9 = *(undefined2 **)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          local_24 = puVar9 + 1;
          local_20 = (int *)0x0;
          iVar12 = FUN_10277f74(&local_20,local_1c,6,*puVar9,*(undefined4 *)(param_1 + 8));
          if ((iVar12 != 0) || (local_20 == (int *)0x0)) goto LAB_102608d5;
          FUN_102600f0(local_1c,local_20,piVar1,*(undefined4 *)(param_1 + 8));
          iVar12 = local_2c._4_4_ + 1;
          local_2c = CONCAT44(iVar12,(undefined4)local_2c);
          puVar9 = local_24;
        } while (iVar12 != *(int *)(param_1 + 0x34));
      }
    }
  }
  goto LAB_10260948;
LAB_102608d5:
  *piVar1 = -1;
LAB_10260948:
  iVar12 = *(int *)(param_1 + 0x14);
  if (((-1 < iVar12) && ((*(uint *)(param_1 + 0x1c) >> 2 & 1) != 0)) &&
     (piVar8 = (int *)(param_1 + 0x14), 0 < iVar10)) {
    do {
      iVar2 = *(int *)(param_1 + 0x448);
      if (*(int *)(iVar2 + 8) == *(int *)(iVar2 + 4)) {
        if (*(char *)(iVar2 + 0xc) == '\0') {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar12 + 1;
        }
        *piVar8 = iVar12;
      }
      else {
        *piVar8 = iVar12 + 1;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        *(undefined1 *)**(undefined4 **)(param_1 + 0x448) = 0x20;
        **(int **)(param_1 + 0x448) = **(int **)(param_1 + 0x448) + 1;
      }
      iVar12 = *piVar8;
    } while ((iVar12 != -1) && (iVar11 = iVar11 + 1, iVar11 < iVar10));
  }
LAB_102609ac:
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

