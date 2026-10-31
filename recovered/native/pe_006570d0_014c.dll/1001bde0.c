/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001bde0 */

undefined4 __thiscall FUN_1001bde0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  while (param_2 != 0) {
    uVar2 = 0;
    switch(*(undefined4 *)(param_2 + 4)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xe:
    case 0xf:
    case 0x14:
      goto switchD_1001be05_caseD_1;
    case 10:
    case 0xb:
      cVar1 = FUN_1001bde0(*(undefined4 *)(param_2 + 0x14),param_3);
      if (cVar1 == '\0') goto switchD_1001be05_caseD_1;
      goto LAB_1001be85;
    default:
      goto switchD_1001be05_caseD_c;
    case 0xd:
      iVar3 = *(int *)(param_2 + 0x14) + -1;
      goto LAB_1001be82;
    case 0x10:
      iVar3 = param_2;
      do {
        cVar1 = FUN_1001bde0(*(undefined4 *)(iVar3 + 0xc),param_3);
        if (cVar1 != '\0') goto LAB_1001be85;
        iVar3 = *(int *)(iVar3 + 0x18);
      } while (iVar3 != 0);
      iVar3 = 0x14;
LAB_1001be6e:
      param_2 = *(int *)(param_2 + iVar3);
      if (param_2 == 0) goto LAB_1001be75;
switchD_1001be05_caseD_1:
      param_2 = *(int *)(param_2 + 0xc);
      break;
    case 0x12:
      iVar3 = *(int *)(param_2 + 0x20) * 0x10 + *(int *)(param_1 + 0x40);
      cVar1 = FUN_1001bde0(*(undefined4 *)(param_2 + 0xc),iVar3);
      if (cVar1 == '\0') {
        *(int *)(iVar3 + 8) = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3;
        iVar3 = 0x1c;
        goto LAB_1001be6e;
      }
      iVar3 = *(int *)(iVar3 + 8);
LAB_1001be82:
      *(int *)(param_3 + 8) = iVar3;
LAB_1001be85:
      uVar2 = 1;
      goto switchD_1001be05_caseD_c;
    }
  }
LAB_1001be75:
  uVar2 = 0;
switchD_1001be05_caseD_c:
  return uVar2;
}

