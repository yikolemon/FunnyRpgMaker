/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b29c */

void __thiscall FUN_1000b29c(int *param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_1c;
  
  if (param_2 < '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Invalid type specification.");
  }
  iVar7 = (int)param_2;
  switch(iVar7) {
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
switchD_1000b2ba_caseD_61:
    iVar7 = 2;
    bVar4 = true;
    bVar5 = false;
    bVar2 = true;
    local_1c = 2;
    bVar6 = true;
    break;
  case 0x62:
  case 100:
  case 0x6f:
  case 0x78:
switchD_1000b2ba_caseD_62:
    iVar7 = 1;
    bVar5 = false;
    bVar4 = false;
    bVar2 = false;
    local_1c = 1;
    bVar6 = false;
    break;
  case 99:
    bVar6 = true;
    iVar7 = 5;
    bVar5 = false;
    bVar4 = false;
    bVar2 = false;
    local_1c = 5;
    break;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
    goto switchD_1000b2ba_caseD_68;
  case 0x70:
switchD_1000b2ba_caseD_70:
    iVar9 = 4;
    bVar2 = true;
    bVar5 = false;
    bVar4 = false;
    local_1c = 4;
    bVar6 = true;
    iVar8 = 4;
    iVar7 = 4;
    goto LAB_1000b485;
  case 0x73:
    iVar7 = 3;
    bVar5 = true;
    bVar4 = false;
    bVar2 = true;
    local_1c = 3;
    bVar6 = false;
    break;
  default:
    uVar1 = iVar7 - 0x41;
    if (uVar1 < 0x18) {
      if ((0x71U >> (uVar1 & 0x1f) & 1) != 0) goto switchD_1000b2ba_caseD_61;
      if ((0x800002U >> (uVar1 & 0x1f) & 1) != 0) goto switchD_1000b2ba_caseD_62;
      if (uVar1 == 0xf) goto switchD_1000b2ba_caseD_70;
    }
    if (iVar7 != 0) {
switchD_1000b2ba_caseD_68:
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type specifier");
    }
    iVar8 = 3;
    local_1c = 5;
    iVar9 = 1;
    bVar5 = true;
    bVar2 = false;
    bVar4 = true;
    bVar6 = false;
    iVar7 = 0;
LAB_1000b485:
    bVar3 = true;
    goto LAB_1000b369;
  }
  bVar3 = false;
  iVar8 = iVar7;
  iVar9 = iVar7;
LAB_1000b369:
  switch((char)param_1[3]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    iVar7 = iVar9;
    if (bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for integer");
    }
    break;
  case '\x05':
    iVar7 = iVar8;
    if (bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for bool");
    }
    break;
  case '\x06':
    iVar7 = local_1c;
    if (bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for char");
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    iVar7 = 2;
    if (!bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for floating-point");
    }
    goto LAB_1000b3f9;
  case '\n':
    iVar7 = 4;
    if (!bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for pointer");
    }
    break;
  case '\v':
  case '\f':
    iVar7 = 3;
    if (!bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for string");
    }
  }
  if ((iVar7 - 3U < 0xfffffffe) && (*(char *)((int)param_1 + 0xd) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Hash/sign modifier requires an arithmetic presentation type");
  }
LAB_1000b3f9:
  if (((*(char *)((int)param_1 + 0xe) == '\x01') && (1 < iVar7 - 1U)) && (iVar7 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Zero modifier requires an arithmetic or pointer presentation type");
  }
  *(char *)(*param_1 + 8) = param_2;
  return;
}

