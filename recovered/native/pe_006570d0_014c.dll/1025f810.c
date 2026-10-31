/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f810 */

void __fastcall FUN_1025f810(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int local_2c;
  undefined4 local_28;
  undefined8 local_24;
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
  cVar7 = *(char *)(param_1 + 0x2d);
  iVar11 = 0;
  if (cVar7 < 'e') {
    if (cVar7 == 'd') {
LAB_1025f8e1:
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x10;
LAB_1025f8e5:
      cVar7 = FUN_1026230d(0);
    }
    else if (cVar7 < 'T') {
      if (cVar7 == 'S') {
LAB_1025f90e:
        cVar7 = FUN_1025fd06();
      }
      else {
        if (cVar7 != 'A') {
          if (cVar7 == 'C') {
LAB_1025f89b:
            cVar7 = FUN_1025fc07(0);
            goto LAB_1025f91e;
          }
          if (((cVar7 != 'E') && (cVar7 != 'F')) && (cVar7 != 'G')) goto LAB_1025fbe8;
        }
LAB_1025f879:
        cVar7 = FUN_1025fd79();
      }
    }
    else if (cVar7 == 'X') {
      uVar13 = 1;
LAB_1025f8b0:
      cVar7 = FUN_10261ff3(uVar13);
    }
    else {
      if (cVar7 != 'Z') {
        if (cVar7 != 'a') {
          if (cVar7 != 'c') goto LAB_1025fbe8;
          goto LAB_1025f89b;
        }
        goto LAB_1025f879;
      }
      cVar7 = FUN_1025fc93();
    }
  }
  else if (cVar7 < 'p') {
    if (cVar7 == 'o') {
      cVar7 = FUN_1025ff30();
    }
    else {
      if (((cVar7 == 'e') || (cVar7 == 'f')) || (cVar7 == 'g')) goto LAB_1025f879;
      if (cVar7 == 'i') goto LAB_1025f8e1;
      if (cVar7 != 'n') goto LAB_1025fbe8;
      cVar7 = FUN_1025ff63();
    }
  }
  else {
    if (cVar7 != 'p') {
      if (cVar7 == 's') goto LAB_1025f90e;
      if (cVar7 != 'u') {
        if (cVar7 != 'x') goto LAB_1025fbe8;
        uVar13 = 0;
        goto LAB_1025f8b0;
      }
      goto LAB_1025f8e5;
    }
    cVar7 = FUN_1025ff4d(local_14);
  }
LAB_1025f91e:
  if ((cVar7 == '\0') || (*(char *)(param_1 + 0x2c) != '\0')) goto LAB_1025fbe8;
  uVar3 = *(uint *)(param_1 + 0x1c);
  iVar9 = 1;
  local_28 = local_28 & 0xff000000;
  iVar12 = 0;
  if ((uVar3 >> 4 & 1) != 0) {
    iVar12 = iVar9;
    if ((uVar3 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
        iVar12 = 0;
        if ((uVar3 >> 1 & 1) != 0) {
          local_28 = CONCAT31(local_28._1_3_,0x20);
          iVar12 = iVar9;
        }
      }
      else {
        local_28 = CONCAT31(local_28._1_3_,0x2b);
      }
    }
    else {
      local_28 = CONCAT31(local_28._1_3_,0x2d);
    }
  }
  cVar7 = *(char *)(param_1 + 0x2d);
  if (((cVar7 != 'x') && (cVar7 != 'X')) || (bVar5 = true, (uVar3 >> 5 & 1) == 0)) {
    bVar5 = false;
  }
  if ((cVar7 == 'a') || (bVar6 = false, cVar7 == 'A')) {
    bVar6 = true;
  }
  if ((bVar5) || (bVar6)) {
    *(undefined1 *)((int)&local_28 + iVar12) = 0x30;
    if ((cVar7 == 'X') || (cVar7 == 'A')) {
      uVar8 = 0x58;
    }
    else {
      uVar8 = 0x78;
    }
    *(undefined1 *)((int)&local_28 + iVar12 + 1) = uVar8;
    iVar12 = iVar12 + 2;
  }
  iVar9 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x34)) - iVar12;
  if ((uVar3 & 0xc) == 0) {
    local_1c[0] = *(int *)(param_1 + 8);
    local_2c = 0;
    if (0 < iVar9) {
      while (cVar7 = FUN_1025f331(0x20,local_1c[0]), cVar7 != '\0') {
        iVar4 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar4 + 1;
        if ((iVar4 == -2) || (local_2c = local_2c + 1, iVar9 <= local_2c)) goto LAB_1025fa1b;
      }
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    }
  }
