/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008cbe0 */

void FUN_14008cbe0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  iVar3 = *(int *)(param_2 + 8);
  *(byte **)(param_1 + 8) = pbVar9;
  iVar6 = 0;
  pbVar7 = pbVar9 + -(longlong)(char)(&DAT_14010b650)[*pbVar9 & 0xf];
  *(uint *)(param_1 + 0x18) = *(uint *)(pbVar7 + -4) >> ((&DAT_14010b660)[*pbVar9 & 0xf] & 0x1f);
  *(byte **)(param_1 + 8) = pbVar7;
  bVar1 = (&DAT_14010b660)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_14010b650)[*pbVar7 & 0xf];
  uVar4 = *(uint *)(pbVar7 + -4);
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_14010b660)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_14010b650)[*pbVar7 & 0xf];
  uVar4 = *(uint *)(pbVar7 + -4);
  pbVar9 = pbVar7 + 4;
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
  uVar5 = *(undefined4 *)pbVar7;
  *(byte **)(param_1 + 8) = pbVar9;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  if (iVar3 != 0) {
    do {
      iVar6 = iVar6 + 1;
      lVar8 = (longlong)(char)(&DAT_14010b650)[*pbVar9 & 0xf];
      bVar1 = (&DAT_14010b660)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_14010b650)[*pbVar7 & 0xf];
      bVar1 = (&DAT_14010b660)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_14010b660)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_14010b650)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      lVar8 = (longlong)(char)(&DAT_14010b650)[*pbVar9 & 0xf];
      bVar1 = (&DAT_14010b660)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_14010b650)[*pbVar7 & 0xf];
      bVar1 = (&DAT_14010b660)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_14010b660)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_14010b650)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
    } while (iVar6 != iVar3);
  }
  return;
}

