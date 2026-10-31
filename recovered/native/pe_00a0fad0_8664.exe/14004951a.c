/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004951a */

void FUN_14004951a(longlong *param_1,byte param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((char)param_2 < '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1400451d8("Invalid type specification.");
  }
  uVar7 = (uint)param_2;
  uVar6 = (uint)param_2;
  if (param_2 < 0x50) {
    if (param_2 < 0x45) {
      if (uVar6 == 0) {
        uVar6 = 3;
        uVar8 = 5;
        uVar9 = 1;
        bVar3 = true;
        bVar1 = false;
        bVar2 = true;
        bVar5 = false;
        bVar4 = true;
        goto LAB_140049665;
      }
      if (param_2 != 0x41) {
        if (uVar6 != 0x42) goto switchD_140049550_caseD_68;
        goto switchD_140049550_caseD_62;
      }
    }
    else if (2 < uVar6 - 0x45) goto switchD_140049550_caseD_68;
switchD_140049550_caseD_61:
    uVar9 = 2;
    bVar2 = true;
    bVar3 = false;
    bVar1 = true;
    uVar8 = 2;
    bVar5 = true;
    uVar6 = 2;
    bVar4 = false;
    uVar7 = 2;
  }
  else {
    switch(param_2) {
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
      goto switchD_140049550_caseD_61;
    case 99:
      bVar5 = true;
      uVar9 = 5;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      uVar8 = 5;
      uVar6 = 5;
      bVar4 = false;
      uVar7 = 5;
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
switchD_140049550_caseD_68:
                    /* WARNING: Subroutine does not return */
      FUN_1400451d8("Invalid presentation type specifier");
    case 0x70:
switchD_140049550_caseD_70:
      uVar9 = 4;
      bVar1 = true;
      bVar3 = false;
      bVar2 = false;
      uVar8 = 4;
      bVar5 = true;
      uVar6 = 4;
      bVar4 = true;
      uVar7 = 4;
      break;
    case 0x73:
      uVar9 = 3;
      bVar3 = true;
      bVar2 = false;
      bVar1 = true;
      uVar8 = 3;
      bVar5 = false;
      uVar6 = 3;
      bVar4 = false;
      uVar7 = 3;
      break;
    default:
      if (uVar6 == 0x50) goto switchD_140049550_caseD_70;
      if (param_2 != 0x58) goto switchD_140049550_caseD_68;
    case 0x62:
    case 100:
    case 0x6f:
    case 0x78:
switchD_140049550_caseD_62:
      uVar9 = 1;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      uVar8 = 1;
      bVar5 = false;
      uVar6 = 1;
      bVar4 = false;
      uVar7 = 1;
    }
  }
LAB_140049665:
  switch((char)param_1[3]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    uVar7 = uVar9;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1400451d8("Invalid presentation type for integer");
    }
    break;
  case '\x05':
    uVar7 = uVar6;
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1400451d8("Invalid presentation type for bool");
    }
    break;
  case '\x06':
    uVar7 = uVar8;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1400451d8("Invalid presentation type for char");
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    uVar7 = 2;
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1400451d8("Invalid presentation type for floating-point");
    }
    goto LAB_140049708;
  case '\n':
    uVar7 = 4;
    if (!bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1400451d8("Invalid presentation type for pointer");
    }
    break;
  case '\v':
  case '\f':
    uVar7 = 3;
    if (!bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1400451d8("Invalid presentation type for string");
    }
  }
  if ((uVar7 - 3 < 0xfffffffe) && (*(char *)((longlong)param_1 + 0x19) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1400451d8("Hash/sign modifier requires an arithmetic presentation type");
  }
LAB_140049708:
  if (((*(char *)((longlong)param_1 + 0x1a) == '\x01') && (1 < uVar7 - 1)) && (uVar7 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400451d8("Zero modifier requires an arithmetic or pointer presentation type");
  }
  *(byte *)(*param_1 + 8) = param_2;
  return;
}

