/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140092e6e */

undefined8 FUN_140092e6e(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  while (param_2 != 0) {
    uVar3 = 0;
    switch(*(undefined4 *)(param_2 + 8)) {
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
      goto switchD_140092ea9_caseD_1;
    case 10:
    case 0xb:
      cVar1 = FUN_140092e6e(param_1,*(undefined8 *)(param_2 + 0x20),param_3);
      if (cVar1 == '\0') goto switchD_140092ea9_caseD_1;
      goto LAB_140092f4b;
    default:
      goto switchD_140092ea9_caseD_c;
    case 0xd:
      iVar2 = *(int *)(param_2 + 0x20) + -1;
      goto LAB_140092f48;
    case 0x10:
      lVar4 = param_2;
      do {
        cVar1 = FUN_140092e6e(param_1,*(undefined8 *)(lVar4 + 0x10),param_3);
        if (cVar1 != '\0') goto LAB_140092f4b;
        lVar4 = *(longlong *)(lVar4 + 0x28);
      } while (lVar4 != 0);
      lVar4 = 0x20;
LAB_140092f2c:
      param_2 = *(longlong *)(param_2 + lVar4);
      if (param_2 == 0) goto LAB_140092f39;
switchD_140092ea9_caseD_1:
      param_2 = *(longlong *)(param_2 + 0x10);
      break;
    case 0x12:
      lVar4 = (ulonglong)*(uint *)(param_2 + 0x30) * 0x18 + *(longlong *)(param_1 + 0x78);
      cVar1 = FUN_140092e6e(param_1,*(undefined8 *)(param_2 + 0x10),lVar4);
      if (cVar1 == '\0') {
        *(int *)(lVar4 + 0xc) =
             (int)((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) >> 4);
        lVar4 = 0x28;
        goto LAB_140092f2c;
      }
      iVar2 = *(int *)(lVar4 + 0xc);
LAB_140092f48:
      *(int *)(param_3 + 0xc) = iVar2;
LAB_140092f4b:
      uVar3 = 1;
      goto switchD_140092ea9_caseD_c;
    }
  }
LAB_140092f39:
  uVar3 = 0;
switchD_140092ea9_caseD_c:
  return uVar3;
}

