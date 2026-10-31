/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10260ef0 */

void __fastcall FUN_10260ef0(int param_1)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  int local_30;
  int local_28;
  uint local_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a4c4;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = *(ushort *)(param_1 + 0x2e);
  iVar10 = 0;
  if (uVar2 < 0x65) {
    if (uVar2 == 100) {
LAB_10260fc8:
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x10;
LAB_10260fcc:
      cVar7 = FUN_10261e61(0);
    }
    else if (uVar2 < 0x54) {
      if (uVar2 == 0x53) {
LAB_10260ff5:
        cVar7 = FUN_1026151f();
      }
      else {
        if (uVar2 != 0x41) {
          if (uVar2 == 0x43) {
LAB_10260f82:
            cVar7 = FUN_10261406(0);
            goto LAB_10261005;
          }
          if (((uVar2 != 0x45) && (uVar2 != 0x46)) && (uVar2 != 0x47)) goto LAB_102613e7;
        }
LAB_10260f61:
        cVar7 = FUN_1026165a();
      }
    }
    else if (uVar2 == 0x58) {
      uVar14 = 1;
LAB_10260f97:
      cVar7 = FUN_10261b3d(uVar14);
    }
    else {
      if (uVar2 != 0x5a) {
        if (uVar2 != 0x61) {
          if (uVar2 != 99) goto LAB_102613e7;
          goto LAB_10260f82;
        }
        goto LAB_10260f61;
      }
      cVar7 = FUN_102614ab();
    }
  }
  else if (uVar2 < 0x70) {
    if (uVar2 == 0x6f) {
      cVar7 = FUN_10261827();
    }
    else {
      if (((uVar2 == 0x65) || (uVar2 == 0x66)) || (uVar2 == 0x67)) goto LAB_10260f61;
      if (uVar2 == 0x69) goto LAB_10260fc8;
      if (uVar2 != 0x6e) goto LAB_102613e7;
      cVar7 = FUN_1025ff63();
    }
  }
  else {
    if (uVar2 != 0x70) {
      if (uVar2 == 0x73) goto LAB_10260ff5;
      if (uVar2 != 0x75) {
        if (uVar2 != 0x78) goto LAB_102613e7;
        uVar14 = 0;
        goto LAB_10260f97;
      }
      goto LAB_10260fcc;
    }
    cVar7 = FUN_10261844(local_14);
  }
LAB_10261005:
  if ((cVar7 == '\0') || (*(char *)(param_1 + 0x2c) != '\0')) goto LAB_102613e7;
  iVar9 = 0;
  uVar6 = local_1c & 0xffff000000000000;
  local_20 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 4 & 1) != 0) {
    local_1c._2_6_ = (undefined6)(uVar6 >> 0x10);
    if ((*(uint *)(param_1 + 0x1c) >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x1c) >> 1 & 1) != 0) {
          local_1c = CONCAT62(local_1c._2_6_,0x20);
          iVar9 = 1;
          local_20 = 1;
          uVar6 = local_1c;
        }
        goto LAB_10261068;
      }
      uVar11 = 0x2b;
    }
    else {
      uVar11 = 0x2d;
    }
    local_1c = CONCAT62(local_1c._2_6_,uVar11);
    local_20 = 1;
    iVar9 = 1;
    uVar6 = local_1c;
  }
