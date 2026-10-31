/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010d606 */

int __fastcall FUN_1010d606(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  iVar1 = DAT_1039d74c;
  iVar2 = FUN_100fa1fa(0x440);
  FUN_10101d2a(iVar1,param_1);
  *(uint *)(iVar2 + 0xc) = param_2;
  local_14 = iVar2;
  FUN_100fb37c(*(undefined4 *)(iVar2 + 8),iVar2);
  if ((param_2 >> 8 & 1) == 0) {
    iVar3 = FUN_10118b2b(iVar2);
    if (iVar3 != 0) {
      *(int *)(iVar2 + 0x2e4) = iVar3 - *(int *)(iVar1 + 0x26f0);
    }
  }
  FUN_10118b53();
  if ((param_2 >> 0xd & 1) == 0) {
    iVar3 = *(int *)(iVar1 + 0x1484);
    if (iVar3 == *(int *)(iVar1 + 0x1488)) {
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
      iVar4 = FUN_100fa1fa(iVar5 * 4);
      if (*(int *)(iVar1 + 0x148c) != 0) {
        FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x148c),*(int *)(iVar1 + 0x1484) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x148c));
      }
      *(int *)(iVar1 + 0x148c) = iVar4;
      *(int *)(iVar1 + 0x1488) = iVar5;
      iVar3 = *(int *)(iVar1 + 0x1484);
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x148c);
    }
    *(int *)(iVar4 + iVar3 * 4) = iVar2;
    *(int *)(iVar1 + 0x1484) = *(int *)(iVar1 + 0x1484) + 1;
    local_14 = iVar2;
  }
  else {
    FUN_1012647e(&local_14);
  }
  return local_14;
}

