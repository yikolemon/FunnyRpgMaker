/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b9cee */

void FUN_1400b9cee(longlong param_1,byte *param_2,ushort param_3)

{
  ushort *puVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  ushort *puVar9;
  longlong lVar10;
  
  if (param_3 < 0x3fc && 0x289 < (ushort)(param_3 - 0x15e)) {
    FUN_140117538((uint)param_2[0xc] * (uint)param_2[7] + (uint)*param_2);
    iVar5 = 0;
    do {
      lVar10 = 7;
      do {
        uVar4 = FUN_140117550();
        puVar1 = (ushort *)(param_1 + lVar10 * 2);
        *puVar1 = *puVar1 ^ uVar4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 3);
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 8;
    } while (iVar5 != 4);
  }
  else {
    FUN_140117538((uint)param_2[10] * (uint)param_2[9] + (uint)param_2[3] + 0xc);
    puVar1 = (ushort *)(param_1 + 0x1e);
    bVar3 = true;
    lVar10 = param_1;
    do {
      lVar2 = lVar10;
      bVar8 = bVar3;
      puVar9 = puVar1;
      lVar10 = 7;
      do {
        uVar4 = FUN_140117550();
        puVar1 = (ushort *)(param_1 + lVar10 * 2);
        *puVar1 = *puVar1 ^ uVar4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 3);
      param_1 = param_1 + 8;
      puVar1 = puVar9 + 4;
      bVar3 = false;
      lVar10 = lVar2 + 8;
    } while (bVar8);
    iVar5 = FUN_140117550();
    iVar6 = FUN_140117550();
    uVar7 = FUN_140117550();
    *(uint *)(lVar2 + 0x10) =
         *(uint *)(lVar2 + 0x10) ^
         ((uint)((longlong)iVar6 << 0x1f) | uVar7 | (uint)((longlong)iVar5 << 0x11));
    *(uint *)(lVar2 + 0x14) =
         *(uint *)(lVar2 + 0x14) ^
         ((uint)((ulonglong)((longlong)iVar6 << 0x1f) >> 0x20) |
         (uint)((ulonglong)((longlong)iVar5 << 0x11) >> 0x20));
    lVar10 = -4;
    do {
      uVar4 = FUN_140117550();
      *puVar9 = *puVar9 ^ uVar4;
      puVar9 = puVar9 + -1;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0);
  }
  return;
}

