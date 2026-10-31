/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180082c36 */

undefined8 FUN_180082c36(longlong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_48 [36];
  char local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x20) != 0) || (cVar1 = FUN_180082e90(param_1), cVar1 != '\0')) {
    do {
      FUN_18008375a(param_1);
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x14);
      if (0x20 < uVar3) break;
    } while ((0x100002600U >> (uVar3 & 0x3f) & 1) != 0);
    do {
      iVar2 = (int)uVar3;
      if ((iVar2 != 0x2f) || (*(char *)(param_1 + 0x10) == '\0')) goto LAB_180082cbb;
      cVar1 = FUN_180082eda(param_1);
      if (cVar1 == '\0') goto LAB_180082d5d;
      do {
        FUN_18008375a(param_1);
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x14);
        if (0x20 < uVar3) break;
      } while ((0x100002600U >> (uVar3 & 0x3f) & 1) != 0);
    } while( true );
  }
  pcVar5 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LAB_180082d59:
  *(char **)(param_1 + 0x70) = pcVar5;
LAB_180082d5d:
  uVar4 = 0xe;
  goto LAB_180082d62;
LAB_180082cbb:
  if (0x5a < iVar2) {
    if (iVar2 < 0x6e) {
      if (iVar2 == 0x5b) {
        uVar4 = 8;
      }
      else if (iVar2 == 0x5d) {
        uVar4 = 10;
      }
      else {
        if (iVar2 != 0x66) goto switchD_180082cda_caseD_23;
        lVar6 = 0;
        do {
          cVar1 = FUN_18008375a(param_1);
          if ("false"[lVar6 + 1] != cVar1) goto switchD_180082cda_caseD_23;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 4);
        uVar4 = 2;
      }
    }
    else if (iVar2 < 0x7b) {
      if (iVar2 == 0x6e) {
        builtin_strncpy(local_24,"null",4);
        lVar6 = 1;
        do {
          cVar1 = FUN_18008375a(param_1);
          if (local_24[lVar6] != cVar1) goto switchD_180082cda_caseD_23;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 4);
        uVar4 = 3;
      }
      else {
        if (iVar2 != 0x74) goto switchD_180082cda_caseD_23;
        builtin_strncpy(local_24,"true",4);
        lVar6 = 1;
        do {
          cVar1 = FUN_18008375a(param_1);
          if (local_24[lVar6] != cVar1) goto switchD_180082cda_caseD_23;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 4);
        uVar4 = 1;
      }
    }
    else if (iVar2 == 0x7b) {
      uVar4 = 9;
    }
    else {
      if (iVar2 != 0x7d) goto switchD_180082cda_caseD_23;
      uVar4 = 0xb;
    }
    goto LAB_180082d62;
  }
  switch(iVar2) {
  case 0x22:
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
      uVar4 = FUN_180082f5a(param_1);
      return uVar4;
    }
    goto LAB_180082e81;
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
switchD_180082cda_caseD_23:
    pcVar5 = "invalid literal";
    goto LAB_180082d59;
  case 0x2c:
    uVar4 = 0xd;
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
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
      uVar4 = FUN_18008344a(param_1);
      return uVar4;
    }
    goto LAB_180082e81;
  case 0x3a:
    uVar4 = 0xc;
    break;
  default:
    if (1 < iVar2 + 1U) goto switchD_180082cda_caseD_23;
    uVar4 = 0xf;
  }
LAB_180082d62:
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return uVar4;
  }
LAB_180082e81:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

