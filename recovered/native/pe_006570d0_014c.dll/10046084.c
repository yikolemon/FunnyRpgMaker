/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10046084 */

void __thiscall FUN_10046084(int *param_1,ushort param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  
  uVar7 = (uint)param_2;
  if (0x7f < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Invalid type specification.");
  }
  switch(uVar7) {
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
switchD_100460a6_caseD_61:
    iVar9 = 2;
    bVar3 = true;
    bVar4 = false;
    bVar6 = true;
    local_1c = 2;
    bVar5 = true;
    break;
  case 0x62:
  case 100:
  case 0x6f:
  case 0x78:
switchD_100460a6_caseD_62:
    iVar9 = 1;
    bVar4 = false;
    bVar3 = false;
    bVar6 = false;
    local_1c = 1;
    bVar5 = false;
    break;
  case 99:
    bVar5 = true;
    iVar9 = 5;
    bVar4 = false;
    bVar3 = false;
    bVar6 = false;
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
    goto switchD_100460a6_caseD_68;
  case 0x70:
switchD_100460a6_caseD_70:
    iVar10 = 4;
    bVar6 = true;
    bVar4 = false;
    bVar3 = false;
    local_1c = 4;
    bVar5 = true;
    iVar8 = 4;
    iVar9 = 4;
    goto LAB_1004628f;
  case 0x73:
    iVar9 = 3;
    bVar4 = true;
    bVar3 = false;
    bVar6 = true;
    local_1c = 3;
    bVar5 = false;
    break;
  default:
    uVar1 = uVar7 - 0x41;
    if (uVar1 < 0x18) {
      if ((0x71U >> (uVar1 & 0x1f) & 1) != 0) goto switchD_100460a6_caseD_61;
      if ((0x800002U >> (uVar1 & 0x1f) & 1) != 0) goto switchD_100460a6_caseD_62;
      if (uVar1 == 0xf) goto switchD_100460a6_caseD_70;
    }
    if (uVar7 != 0) {
switchD_100460a6_caseD_68:
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type specifier");
    }
    iVar8 = 3;
    local_1c = 5;
    iVar10 = 1;
    bVar4 = true;
    bVar6 = false;
    bVar3 = true;
    bVar5 = false;
    iVar9 = 0;
LAB_1004628f:
    bVar2 = true;
    goto LAB_10046168;
  }
  bVar2 = false;
  iVar8 = iVar9;
  iVar10 = iVar9;
LAB_10046168:
  switch((char)param_1[3]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    iVar9 = iVar10;
    if (bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for integer");
    }
    break;
  case '\x05':
    iVar9 = iVar8;
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for bool");
    }
    break;
  case '\x06':
    iVar9 = local_1c;
    if (bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for wchar_t");
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    iVar9 = 2;
    if (!bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for floating-point");
    }
    goto LAB_100461fd;
  case '\n':
    iVar9 = 4;
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for pointer");
    }
    break;
  case '\v':
  case '\f':
    iVar9 = 3;
    if (!bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid presentation type for string");
    }
  }
  if ((iVar9 - 3U < 0xfffffffe) && (*(char *)((int)param_1 + 0xd) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Hash/sign modifier requires an arithmetic presentation type");
  }
LAB_100461fd:
  if (((*(char *)((int)param_1 + 0xe) == '\x01') && (1 < iVar9 - 1U)) && (iVar9 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Zero modifier requires an arithmetic or pointer presentation type");
  }
  *(char *)(*param_1 + 8) = (char)param_2;
  return;
}

