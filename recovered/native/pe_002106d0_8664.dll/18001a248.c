/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001a248 */

ulonglong FUN_18001a248(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong unaff_RBP;
  undefined7 uVar19;
  longlong *plVar18;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar7 = CONCAT71((int7)(local_48 >> 8),1);
  if (param_2 == 0) goto LAB_18001af30;
  uVar7 = 0;
LAB_18001a289:
  plVar16 = (longlong *)(param_1 + 8);
  FUN_18001af6a(param_1,1);
  if (0x14 < *(int *)(param_2 + 8) - 1U) {
LAB_18001af26:
    uVar7 = 0;
    goto LAB_18001af30;
  }
  lVar21 = *(longlong *)(param_2 + 0x10);
  uVar19 = (undefined7)(unaff_RBP >> 8);
  switch(*(int *)(param_2 + 8)) {
  case 2:
    uVar14 = *(uint *)(param_1 + 0xe4);
    uVar7 = (ulonglong)uVar14;
    if (((uVar14 >> 8 & 1) != 0) || (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0xd0))) {
      unaff_RBP = CONCAT71((uint7)(uint3)(uVar14 >> 8),1);
      if ((*(byte *)(param_1 + 0xe1) & 0x10) == 0) goto LAB_18001a7c8;
      uVar2 = *(undefined1 *)(*plVar16 + -1);
LAB_18001a5ef:
      uVar14 = FUN_18001af89(CONCAT71(0x1802b60,uVar2));
      uVar7 = (ulonglong)uVar14 ^ 1;
    }
    goto LAB_18001a7b4;
  case 3:
    if (*(undefined1 **)(param_1 + 8) == *(undefined1 **)(param_1 + 0xd8)) {
      uVar7 = CONCAT71(uVar19,*(byte *)(param_1 + 0xe4) >> 1);
      goto LAB_18001a7b4;
    }
    unaff_RBP = CONCAT71(uVar19,1);
    if ((*(byte *)(param_1 + 0xe1) & 0x10) != 0) {
      uVar2 = **(undefined1 **)(param_1 + 8);
      goto LAB_18001a5ef;
    }
    goto LAB_18001a7c8;
  case 4:
    bVar4 = FUN_18001af98(param_1);
    uVar7 = CONCAT71(uVar19,(*(byte *)(param_2 + 0xc) & 1) == 0 ^ bVar4);
    goto LAB_18001a7b4;
  case 5:
    unaff_RBP = CONCAT71(uVar19,1);
    if (*(char **)(param_1 + 8) != *(char **)(param_1 + 0xd8)) {
      if ((*(byte *)(param_1 + 0xe0) & 0x3e) == 0) {
        cVar5 = FUN_18001af89();
      }
      else {
        cVar5 = **(char **)(param_1 + 8) == '\0';
      }
      if ((cVar5 == '\0') && ((uVar7 & 1) == 0)) {
        *plVar16 = *plVar16 + 1;
        uVar7 = 0;
        goto LAB_18001a7b4;
      }
    }
    goto LAB_18001a7c8;
  case 6:
    local_50 = 0;
    local_70 = *(undefined4 *)(param_1 + 0xe0);
    local_78 = *(undefined8 *)(param_1 + 200);
    local_68 = &local_50;
    lVar9 = FUN_18001b001(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xd8));
LAB_18001a426:
    if (lVar9 == *(longlong *)(param_1 + 8)) {
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
    }
    else {
LAB_18001a430:
      *plVar16 = lVar9;
    }
    lVar9 = local_50 + 0x3f;
    if (-1 < local_50) {
      lVar9 = local_50;
    }
    FUN_18001af6a(param_1,lVar9 >> 6);
    break;
  case 7:
    unaff_RBP = CONCAT71(uVar19,1);
    if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0xd8)) &&
       (lVar9 = FUN_18001b038(param_1,param_2), lVar9 != *(longlong *)(param_1 + 8))) {
      *plVar16 = lVar9;
      break;
    }
    goto LAB_18001a7c8;
  case 10:
    uVar15 = 1;
    goto LAB_18001a3ce;
  case 0xb:
    uVar15 = 2;
