/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113406 */

void FUN_10113406(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(int *)(DAT_1039d74c + 0x150c) == param_1) {
    FUN_10112e5a(param_1,0xd,0,0);
  }
  iVar2 = *(int *)(iVar1 + 0x138);
  if (iVar2 == *(int *)(iVar1 + 0x13c)) {
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
    if (*(int *)(iVar1 + 0x140) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(iVar1 + 0x140),*(int *)(iVar1 + 0x138) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x140));
    }
    *(int *)(iVar1 + 0x140) = iVar3;
    *(int *)(iVar1 + 0x13c) = iVar4;
    iVar2 = *(int *)(iVar1 + 0x138);
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x140);
  }
  *(int *)(iVar3 + iVar2 * 4) = param_1;
  *(int *)(iVar1 + 0x138) = *(int *)(iVar1 + 0x138) + 1;
  return;
}

