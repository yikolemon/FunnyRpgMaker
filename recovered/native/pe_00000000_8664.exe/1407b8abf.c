/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b8abf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b8abf(void)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  char cVar11;
  ushort uVar12;
  uint unaff_EBX;
  uint *puVar13;
  undefined8 *puVar14;
  short in_R10W;
  undefined4 uVar15;
  undefined8 *apuStack_30 [2];
  byte *pbVar5;
  ulonglong uVar10;
  
  puVar14 = (undefined8 *)(ulonglong)unaff_EBX;
  uVar6 = (ulonglong)_DAT_150b5621a;
  *(undefined1 *)((longlong)puVar14 + 500) = 0;
  if ((*(byte *)((longlong)puVar14 + 4) & 0x10) == 0) {
    if (*(int *)(puVar14 + 7) == -1) {
      apuStack_30[0] = (undefined8 *)*puVar14;
      lVar4 = FUN_1407bfa51();
      puVar13 = (uint *)(ulonglong)((int)apuStack_30 + 4);
      if ((int)lVar4 == 0) {
        return;
      }
      iVar8 = *(int *)(puVar14 + 8);
      if (iVar8 != *(short *)(lVar4 + 0xc)) {
        *(undefined1 *)((longlong)puVar14 + 0x1f5) = 1;
      }
      *(int *)(puVar14 + 7) = (int)lVar4 - *(int *)(uVar6 + 0x26fc);
    }
    else {
      apuStack_30[0] = puVar14;
      lVar4 = FUN_1407bfa8b();
      puVar13 = (uint *)(ulonglong)((int)apuStack_30 + 4);
      iVar8 = *(int *)(puVar14 + 8);
    }
    *(undefined4 *)((longlong)puVar14 + 0x34) = *(undefined4 *)(lVar4 + 4);
    *puVar13 = (int)lVar4;
    uVar15 = *(undefined4 *)(lVar4 + 8);
    *(undefined4 *)(puVar14 + 0x17) = uVar15;
    while (0 < iVar8) {
      uVar3 = *(uint *)(puVar14 + 2);
      puVar13[-2] = 0xffffffff;
      puVar13[-1] = 0xffffffff;
      puVar13[-4] = 0x407b8b4f;
      puVar13[-3] = 1;
      uVar15 = FUN_1407bcead(puVar14,uVar3);
      puVar13 = (uint *)(ulonglong)((int)puVar13 - 4);
      *(undefined1 *)((ulonglong)uVar3 + 0x6f) = 0;
      iVar8 = *(int *)(puVar14 + 8);
    }
    uVar6 = (ulonglong)*puVar13;
    sVar7 = *(short *)(uVar6 + 0xc);
    if (0 < sVar7) {
      uVar3 = *puVar13 + 0x22;
      do {
        pbVar5 = (byte *)(ulonglong)uVar3;
        sVar1 = *(short *)(pbVar5 + -6);
        if ((-1 < sVar1) && ((int)sVar1 < *(int *)(puVar14 + 8))) {
          uVar9 = sVar1 * 0x74 + *(int *)(puVar14 + 2);
          uVar10 = (ulonglong)uVar9;
          if ((*(byte *)(uVar6 + 4) & 1) != 0) {
            uVar15 = *(undefined4 *)(pbVar5 + -0xe);
            uVar2 = uVar9 + 0x1c;
            if ((*pbVar5 & 0x10) == 0) {
              uVar2 = uVar9 + 0x10;
            }
            *(undefined4 *)(ulonglong)uVar2 = uVar15;
          }
          uVar9 = *(uint *)(uVar6 + 4);
          if ((uVar9 & 2) != 0) {
            *(undefined2 *)(uVar10 + 0x56) = *(undefined2 *)(pbVar5 + -4);
            uVar9 = *(uint *)(uVar6 + 4);
          }
          if (((uVar9 & 4) != 0) && (cVar11 = (char)(*pbVar5 << 4) >> 6, cVar11 != -1)) {
            *(bool *)(uVar10 + 0x68) = cVar11 == '\x01';
            *(bool *)(uVar10 + 0x67) = cVar11 == '\x01';
          }
          *(undefined2 *)(uVar10 + 0x5e) = *(undefined2 *)(pbVar5 + -2);
          uVar12 = CONCAT11(*(undefined1 *)(uVar10 + 0x71),*pbVar5) & 0xfc03;
          *(byte *)(uVar10 + 0x71) = (byte)(uVar12 >> 8) | (byte)uVar12;
          sVar7 = *(short *)(uVar6 + 0xc);
        }
        uVar3 = uVar3 + 0x10;
      } while (0 < in_R10W);
    }
    if ((*(byte *)(uVar6 + 4) & 2) != 0) {
      *(undefined8 **)(puVar13 + -2) = puVar14;
      puVar13[-4] = 0x407b8c0a;
      puVar13[-3] = 1;
      FUN_1407bfac1(uVar15,sVar7);
    }
    if (0 < *(int *)(puVar14 + 8)) {
      uVar6 = 0x56;
      do {
        *(undefined2 *)
         ((ulonglong)*(uint *)(puVar14 + 3) +
         (ulonglong)(uint)(int)*(short *)(*(uint *)(puVar14 + 2) + uVar6) * 2) = 0;
        uVar6 = (ulonglong)((int)uVar6 + 0x74);
      } while (0 < *(int *)(puVar14 + 8));
    }
  }
  return;
}

