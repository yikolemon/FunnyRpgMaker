/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403434b0 */

ulonglong FUN_1403434b0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  longlong *plVar9;
  
  lVar6 = *(longlong *)(param_2 + 0x4c8);
  if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0x11) & 4) == 0)) ||
     (*(short *)(param_2 + 0x11e) <= *(short *)(param_1 + 0x11e))) {
    piVar5 = (int *)(param_2 + 0x20);
    if (lVar6 != 0) {
      piVar5 = (int *)(lVar6 + 0x68);
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if (*piVar5 != iVar1) {
      if (*piVar5 == 0) {
        bVar3 = 1;
        bVar4 = 0;
      }
      else {
        bVar3 = iVar1 == 0 & *(byte *)((longlong)piVar5 + 0x1d);
        bVar4 = bVar3;
      }
      if ((iVar1 != 0) && (*(char *)(param_1 + 0x3d) == '\x01')) {
        bVar4 = bVar3;
      }
      if (bVar4 == 0) goto LAB_140343571;
    }
    lVar6 = (longlong)*(int *)(DAT_14062a630 + 0x2148);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (0 < lVar6) {
      uVar7 = lVar6 + 1;
      plVar9 = (longlong *)(lVar6 * 0x38 + *(longlong *)(DAT_14062a630 + 0x2150) + -0x30);
      do {
        if ((*plVar9 != 0) && (cVar2 = FUN_140318a4d(param_1), cVar2 != '\0')) goto LAB_140343571;
        uVar7 = uVar7 - 1;
        plVar9 = plVar9 + -7;
      } while (1 < uVar7);
    }
  }
  else {
LAB_140343571:
    uVar8 = 0;
  }
  return uVar8 & 0xffffffff;
}

