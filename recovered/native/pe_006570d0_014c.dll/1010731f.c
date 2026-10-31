/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010731f */

void FUN_1010731f(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x30) & 0x80) == 0) {
    if ((0 < *(int *)(param_1 + 0x269c)) || (0 < *(int *)(param_1 + 0x26a8))) {
      FUN_10119f7c();
    }
  }
  else {
    if ((*(char *)(param_1 + 0x6c) == '\x01') && (iVar3 = *(int *)(param_1 + 0x269c), 0 < iVar3)) {
      iVar5 = 0;
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x26a4) + 4 + iVar5 * 8);
        if (((puVar1 != (undefined4 *)0x0) && (puVar1[6] == 0)) && (puVar1[7] != 0)) {
          FUN_1011a075(*puVar1);
          iVar3 = *(int *)(param_1 + 0x269c);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (*(char *)(param_1 + 0x26c0) == '\x01') {
      FUN_1011a442(param_1);
      *(undefined1 *)(param_1 + 0x26c0) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x26a8);
    if (iVar3 != 0) {
      iVar5 = *(int *)(param_1 + 0x26b0);
      iVar4 = 0;
      do {
        if (*(int *)(iVar5 + iVar4) == 2) {
          iVar2 = *(int *)(iVar5 + 0x1c + iVar4);
          if (iVar2 == 0) {
            iVar2 = *(int *)(iVar5 + 0x20 + iVar4);
            if (iVar2 != 0) {
              FUN_1011a693(param_1,iVar2);
            }
          }
          else {
            FUN_10118c2f(param_1,iVar2,1);
          }
        }
        iVar4 = iVar4 + 0x24;
      } while (iVar3 * 0x24 != iVar4);
    }
  }
  return;
}

