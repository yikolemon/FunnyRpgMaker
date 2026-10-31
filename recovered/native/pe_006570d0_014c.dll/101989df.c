/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101989df */

void FUN_101989df(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10198894();
  iVar2 = FUN_1010331e();
  if (*(int *)(iVar2 + 0xa0) < 0) {
    uVar3 = FUN_100fa1fa(0);
    if (*(int *)(iVar2 + 0xa4) != 0) {
      FUN_1025b2d0(uVar3,*(int *)(iVar2 + 0xa4),*(int *)(iVar2 + 0x9c) * 0x28);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0xa4));
    }
    *(undefined4 *)(iVar2 + 0xa4) = uVar3;
    *(undefined4 *)(iVar2 + 0xa0) = 0;
  }
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,(MONITORENUMPROC)&LAB_1019b069,0);
  *(undefined1 *)(iVar1 + 0x28) = 0;
  return;
}