LAB_1025fa1b:
  write_string(&local_28,iVar12,param_1 + 0x14,*(undefined4 *)(param_1 + 8));
  piVar1 = (int *)(param_1 + 0x14);
  if (((*(uint *)(param_1 + 0x1c) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x1c) >> 2 & 1) == 0)) {
    local_1c[0] = *(int *)(param_1 + 8);
    local_2c = 0;
    if (0 < iVar9) {
      while (cVar7 = FUN_1025f331(0x30,local_1c[0]), cVar7 != '\0') {
        iVar12 = *piVar1;
        *piVar1 = iVar12 + 1;
        if ((iVar12 == -2) || (local_2c = local_2c + 1, iVar9 <= local_2c)) goto LAB_1025fa89;
      }
      *piVar1 = -1;
    }
  }
LAB_1025fa89:
  local_8 = 0;
  if ((*(char *)(param_1 + 0x38) == '\0') || (*(int *)(param_1 + 0x34) < 1)) {
    write_string(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),piVar1,
                 *(undefined4 *)(param_1 + 8));
  }
  else {
    local_1c[0] = *(int *)(param_1 + 8);
    if (*(char *)(local_1c[0] + 0x14) == '\0') {
      FUN_1025ec50();
    }
    puVar10 = *(undefined2 **)(param_1 + 0x30);
    if (*(int *)(*(int *)(local_1c[0] + 0xc) + 8) == 0xfde9) {
      local_28 = 0;
      local_24 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          iVar12 = FUN_10278471(local_1c,uVar2,&local_24,*(undefined4 *)(param_1 + 8));
          if (iVar12 == -1) goto LAB_1025fb21;
          write_string(local_1c,iVar12,piVar1,*(undefined4 *)(param_1 + 8));
          local_28 = local_28 + 1;
        } while (local_28 != *(uint *)(param_1 + 0x34));
      }
    }
    else {
      local_1c[0] = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          local_28 = 0;
          iVar12 = FUN_10277f74(&local_28,&local_24,6,uVar2,*(undefined4 *)(param_1 + 8));
          if ((iVar12 != 0) || (local_28 == 0)) goto LAB_1025fb21;
          write_string(&local_24,local_28,piVar1,*(undefined4 *)(param_1 + 8));
          local_1c[0] = local_1c[0] + 1;
        } while (local_1c[0] != *(int *)(param_1 + 0x34));
      }
    }
  }
  goto LAB_1025fb94;
LAB_1025fb21:
  *piVar1 = -1;
LAB_1025fb94:
  if (((-1 < *(int *)(param_1 + 0x14)) && ((*(uint *)(param_1 + 0x1c) >> 2 & 1) != 0)) &&
     (local_1c[0] = *(int *)(param_1 + 8), 0 < iVar9)) {
    while (cVar7 = FUN_1025f331(0x20,local_1c[0]), cVar7 != '\0') {
      iVar12 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = iVar12 + 1;
      if ((iVar12 == -2) || (iVar11 = iVar11 + 1, iVar9 <= iVar11)) goto LAB_1025fbe8;
    }
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
LAB_1025fbe8:
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

