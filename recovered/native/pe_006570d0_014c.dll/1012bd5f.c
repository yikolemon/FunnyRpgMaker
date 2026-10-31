/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012bd5f */

undefined4 __fastcall FUN_1012bd5f(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_2 + 0x434);
  if (((iVar1 == 0) || ((*(byte *)(iVar1 + 0x11) & 4) == 0)) ||
     (*(short *)(param_2 + 0x10e) <= *(short *)(param_1 + 0x10e))) {
    piVar6 = (int *)(param_2 + 0x18);
    if (iVar1 != 0) {
      piVar6 = (int *)(iVar1 + 0x54);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (*piVar6 != iVar1) {
      if (*piVar6 == 0) {
        bVar3 = 1;
        bVar4 = 0;
      }
      else {
        bVar3 = iVar1 == 0 & *(byte *)((int)piVar6 + 0x1d);
        bVar4 = bVar3;
      }
      if ((iVar1 != 0) && (*(char *)(param_1 + 0x35) == '\x01')) {
        bVar4 = bVar3;
      }
      if (bVar4 == 0) goto LAB_1012be02;
    }
    iVar1 = *(int *)(DAT_1039d74c + 0x1fbc);
    uVar5 = 1;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      piVar6 = (int *)(*(int *)(DAT_1039d74c + 0x1fc4) + iVar1 * 0x28 + -0x24);
      do {
        if ((*piVar6 != 0) && (cVar2 = FUN_101029f7(param_1,*piVar6), cVar2 != '\0'))
        goto LAB_1012be02;
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + -10;
      } while (1 < uVar7);
    }
  }
  else {
LAB_1012be02:
    uVar5 = 0;
  }
  return uVar5;
}

