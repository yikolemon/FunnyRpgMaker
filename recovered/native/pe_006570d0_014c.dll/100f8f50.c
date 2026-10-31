/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f8f50 */

void __thiscall FUN_100f8f50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xbad) != '\0')) {
    iVar1 = *(int *)(param_1 + 0xb0);
    iVar3 = *(int *)(iVar1 + 0x1464);
    iVar2 = *(int *)(iVar1 + 0x1480);
    *(int *)(iVar1 + 0x1480) = iVar2 + 1;
    if (iVar3 == *(int *)(iVar1 + 0x1468)) {
      if (iVar3 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar3 / 2 + iVar3;
      }
      iVar5 = iVar3 + 1;
      if (iVar3 + 1 < iVar4) {
        iVar5 = iVar4;
      }
      iVar4 = FUN_100fa1fa(iVar5 * 0x1c);
      if (*(int *)(iVar1 + 0x146c) != 0) {
        FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x146c),*(int *)(iVar1 + 0x1464) * 0x1c);
        FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x146c));
      }
      *(int *)(iVar1 + 0x146c) = iVar4;
      *(int *)(iVar1 + 0x1468) = iVar5;
      iVar3 = *(int *)(iVar1 + 0x1464);
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x146c);
    }
    iVar3 = iVar3 * 0x1c;
    *(undefined4 *)(iVar4 + iVar3) = 6;
    *(undefined4 *)(iVar4 + 4 + iVar3) = 2;
    *(int *)(iVar4 + 8 + iVar3) = iVar2;
    *(int *)(iVar4 + 0xc + iVar3) = param_2;
    *(undefined8 *)(iVar4 + 0x10 + iVar3) = 0;
    *(undefined4 *)(iVar4 + 0x18 + iVar3) = 0;
    *(int *)(iVar1 + 0x1464) = *(int *)(iVar1 + 0x1464) + 1;
  }
  return;
}

