/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9b72 */

void __thiscall FUN_100f9b72(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0xbad) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xb0);
    iVar2 = FUN_100f9526(0xffffffff);
    piVar3 = (int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      piVar3 = (int *)(iVar1 + 0x100);
    }
    if (*piVar3 != param_2) {
      iVar2 = *(int *)(iVar1 + 0x1464);
      if (iVar2 == *(int *)(iVar1 + 0x1468)) {
        if (iVar2 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar2 / 2 + iVar2;
        }
        iVar5 = iVar2 + 1;
        if (iVar2 + 1 < iVar4) {
          iVar5 = iVar4;
        }
        iVar4 = FUN_100fa1fa(iVar5 * 0x1c);
        if (*(int *)(iVar1 + 0x146c) != 0) {
          FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x146c),*(int *)(iVar1 + 0x1464) * 0x1c);
          FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x146c));
        }
        *(int *)(iVar1 + 0x146c) = iVar4;
        *(int *)(iVar1 + 0x1468) = iVar5;
        iVar2 = *(int *)(iVar1 + 0x1464);
      }
      else {
        iVar4 = *(int *)(iVar1 + 0x146c);
      }
      iVar2 = iVar2 * 0x1c;
      *(undefined4 *)(iVar4 + iVar2) = 4;
      *(undefined4 *)(iVar4 + 4 + iVar2) = 1;
      *(undefined4 *)(iVar4 + 8 + iVar2) = 0;
      *(int *)(iVar4 + 0xc + iVar2) = param_2;
      *(undefined8 *)(iVar4 + 0x10 + iVar2) = 0;
      *(undefined4 *)(iVar4 + 0x18 + iVar2) = 0;
      *(int *)(iVar1 + 0x1464) = *(int *)(iVar1 + 0x1464) + 1;
    }
  }
  return;
}

