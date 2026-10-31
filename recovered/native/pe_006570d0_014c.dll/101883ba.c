/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101883ba */

void __thiscall
FUN_101883ba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == *(int *)(param_1 + 0x94)) {
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
    iVar3 = FUN_100fa1fa(iVar4 << 4);
    if (*(int *)(param_1 + 0x98) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x98),*(int *)(param_1 + 0x90) << 4);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x98));
    }
    *(int *)(param_1 + 0x98) = iVar3;
    *(int *)(param_1 + 0x94) = iVar4;
    iVar2 = *(int *)(param_1 + 0x90);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x98);
  }
  puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  *(undefined4 *)(param_1 + 0x60) = param_4;
  *(undefined4 *)(param_1 + 100) = param_5;
  FUN_10188046();
  return;
}