LAB_18001a3ce:
    FUN_18001b122(param_1,uVar15,param_2);
    lVar21 = *(longlong *)(param_2 + 0x20);
    break;
  case 0xc:
    lVar9 = *(longlong *)(param_1 + 0x90);
    lVar21 = *(longlong *)(param_1 + 0xb0);
    *(longlong *)(param_1 + 0xb0) = lVar21 + -1;
    lVar13 = (lVar21 + -1) * 0x20;
    iVar6 = *(int *)(lVar9 + lVar13);
    if (iVar6 - 1U < 2) {
      unaff_RBP = CONCAT71(uVar19,1);
      if (iVar6 == 1) {
        lVar9 = lVar9 + lVar13;
        *plVar16 = *(longlong *)(lVar9 + 0x10);
        lVar21 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x10);
        break;
      }
    }
    else {
      lVar12 = lVar21 + -2;
      lVar13 = 0;
      uVar14 = 0xffffffff;
      uVar20 = 0;
      lVar21 = lVar21 * 0x20 + lVar9 + -0x20;
      do {
        lVar10 = lVar21;
        if (iVar6 == 0xd) {
          uVar3 = *(uint *)(lVar10 + 4);
          if (uVar3 <= uVar14) {
            uVar14 = uVar3;
          }
          if (uVar20 <= uVar3) {
            uVar20 = uVar3;
          }
          if (lVar13 == 0) {
            lVar13 = lVar12 + 1;
          }
        }
        *(longlong *)(param_1 + 0xb0) = lVar12;
        iVar6 = *(int *)(lVar10 + -0x20);
        lVar12 = lVar12 + -1;
        lVar21 = lVar10 + -0x20;
      } while (1 < iVar6 - 1U);
      if (iVar6 == 1) {
        *plVar16 = *(longlong *)(lVar10 + -0x10);
        lVar21 = *(longlong *)(*(longlong *)(lVar10 + -0x18) + 0x10);
        if (lVar13 != 0) {
          lVar9 = FUN_18001b1df(lVar10 + -0x20,lVar9 + lVar13 * 0x20 + 0x20);
          *(longlong *)(param_1 + 0xb0) = lVar9 - *(longlong *)(param_1 + 0x90) >> 5;
        }
        break;
      }
      unaff_RBP = CONCAT71((uint7)(uint3)(iVar6 - 1U >> 8),1);
      if (uVar14 <= uVar20) {
        FUN_18001b22e((longlong *)(param_1 + 0x28),uVar14,uVar20 + 1);
      }
    }
    goto LAB_18001a7c8;
  case 0xd:
    uVar14 = *(int *)(param_2 + 0x20) - 1;
    lVar9 = *(longlong *)(param_1 + 0x10);
    lVar10 = (ulonglong)uVar14 * 0x10;
    lVar12 = FUN_18001b122(param_1,0xc,param_2);
    lVar13 = *(longlong *)(param_1 + 0x90);
    *(undefined8 *)(lVar13 + 0x10 + lVar12 * 0x20) = *(undefined8 *)(lVar9 + lVar10);
    *(uint *)(lVar13 + 4 + lVar12 * 0x20) = uVar14;
    *(undefined8 *)(lVar9 + lVar10) = *(undefined8 *)(param_1 + 8);
    break;
  case 0xe:
    iVar6 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x20);
    if (iVar6 != 0) {
      uVar14 = iVar6 - 1;
      lVar12 = (ulonglong)uVar14 * 0x10;
      local_58 = *(longlong *)(param_1 + 0x10);
      lVar13 = FUN_18001b122(param_1,((*(ulonglong *)
                                        (*(longlong *)(param_1 + 0x28) +
                                        (ulonglong)(uVar14 >> 6) * 8) >> ((ulonglong)uVar14 & 0x3f)
                                      & 1) != 0) + '\r');
      lVar9 = *(longlong *)(param_1 + 0x90);
      *(undefined8 *)(lVar9 + 0x10 + lVar13 * 0x20) = *(undefined8 *)(local_58 + 8 + lVar12);
      *(uint *)(lVar9 + 4 + lVar13 * 0x20) = uVar14;
      *(undefined8 *)(local_58 + 8 + lVar12) = *(undefined8 *)(param_1 + 8);
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 >> 6) * 8);
      *puVar1 = *puVar1 | 1L << ((byte)uVar14 & 0x3f);
    }
    break;
  case 0xf:
    uVar14 = *(int *)(param_2 + 0x20) - 1;
    if ((*(ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 >> 6) * 8) >>
         ((ulonglong)uVar14 & 0x3f) & 1) != 0) {
      lVar9 = *(longlong *)(param_1 + 8);
      lVar13 = (ulonglong)uVar14 * 0x10;
      local_50 = 0;
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar13) !=
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + lVar13)) {
        local_70 = *(undefined4 *)(param_1 + 0xe0);
        local_78 = *(undefined8 *)(param_1 + 200);
        local_68 = &local_50;
        lVar9 = FUN_18001b2c4(lVar9,*(undefined8 *)(param_1 + 0xd8));
        goto LAB_18001a426;
      }
      goto LAB_18001a430;
    }
    uVar7 = uVar7 & 0xff;
    if ((*(byte *)(param_1 + 0xe0) & 0x12) != 0) {
      uVar7 = 1;
    }
    goto LAB_18001a7b4;
  case 0x10:
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_18001b122(param_1,3);
    }
    break;
  case 0x12:
    FUN_18001b2fa(param_1,param_2);
    uVar14 = *(uint *)(param_2 + 0xc);
    plVar18 = (longlong *)
              ((ulonglong)*(uint *)(param_2 + 0x30) * 0x18 + *(longlong *)(param_1 + 0x78));
    if (*(int *)(param_2 + 0x34) == 1) {
      lVar9 = FUN_18001b122(param_1,4,param_2);
      *plVar18 = lVar9;
      if ((*(int *)(param_2 + 0x20) < 1) &&
         ((((uVar14 & 2) == 0 || (*(char *)(param_1 + 0xf3) != '\0')) ||
          (*(int *)(param_2 + 0x24) == 0)))) {
        *(undefined4 *)(plVar18 + 1) = 0;
        lVar21 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
        if (*(int *)(param_2 + 0x24) != 0) {
          FUN_18001b122(param_1,5,param_2);
        }
      }
      else {
        *(undefined4 *)(plVar18 + 1) = 1;
        if (*(int *)(param_2 + 0x20) == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x90) + lVar9 * 0x20) = 6;
        }
      }
    }
    else {
      if (*(int *)(param_2 + 0x20) < 1) {
        if (((uVar14 & 2) == 0) || (*(char *)(param_1 + 0xf3) != '\0')) {
          lVar21 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
          if (*(int *)(param_2 + 0x24) != 0) {
            lVar13 = FUN_18001b122(param_1,9,param_2);
            lVar9 = *(longlong *)(param_1 + 0x90);
            *(int *)(lVar9 + 4 + lVar13 * 0x20) = (int)plVar18[1];
            *(longlong *)(lVar9 + 0x18 + lVar13 * 0x20) = *plVar18;
            *(undefined4 *)(plVar18 + 1) = 0;
LAB_18001aeb2:
            *plVar18 = lVar13;
          }
          break;
        }
        if (*(int *)(param_2 + 0x24) == 0) {
          lVar21 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
          goto LAB_18001a7b4;
        }
      }
      lVar13 = FUN_18001b122(param_1,0xb - (uint)(*(int *)(param_2 + 0x20) == 0),param_2);
      lVar9 = *(longlong *)(param_1 + 0x90);
      *(int *)(lVar9 + 4 + lVar13 * 0x20) = (int)plVar18[1];
      *(longlong *)(lVar9 + 0x18 + lVar13 * 0x20) = *plVar18;
      *(undefined4 *)(plVar18 + 1) = 1;
      *plVar18 = lVar13;
    }
    goto LAB_18001a7b4;
  case 0x13:
    lVar9 = *(longlong *)(param_2 + 0x20);
    uVar14 = *(uint *)(lVar9 + 0xc);
    plVar18 = (longlong *)
              ((ulonglong)*(uint *)(lVar9 + 0x30) * 0x18 + *(longlong *)(param_1 + 0x78));
    if ((uVar14 & 0x1000) == 0 && *(int *)(lVar9 + 0x34) == 0) {
      lVar13 = *(longlong *)(param_1 + 8);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10 + *plVar18 * 0x20);
      iVar6 = (int)plVar18[1];
      if (iVar6 < *(int *)(lVar9 + 0x20)) {
        lVar10 = FUN_18001b122(param_1,0xb,lVar9);
        lVar21 = *(longlong *)(param_1 + 0x90);
        *(int *)(lVar21 + 4 + lVar10 * 0x20) = (int)plVar18[1];
        *(longlong *)(lVar21 + 0x18 + lVar10 * 0x20) = *plVar18;
        *plVar18 = lVar10;
        if ((lVar12 == lVar13) && (*(int *)(lVar9 + 0x24) < 0)) {
          iVar6 = *(int *)(lVar9 + 0x20);
        }
        else {
          iVar6 = (int)plVar18[1];
LAB_18001a77c:
          iVar6 = iVar6 + 1;
        }
        *(int *)(plVar18 + 1) = iVar6;
LAB_18001a781:
        FUN_18001b34c(param_1,*(undefined4 *)((longlong)plVar18 + 0xc));
        lVar21 = *(longlong *)(lVar9 + 0x10);
      }
      else {
        if (lVar12 == lVar13) {
          if (iVar6 != *(int *)(lVar9 + 0x20)) {
            uVar7 = uVar7 & 0xff;
            if ((*(byte *)(param_1 + 0xe0) & 0x3e) == 0) {
              uVar7 = 1;
            }
            if (iVar6 != 1) {
              uVar7 = 1;
            }
          }
          goto LAB_18001a7b4;
        }
        if (((uVar14 & 2) == 0) || (*(char *)(param_1 + 0xf3) != '\0')) {
          if (iVar6 != *(int *)(lVar9 + 0x24)) {
            lVar13 = FUN_18001b122(param_1,9,lVar9);
            lVar9 = *(longlong *)(param_1 + 0x90);
            *(int *)(lVar9 + 4 + lVar13 * 0x20) = (int)plVar18[1];
            *(longlong *)(lVar9 + 0x18 + lVar13 * 0x20) = *plVar18;
            goto LAB_18001aeb2;
          }
        }
        else if (iVar6 != *(int *)(lVar9 + 0x24)) {
          lVar13 = FUN_18001b122(param_1,10,lVar9);
          lVar21 = *(longlong *)(param_1 + 0x90);
          *(int *)(lVar21 + 4 + lVar13 * 0x20) = (int)plVar18[1];
          *(longlong *)(lVar21 + 0x18 + lVar13 * 0x20) = *plVar18;
          *plVar18 = lVar13;
          iVar6 = (int)plVar18[1];
          if (iVar6 != 0x7fffffff) goto LAB_18001a77c;
          goto LAB_18001a781;
        }
      }
    }
    else {
      if ((int)plVar18[1] == 1) {
        lVar13 = *(longlong *)(param_1 + 0x90);
        lVar12 = *plVar18 * 0x20;
        lVar10 = *(longlong *)(param_1 + 8) - *(longlong *)(lVar13 + 0x10 + lVar12);
        plVar18[2] = lVar10;
        if (lVar10 == 0) {
          if (((*(byte *)(param_1 + 0xe0) & 0x3e) == 0) &&
             (uVar7 = uVar7 & 0xff, *(int *)(lVar9 + 0x20) == 0)) {
            uVar7 = 1;
          }
          goto LAB_18001a7b4;
        }
        lVar13 = FUN_18001b122(param_1,((*(int *)(lVar13 + lVar12) - 6U & 0xfffffffb) == 0) * '\x04'
                                       + '\x04',lVar9);
        *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18 + lVar13 * 0x20) = *plVar18;
        *plVar18 = lVar13;
      }
      else {
        *(longlong *)(param_1 + 0xb0) = *plVar18 + 1;
      }
      iVar6 = (int)plVar18[1];
      if (iVar6 < *(int *)(lVar9 + 0x20)) {
        lVar21 = *(longlong *)(lVar9 + 0x10);
        *(int *)(plVar18 + 1) = iVar6 + 1;
        goto LAB_18001a7b4;
      }
      if (((uVar14 & 2) == 0) || (*(char *)(param_1 + 0xf3) != '\0')) {
        if (iVar6 == *(int *)(lVar9 + 0x24)) {
LAB_18001adec:
          *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + -1;
        }
        else {
          lVar13 = *(longlong *)(param_1 + 0x90);
          lVar12 = *plVar18 * 0x20;
          *(undefined8 *)(lVar13 + 0x10 + lVar12) = *(undefined8 *)(param_1 + 8);
          *(undefined4 *)(lVar13 + lVar12) = 5;
          *(longlong *)(lVar13 + 8 + lVar12) = lVar9;
        }
      }
      else {
        puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + *plVar18 * 0x20);
        if (*(int *)(*(longlong *)(param_1 + 0x90) + *plVar18 * 0x20) == 4) {
          *puVar11 = 8;
          lVar13 = *(longlong *)(puVar11 + 6);
          lVar12 = *(longlong *)(param_1 + 8);
          lVar10 = *(longlong *)(param_1 + 0x90);
          *(longlong *)(lVar10 + 0x10 + lVar13 * 0x20) = lVar12;
          *(longlong *)(lVar10 + 0x10 + lVar13 * 0x20) = lVar12 - plVar18[2];
        }
        lVar13 = *plVar16;
        *(longlong *)(puVar11 + 4) = lVar13;
        iVar6 = (int)plVar18[1];
        if (iVar6 == *(int *)(lVar9 + 0x24)) {
          lVar13 = lVar13 - plVar18[2];
          *(longlong *)(puVar11 + 4) = lVar13;
          if (lVar13 == *(longlong *)
                         (*(longlong *)(param_1 + 0x90) + 0x10 + *(longlong *)(puVar11 + 6) * 0x20))
          goto LAB_18001adec;
          *puVar11 = 7;
        }
        else {
          lVar21 = *(longlong *)(lVar9 + 0x10);
          if (iVar6 != 0x7fffffff) {
            *(int *)(plVar18 + 1) = iVar6 + 1;
          }
        }
      }
    }
    break;
  case 0x15:
    uVar8 = (ulonglong)*(ushort *)(param_1 + 0xe4);
    if (((*(ushort *)(param_1 + 0xe4) & 0x2020) != 0) &&
       (uVar8 = *(ulonglong *)(param_1 + 0xd0), uVar8 == *(ulonglong *)(param_1 + 8))) {
      unaff_RBP = CONCAT71(uVar19,1);
      goto LAB_18001a7c8;
    }
    if (*(char *)(param_1 + 0xf4) == '\x01') {
      uVar8 = *(ulonglong *)(param_1 + 8);
      unaff_RBP = CONCAT71(uVar19,1);
      if (uVar8 != *(ulonglong *)(param_1 + 0xd8)) goto LAB_18001a7c8;
    }
    if (*(char *)(param_1 + 0xf3) != '\x01') {
      uVar7 = CONCAT71((int7)(uVar8 >> 8),1);
      goto LAB_18001af30;
    }
    unaff_RBP = uVar7;
    if ((*(char *)(param_1 + 0xf2) != '\x01') || (cVar5 = FUN_18001b3c4(param_1), cVar5 != '\0')) {
      FUN_18001b4ac(param_1 + 0x40,plVar16);
      *(undefined1 *)(param_1 + 0xf2) = 1;
    }
    goto LAB_18001a7c8;
  }
