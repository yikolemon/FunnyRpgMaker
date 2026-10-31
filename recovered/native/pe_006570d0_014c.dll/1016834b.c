/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016834b */

void FUN_1016834b(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_1039d74c;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    FUN_100fa2cb(*(int *)(param_1 + 0x1a4));
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  if (*(int *)(param_1 + 0x164) != 0) {
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    FUN_100fa2cb(*(int *)(param_1 + 0x164));
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  *(undefined1 *)(param_1 + 0x1ff) = 1;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar2 = 0;
    iVar3 = 0x54;
    do {
      *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x74;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x2348) + (param_1 - *(int *)(iVar1 + 9000)) * 0xfe03f81) =
       0xbf800000;
  return;
}

