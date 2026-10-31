/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010190f */

void FUN_1010190f(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_1039d74c;
  *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + 1;
  iVar2 = *(int *)(iVar1 + 0x1214);
  if (iVar2 == *(int *)(iVar1 + 0x1218)) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar4 * 4);
    if (*(int *)(iVar1 + 0x121c) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(iVar1 + 0x121c),*(int *)(iVar1 + 0x1214) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x121c));
    }
    *(int *)(iVar1 + 0x121c) = iVar3;
    *(int *)(iVar1 + 0x1218) = iVar4;
    iVar2 = *(int *)(iVar1 + 0x1214);
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x121c);
  }
  *(int *)(iVar3 + iVar2 * 4) = param_1;
  *(int *)(iVar1 + 0x1214) = *(int *)(iVar1 + 0x1214) + 1;
  FUN_1019137c(param_1,iVar1 + 0x123c);
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    iVar3 = 0;
    do {
      *(undefined2 *)(*(int *)(iVar1 + iVar3) + 0x4c) = *(undefined2 *)(param_1 + 0x2a4);
      iVar3 = iVar3 + 4;
    } while (iVar2 << 2 != iVar3);
  }
  return;
}