LAB_18001a7b4:
  param_2 = lVar21;
  unaff_RBP = uVar7;
  if (((uVar7 & 1) == 0) && (uVar7 = 0, param_2 != 0)) goto LAB_18001a289;
LAB_18001a7c8:
  puVar17 = (undefined8 *)(param_1 + 8);
  lVar21 = *(longlong *)(param_1 + 0xb0);
  uVar7 = unaff_RBP & 0xffffffff;
  if (lVar21 == 0) goto LAB_18001af2a;
  do {
    lVar21 = lVar21 + -1;
    *(longlong *)(param_1 + 0xb0) = lVar21;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar21 * 0x20);
    if (0xe < iVar6 - 1U) goto LAB_18001af26;
    puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + lVar21 * 0x20);
    switch(iVar6) {
    default:
      goto switchD_18001a80a_caseD_1;
    case 2:
      *puVar17 = *(undefined8 *)(puVar11 + 4);
      param_2 = *(longlong *)(*(longlong *)(puVar11 + 2) + 0x10);
      break;
    case 3:
      lVar21 = *(longlong *)(puVar11 + 2);
      param_2 = *(longlong *)(lVar21 + 0x10);
      *puVar17 = *(undefined8 *)(puVar11 + 4);
      lVar21 = *(longlong *)(lVar21 + 0x28);
      if (lVar21 == 0) break;
      *(longlong *)(puVar11 + 2) = lVar21;
      goto LAB_18001a98a;
    case 5:
      uVar7 = (ulonglong)*(uint *)(*(longlong *)(puVar11 + 2) + 0x30);
      param_2 = *(longlong *)(*(longlong *)(puVar11 + 2) + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar11 + 4);
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x78) + 8 + uVar7 * 0x18);
      if (iVar6 != 0x7fffffff) {
        *(int *)(*(longlong *)(param_1 + 0x78) + uVar7 * 0x18 + 8) = iVar6 + 1;
      }
      break;
    case 6:
      param_2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar11 + 2) + 0x28) + 0x10);
      *puVar17 = *(undefined8 *)(puVar11 + 4);
      break;
    case 7:
      lVar9 = *(longlong *)(puVar11 + 6) + 1;
      if (lVar9 != lVar21) {
        uVar14 = *(uint *)(*(longlong *)(puVar11 + 2) + 0x30);
        lVar21 = *(longlong *)(param_1 + 0x78);
        lVar13 = *(longlong *)(puVar11 + 6) * 0x20 + 0x24;
        do {
          plVar16 = (longlong *)
                    ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + lVar13) * 0x10 +
                     *(longlong *)(param_1 + 0x10) +
                    (ulonglong)(*(int *)(*(longlong *)(param_1 + 0x90) + -4 + lVar13) != 0xc) * 8);
          *plVar16 = *plVar16 - *(longlong *)((ulonglong)uVar14 * 0x18 + lVar21 + 0x10);
          lVar9 = lVar9 + 1;
          lVar13 = lVar13 + 0x20;
        } while (lVar9 != *(longlong *)(param_1 + 0xb0));
      }
    case 8:
      lVar21 = *(longlong *)(puVar11 + 2);
      lVar9 = *(longlong *)(puVar11 + 4);
      param_2 = *(longlong *)(*(longlong *)(lVar21 + 0x28) + 0x10);
      *(longlong *)(param_1 + 8) = lVar9;
      lVar9 = lVar9 - *(longlong *)
                       (*(longlong *)(param_1 + 0x78) + 0x10 +
                       (ulonglong)*(uint *)(lVar21 + 0x30) * 0x18);
      *(longlong *)(puVar11 + 4) = lVar9;
      if (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10 + *(longlong *)(puVar11 + 6) * 0x20) !=
          lVar9) {
        *puVar11 = 7;
LAB_18001a98a:
        *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 1;
      }
      break;
    case 9:
      lVar21 = *(longlong *)(param_1 + 0x78) +
               (ulonglong)*(uint *)(*(longlong *)(puVar11 + 2) + 0x30) * 0x18;
      param_2 = *(longlong *)(*(longlong *)(puVar11 + 2) + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar11 + 4);
      if (*(int *)(lVar21 + 8) != 0x7fffffff) {
        *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
      }
      *puVar11 = 0xb;
      *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 1;
      FUN_18001b34c(param_1,*(undefined4 *)(lVar21 + 0xc));
      break;
    case 10:
      param_2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar11 + 2) + 0x28) + 0x10);
      *puVar17 = *(undefined8 *)(puVar11 + 4);
      uVar7 = 0;
      goto LAB_18001a9c9;
    case 0xb:
      param_2 = 0;
