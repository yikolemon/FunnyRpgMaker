/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011e080 */

void FUN_14011e080(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  bVar1 = **(byte **)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 8) + 1;
  *(byte *)(param_1 + 0x18) = bVar1;
  *(byte **)(param_1 + 8) = pbVar6;
  if ((bVar1 & 1) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1401661e0)[bVar5 & 0xf];
    *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar6 + -4) >> ((&DAT_1401661f0)[bVar5 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar6;
  }
  if ((bVar1 & 2) != 0) {
    uVar2 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    *(byte **)(param_1 + 8) = pbVar6;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  if ((bVar1 & 4) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1401661e0)[bVar5 & 0xf];
    *(uint *)(param_1 + 0x24) = *(uint *)(pbVar6 + -4) >> ((&DAT_1401661f0)[bVar5 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar6;
  }
  pbVar7 = pbVar6 + 4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar6;
  bVar5 = bVar1 & 0x30;
  *(byte **)(param_1 + 8) = pbVar7;
  if ((bVar1 & 8) == 0) {
    if (bVar5 == 0x10) {
      bVar1 = (&DAT_1401661f0)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(((longlong)pbVar7 - (longlong)(char)(&DAT_1401661e0)[*pbVar7 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar7 - (longlong)(char)(&DAT_1401661e0)[*pbVar7 & 0xf];
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      return;
    }
    if (bVar5 == 0x20) {
      bVar1 = (&DAT_1401661f0)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1401661e0)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      bVar1 = (&DAT_1401661f0)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(((longlong)pbVar7 - (longlong)(char)(&DAT_1401661e0)[*pbVar7 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar7 - (longlong)(char)(&DAT_1401661e0)[*pbVar7 & 0xf];
      *(ulonglong *)(param_1 + 0x38) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
    }
  }
  else {
    if (bVar5 == 0x10) {
      iVar3 = *(int *)pbVar7;
      *(byte **)(param_1 + 8) = pbVar6 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      return;
    }
    if (bVar5 == 0x20) {
      iVar3 = *(int *)pbVar7;
      *(byte **)(param_1 + 8) = pbVar6 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      iVar3 = *(int *)(pbVar6 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 0xc;
      *(longlong *)(param_1 + 0x38) = (longlong)iVar3;
      return;
    }
  }
  return;
}

