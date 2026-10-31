/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10081e88 */

int __fastcall FUN_10081e88(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  if ((*(int *)(param_1 + 0x14) == 0) && (cVar1 = FUN_100820fc(), cVar1 == '\0')) {
    *(char **)(param_1 + 0x44) = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LAB_10081f93:
    iVar3 = 0xe;
    goto LAB_10081f98;
  }
  do {
    FUN_10082c38();
    iVar3 = *(int *)(param_1 + 0xc);
    if (0x17 < iVar3 - 9U) break;
  } while ((0x800013U >> (iVar3 - 9U & 0x1f) & 1) != 0);
  if (iVar3 == 0x2f) {
    cVar1 = *(char *)(param_1 + 8);
    while (cVar1 != '\0') {
      cVar1 = FUN_1008213a();
      if (cVar1 == '\0') goto LAB_10081f93;
      do {
        FUN_10082c38();
        iVar3 = *(int *)(param_1 + 0xc);
        if (0x17 < iVar3 - 9U) break;
      } while ((0x800013U >> (iVar3 - 9U & 0x1f) & 1) != 0);
      if (iVar3 != 0x2f) break;
      cVar1 = *(char *)(param_1 + 8);
    }
  }
  if (0x5a < iVar3) {
    if (iVar3 < 0x6e) {
      if (iVar3 == 0x5b) {
        iVar3 = 8;
      }
      else if (iVar3 == 0x5d) {
        iVar3 = 10;
      }
      else {
        if (iVar3 != 0x66) goto switchD_10081f1e_caseD_23;
        iVar3 = -4;
        do {
          cVar1 = FUN_10082c38();
          if ("false"[iVar3 + 5] != cVar1) goto switchD_10081f1e_caseD_23;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0);
        iVar3 = 2;
      }
    }
    else if (iVar3 < 0x7b) {
      if (iVar3 == 0x6e) {
        local_18 = 0x6c6c756e;
        iVar3 = 1;
        do {
          cVar1 = FUN_10082c38();
          if (*(char *)((int)&local_18 + iVar3) != cVar1) goto switchD_10081f1e_caseD_23;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        iVar3 = 3;
      }
      else {
        if (iVar3 != 0x74) goto switchD_10081f1e_caseD_23;
        local_14 = 0x65757274;
        iVar3 = 1;
        iVar2 = iVar3;
        do {
          cVar1 = FUN_10082c38();
          if (*(char *)((int)&local_14 + iVar2) != cVar1) goto switchD_10081f1e_caseD_23;
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
      }
    }
    else if (iVar3 == 0x7b) {
      iVar3 = 9;
    }
    else {
      if (iVar3 != 0x7d) goto switchD_10081f1e_caseD_23;
      iVar3 = 0xb;
    }
    goto LAB_10081f98;
  }
  switch(iVar3) {
  case 0x22:
    if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
      iVar3 = FUN_100821a8();
      return iVar3;
    }
    goto LAB_1008208a;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
switchD_10081f1e_caseD_23:
    *(char **)(param_1 + 0x44) = "invalid literal";
    goto LAB_10081f93;
  case 0x2c:
    iVar3 = 0xd;
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
      iVar3 = FUN_10082960();
      return iVar3;
    }
    goto LAB_1008208a;
  case 0x3a:
    iVar3 = 0xc;
    break;
  default:
    if (1 < iVar3 + 1U) goto switchD_10081f1e_caseD_23;
    iVar3 = 0xf;
  }
LAB_10081f98:
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return iVar3;
  }
LAB_1008208a:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

