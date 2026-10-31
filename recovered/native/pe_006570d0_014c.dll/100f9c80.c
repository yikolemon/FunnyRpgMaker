/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9c80 */

void __thiscall FUN_100f9c80(int param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar3 = FUN_100f9526(0xffffffff);
  if (iVar3 == 0) {
    bVar2 = *(byte *)(iVar1 + 0xbdc) ^ 1;
  }
  else {
    bVar2 = *(byte *)(iVar3 + 0xc);
  }
  if ((param_2 != bVar2) && ((param_2 != 0 || (*(char *)(param_1 + 0x75) == '\0')))) {
    iVar4 = *(int *)(iVar1 + 0x1464);
    iVar3 = *(int *)(iVar1 + 0x1480);
    *(int *)(iVar1 + 0x1480) = iVar3 + 1;
    if (iVar4 == *(int *)(iVar1 + 0x1468)) {
      if (iVar4 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar4 / 2 + iVar4;
      }
      iVar6 = iVar4 + 1;
      if (iVar4 + 1 < iVar5) {
        iVar6 = iVar5;
      }
      iVar5 = FUN_100fa1fa(iVar6 * 0x1c);
      if (*(int *)(iVar1 + 0x146c) != 0) {
        FUN_1025b2d0(iVar5,*(int *)(iVar1 + 0x146c),*(int *)(iVar1 + 0x1464) * 0x1c);
        FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x146c));
      }
      *(int *)(iVar1 + 0x146c) = iVar5;
      *(int *)(iVar1 + 0x1468) = iVar6;
      iVar4 = *(int *)(iVar1 + 0x1464);
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x146c);
    }
    iVar4 = iVar4 * 0x1c;
    *(undefined4 *)(iVar5 + iVar4) = 7;
    *(undefined4 *)(iVar5 + 4 + iVar4) = 0;
    *(int *)(iVar5 + 8 + iVar4) = iVar3;
    *(byte *)(iVar5 + 0xc + iVar4) = param_2;
    *(undefined8 *)(iVar5 + 0xd + iVar4) = 0;
    *(undefined8 *)(iVar5 + 0x14 + iVar4) = 0;
    *(int *)(iVar1 + 0x1464) = *(int *)(iVar1 + 0x1464) + 1;
  }
  return;
}

