/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000f8b6 */

void FUN_14000f8b6(longlong *param_1,ushort param_2)

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
  
  uVar6 = (uint)param_2;
  if (0x7f < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000b455(0x14011bed1);
  }
  if (param_2 < 0x50) {
    uVar7 = (uint)param_2;
    if (uVar7 < 0x45) {
      if (uVar7 == 0) {
        uVar7 = 3;
        uVar8 = 5;
        uVar9 = 1;
        bVar3 = true;
        bVar1 = false;
        bVar2 = true;
        bVar5 = false;
        bVar4 = true;
        goto LAB_14000fa04;
      }
      if (uVar6 != 0x41) {
        if (uVar6 != 0x42) goto switchD_14000f8ef_caseD_68;
        goto switchD_14000f8ef_caseD_62;
      }
    }
    else if (2 < uVar7 - 0x45) goto switchD_14000f8ef_caseD_68;
switchD_14000f8ef_caseD_61:
    uVar9 = 2;
    bVar2 = true;
    bVar3 = false;
    bVar1 = true;
    uVar8 = 2;
    bVar5 = true;
    uVar7 = 2;
    bVar4 = false;
    uVar6 = 2;
  }
  else {
    switch(param_2) {
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
      goto switchD_14000f8ef_caseD_61;
    case 99:
      bVar5 = true;
      uVar9 = 5;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      uVar8 = 5;
      uVar7 = 5;
      bVar4 = false;
      uVar6 = 5;
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
switchD_14000f8ef_caseD_68:
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011a823);
    case 0x70:
switchD_14000f8ef_caseD_70:
      uVar9 = 4;
      bVar1 = true;
      bVar3 = false;
      bVar2 = false;
      uVar8 = 4;
      bVar5 = true;
      uVar7 = 4;
      bVar4 = true;
      uVar6 = 4;
      break;
    case 0x73:
      uVar9 = 3;
      bVar3 = true;
      bVar2 = false;
      bVar1 = true;
      uVar8 = 3;
      bVar5 = false;
      uVar7 = 3;
      bVar4 = false;
      uVar6 = 3;
      break;
    default:
      if (uVar6 == 0x50) goto switchD_14000f8ef_caseD_70;
      if (uVar6 != 0x58) goto switchD_14000f8ef_caseD_68;
    case 0x62:
    case 100:
    case 0x6f:
    case 0x78:
switchD_14000f8ef_caseD_62:
      uVar9 = 1;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      uVar8 = 1;
      bVar5 = false;
      uVar7 = 1;
      bVar4 = false;
      uVar6 = 1;
    }
  }
LAB_14000fa04:
  switch((char)param_1[3]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    uVar6 = uVar9;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011a847);
    }
    break;
  case '\x05':
    uVar6 = uVar7;
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011abab);
    }
    break;
  case '\x06':
    uVar6 = uVar8;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011a3bc);
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    uVar6 = 2;
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011a028);
    }
    goto LAB_14000faa7;
  case '\n':
    uVar6 = 4;
    if (!bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011a773);
    }
    break;
  case '\v':
  case '\f':
    uVar6 = 3;
    if (!bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011aea4);
    }
  }
  if ((uVar6 - 3 < 0xfffffffe) && (*(char *)((longlong)param_1 + 0x19) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_14000b455(0x14011b217);
  }
LAB_14000faa7:
  if (((*(char *)((longlong)param_1 + 0x1a) == '\x01') && (1 < uVar6 - 1)) && (uVar6 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_14000b455(0x14011b1d5);
  }
  *(char *)(*param_1 + 8) = (char)param_2;
  return;
}