LAB_18001a9c9:
      uVar14 = *(uint *)(*(longlong *)(puVar11 + 2) + 0x30);
      lVar21 = *(longlong *)(param_1 + 0x78);
      *(undefined4 *)(lVar21 + 8 + (ulonglong)uVar14 * 0x18) = puVar11[1];
      *(undefined8 *)(lVar21 + (ulonglong)uVar14 * 0x18) = *(undefined8 *)(puVar11 + 6);
      goto LAB_18001aa34;
    case 0xc:
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)puVar11[1] * 0x10) =
           *(undefined8 *)(puVar11 + 4);
      goto switchD_18001a80a_caseD_1;
    case 0xd:
      bVar4 = (byte)puVar11[1] & 0x3f;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)((uint)puVar11[1] >> 6) * 8)
      ;
      *puVar1 = *puVar1 & (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
    case 0xe:
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + (ulonglong)(uint)puVar11[1] * 0x10) =
           *(undefined8 *)(puVar11 + 4);
      goto switchD_18001a80a_caseD_1;
    case 0xf:
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)((uint)puVar11[1] >> 6) * 8)
      ;
      *puVar1 = *puVar1 | 1L << ((byte)puVar11[1] & 0x3f);
switchD_18001a80a_caseD_1:
      param_2 = 0;
      goto LAB_18001aa34;
    }
    uVar7 = 0;
LAB_18001aa34:
    lVar21 = *(longlong *)(param_1 + 0xb0);
  } while ((lVar21 != 0) && (param_2 == 0));
  if (param_2 == 0) goto LAB_18001af2a;
  goto LAB_18001a289;
LAB_18001af2a:
  uVar7 = uVar7 ^ 1;
LAB_18001af30:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return uVar7 & 0xffffffffffffff01;
}

