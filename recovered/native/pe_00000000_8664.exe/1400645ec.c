/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400645ec */

undefined8 FUN_1400645ec(longlong param_1,longlong param_2,longlong param_3)

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
      goto switchD_140064627_caseD_1;
    case 10:
    case 0xb:
      cVar1 = FUN_1400645ec(param_1,*(undefined8 *)(param_2 + 0x20),param_3);
      if (cVar1 == '\0') goto switchD_140064627_caseD_1;
      goto LAB_1400646c9;
    default:
      goto switchD_140064627_caseD_c;
    case 0xd:
      iVar2 = *(int *)(param_2 + 0x20) + -1;
      goto LAB_1400646c6;
    case 0x10:
      lVar4 = param_2;
      do {
        cVar1 = FUN_1400645ec(param_1,*(undefined8 *)(lVar4 + 0x10),param_3);
        if (cVar1 != '\0') goto LAB_1400646c9;
        lVar4 = *(longlong *)(lVar4 + 0x28);
      } while (lVar4 != 0);
      lVar4 = 0x20;
LAB_1400646aa:
      param_2 = *(longlong *)(param_2 + lVar4);
      if (param_2 == 0) goto LAB_1400646b7;
switchD_140064627_caseD_1:
      param_2 = *(longlong *)(param_2 + 0x10);
      break;
    case 0x12:
      lVar4 = (ulonglong)*(uint *)(param_2 + 0x30) * 0x18 + *(longlong *)(param_1 + 0x78);
      cVar1 = FUN_1400645ec(param_1,*(undefined8 *)(param_2 + 0x10),lVar4);
      if (cVar1 == '\0') {
        *(int *)(lVar4 + 0xc) =
             (int)((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) >> 4);
        lVar4 = 0x28;
        goto LAB_1400646aa;
      }
      iVar2 = *(int *)(lVar4 + 0xc);
LAB_1400646c6:
      *(int *)(param_3 + 0xc) = iVar2;
LAB_1400646c9:
      uVar3 = 1;
      goto switchD_140064627_caseD_c;
    }
  }
LAB_1400646b7:
  uVar3 = 0;
switchD_140064627_caseD_c:
  return uVar3;
}

