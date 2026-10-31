/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142ab7 */

void FUN_10142ab7(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = DAT_1039d74c;
  if ((param_1 != 0) && (*(int *)(DAT_1039d74c + 0x247c) == param_1)) {
    *(int *)(DAT_1039d74c + 0x24e4) = param_1;
    if ((*(byte *)(iVar2 + 0x2479) & 2) == 0) {
      iVar4 = *(int *)(iVar2 + 0x24ec);
      iVar1 = *(int *)(iVar2 + 0x2480) + 1;
      if (*(int *)(iVar2 + 0x2480) < iVar4) {
        uVar3 = *(undefined4 *)(iVar2 + 0x24f0);
        iVar4 = iVar1;
      }
      else {
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        uVar3 = FUN_100fa1fa(iVar4);
        if (*(int *)(iVar2 + 0x24f0) != 0) {
          FUN_1025b2d0(uVar3,*(int *)(iVar2 + 0x24f0),*(undefined4 *)(iVar2 + 0x24e8));
          FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x24f0));
        }
        *(undefined4 *)(iVar2 + 0x24f0) = uVar3;
        *(int *)(iVar2 + 0x24ec) = iVar4;
        iVar4 = *(int *)(iVar2 + 0x2480) + 1;
      }
      *(int *)(iVar2 + 0x24e8) = iVar1;
      FUN_1025b2d0(uVar3,*(undefined4 *)(iVar2 + 0x2490),iVar4);
    }
    else {
      if (*(int *)(iVar2 + 0x24ec) < 0) {
        uVar3 = FUN_100fa1fa(0);
        if (*(int *)(iVar2 + 0x24f0) != 0) {
          FUN_1025b2d0(uVar3,*(int *)(iVar2 + 0x24f0),*(undefined4 *)(iVar2 + 0x24e8));
          FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x24f0));
        }
        *(undefined4 *)(iVar2 + 0x24f0) = uVar3;
        *(undefined4 *)(iVar2 + 0x24ec) = 0;
      }
      *(undefined4 *)(iVar2 + 0x24e8) = 0;
    }
  }
  return;
}