LAB_10261068:
  local_1c = uVar6;
  sVar3 = *(short *)(param_1 + 0x2e);
  if (((sVar3 != 0x78) && (sVar3 != 0x58)) ||
     (bVar13 = true, (*(uint *)(param_1 + 0x1c) >> 5 & 1) == 0)) {
    bVar13 = false;
  }
  if ((sVar3 == 0x61) || (bVar5 = false, sVar3 == 0x41)) {
    bVar5 = true;
  }
  local_24 = 0x30;
  if ((bVar13) || (bVar5)) {
    *(undefined2 *)((int)&local_1c + iVar9 * 2) = 0x30;
    if ((sVar3 == 0x58) || (uVar11 = 0x78, sVar3 == 0x41)) {
      uVar11 = 0x58;
    }
    *(undefined2 *)((int)&local_1c + iVar9 * 2 + 2) = uVar11;
    iVar9 = iVar9 + 2;
    local_20 = iVar9;
  }
  iVar8 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x34)) - iVar9;
  if (((*(byte *)(param_1 + 0x1c) & 0xc) == 0) && (0 < iVar8)) {
    iVar12 = *(int *)(param_1 + 0x14);
    do {
      iVar9 = *(int *)(param_1 + 0x448);
      if (*(int *)(iVar9 + 8) == *(int *)(iVar9 + 4)) {
        if (*(char *)(iVar9 + 0xc) == '\0') {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar12 + 1;
        }
        *(int *)(param_1 + 0x14) = iVar12;
      }
      else {
        *(int *)(param_1 + 0x14) = iVar12 + 1;
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
        *(undefined2 *)**(undefined4 **)(param_1 + 0x448) = 0x20;
        **(int **)(param_1 + 0x448) = **(int **)(param_1 + 0x448) + 2;
      }
      iVar12 = *(int *)(param_1 + 0x14);
      iVar9 = local_20;
    } while ((iVar12 != -1) && (iVar10 = iVar10 + 1, iVar10 < iVar8));
  }
  iVar10 = 0;
  piVar1 = (int *)(param_1 + 0x14);
  FUN_102609cb(&local_1c,iVar9,piVar1,*(undefined4 *)(param_1 + 8));
  if (((*(uint *)(param_1 + 0x1c) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x1c) >> 2 & 1) == 0 && (local_28 = 0, 0 < iVar8)))) {
    iVar9 = *piVar1;
    do {
      iVar12 = *(int *)(param_1 + 0x448);
      if (*(int *)(iVar12 + 8) == *(int *)(iVar12 + 4)) {
        if (*(char *)(iVar12 + 0xc) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
        *piVar1 = iVar9;
      }
      else {
        *piVar1 = iVar9 + 1;
        *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        *(short *)**(undefined4 **)(param_1 + 0x448) = (short)local_24;
        **(int **)(param_1 + 0x448) = **(int **)(param_1 + 0x448) + 2;
      }
      iVar9 = *piVar1;
    } while ((iVar9 != -1) && (iVar10 = iVar10 + 1, iVar10 < iVar8));
  }
  iVar10 = 0;
  local_8 = 0;
  if ((*(char *)(param_1 + 0x38) == '\0') && (0 < *(int *)(param_1 + 0x34))) {
    local_28 = *(int *)(param_1 + 8);
    if (*(char *)(local_28 + 0x14) == '\0') {
      FUN_1025ec50();
    }
    if (*(int *)(*(int *)(local_28 + 0xc) + 8) == 0xfde9) {
      local_28 = *(int *)(param_1 + 0x30);
      local_1c = 0;
      local_24 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          local_20 = 0;
          iVar9 = FUN_1027855f(&local_20,&local_28,2,&local_1c,*(undefined4 *)(param_1 + 8));
          if (iVar9 == -1) goto LAB_10261365;
          iVar12 = *(int *)(param_1 + 0x448);
          if (*(int *)(iVar12 + 8) == *(int *)(iVar12 + 4)) {
            if (*(char *)(iVar12 + 0xc) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
            *(undefined2 *)**(undefined4 **)(param_1 + 0x448) = (undefined2)local_20;
            **(int **)(param_1 + 0x448) = **(int **)(param_1 + 0x448) + 2;
          }
          if (iVar9 == 2) {
            iVar9 = *(int *)(param_1 + 0x448);
            if (*(int *)(iVar9 + 8) == *(int *)(iVar9 + 4)) {
              if (*(char *)(iVar9 + 0xc) == '\0') {
                *piVar1 = -1;
              }
              else {
                *piVar1 = *piVar1 + 1;
              }
            }
            else {
              *piVar1 = *piVar1 + 1;
              *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
              *(undefined2 *)**(undefined4 **)(param_1 + 0x448) = local_20._2_2_;
              piVar4 = *(int **)(param_1 + 0x448);
              *piVar4 = *piVar4 + 2;
            }
            local_24 = local_24 + 1;
          }
          local_24 = local_24 + 1;
        } while (local_24 != *(uint *)(param_1 + 0x34));
      }
    }
    else {
      local_28 = *(int *)(param_1 + 8);
      if (*(char *)(local_28 + 0x14) == '\0') {
        FUN_1025ec50();
      }
      local_20 = *(int *)(param_1 + 0x30);
      local_30 = 0;
      bVar13 = *(int *)(param_1 + 0x34) == 0;
      while (!bVar13) {
        local_24 = local_24 & 0xffff0000;
        iVar9 = FUN_10278147(&local_24,local_20,*(undefined4 *)(*(int *)(local_28 + 0xc) + 4),
                             *(undefined4 *)(param_1 + 8));
        local_1c = CONCAT44(iVar9,(undefined4)local_1c);
        if (iVar9 < 1) goto LAB_10261365;
        piVar4 = (int *)(param_1 + 0x448);
        iVar12 = *piVar4;
        if (*(int *)(iVar12 + 8) == *(int *)(iVar12 + 4)) {
          if (*(char *)(iVar12 + 0xc) == '\0') {
            *piVar1 = -1;
          }
          else {
            *piVar1 = *piVar1 + 1;
          }
        }
        else {
          *piVar1 = *piVar1 + 1;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
          **(undefined2 **)*piVar4 = (short)local_24;
          *(int *)*piVar4 = *(int *)*piVar4 + 2;
        }
        local_20 = local_20 + iVar9;
        local_30 = local_30 + 1;
        bVar13 = local_30 == *(int *)(param_1 + 0x34);
      }
    }
  }
  else {
    FUN_102609cb(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),piVar1,
                 *(undefined4 *)(param_1 + 8));
  }
  goto LAB_1026137f;
LAB_10261365:
  *piVar1 = -1;
LAB_1026137f:
  iVar9 = *(int *)(param_1 + 0x14);
  if (((-1 < iVar9) && ((*(uint *)(param_1 + 0x1c) >> 2 & 1) != 0)) &&
     (piVar1 = (int *)(param_1 + 0x14), 0 < iVar8)) {
    do {
      iVar12 = *(int *)(param_1 + 0x448);
      if (*(int *)(iVar12 + 8) == *(int *)(iVar12 + 4)) {
        if (*(char *)(iVar12 + 0xc) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
        *piVar1 = iVar9;
      }
      else {
        *piVar1 = iVar9 + 1;
        *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        *(undefined2 *)**(undefined4 **)(param_1 + 0x448) = 0x20;
        **(int **)(param_1 + 0x448) = **(int **)(param_1 + 0x448) + 2;
      }
      iVar9 = *piVar1;
    } while ((iVar9 != -1) && (iVar10 = iVar10 + 1, iVar10 < iVar8));
  }
LAB_102613e7:
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

