/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037b4cb */

void FUN_14037b4cb(undefined4 *param_1)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  float *pfVar6;
  int iVar7;
  byte bVar8;
  float *pfVar9;
  byte bVar10;
  bool bVar11;
  undefined4 uVar12;
  
  *(undefined1 *)((longlong)param_1 + 0x241) = 0;
  lVar3 = DAT_14062a630;
  if ((*(byte *)(param_1 + 1) & 0x10) == 0) {
    lVar4 = FUN_14037e342();
    if (lVar4 == 0) {
      lVar4 = FUN_14037e25e(*param_1);
      param_1[0x19] = (int)lVar4 - *(int *)(lVar3 + 0x29b0);
    }
    *(undefined2 *)(lVar4 + 0xc) = *(undefined2 *)(param_1 + 0x1b);
    puVar5 = *(uint **)(param_1 + 6);
    *(undefined4 *)(lVar4 + 4) = 0;
    uVar12 = 0;
    if (0 < (int)param_1[0x1b]) {
      pfVar6 = (float *)(lVar4 + 0x14);
      iVar7 = 0;
      bVar10 = 0;
      do {
        bVar2 = bVar10;
        if ((*puVar5 & 8) == 0) {
          pfVar9 = (float *)(puVar5 + 4);
        }
        else {
          pfVar9 = (float *)(puVar5 + 7);
        }
        fVar1 = *pfVar9;
        *pfVar6 = fVar1;
        *(short *)(pfVar6 + 2) = (short)iVar7;
        *(undefined2 *)((longlong)pfVar6 + 10) = *(undefined2 *)((longlong)puVar5 + 0x56);
        *(undefined2 *)(pfVar6 + 3) = *(undefined2 *)((longlong)puVar5 + 0x5e);
        bVar8 = *(byte *)((longlong)puVar5 + 0x71) & 3;
        bVar10 = *(byte *)((longlong)pfVar6 + 0xe);
        *(byte *)((longlong)pfVar6 + 0xe) = bVar10 & 0xfc | bVar8;
        bVar10 = bVar10 & 0xf0 | bVar8 | *(byte *)((longlong)puVar5 + 0x67) << 2;
        *(byte *)((longlong)pfVar6 + 0xe) = bVar10;
        *(byte *)((longlong)pfVar6 + 0xe) = bVar10 & 0xe7 | (byte)*puVar5 * '\x02' & 0x10;
        bVar11 = (*puVar5 & 8) == 0;
        if ((fVar1 != (float)puVar5[8]) || (NAN(fVar1) || NAN((float)puVar5[8]))) {
          *(byte *)(lVar4 + 4) = *(byte *)(lVar4 + 4) | 1;
        }
        if (iVar7 != *(short *)((longlong)puVar5 + 0x56)) {
          *(byte *)(lVar4 + 4) = *(byte *)(lVar4 + 4) | 2;
        }
        if (*(short *)((longlong)puVar5 + 0x5e) != -1) {
          *(byte *)(lVar4 + 4) = *(byte *)(lVar4 + 4) | 8;
        }
        if ((*puVar5 >> 1 & 1) == (uint)*(byte *)((longlong)puVar5 + 0x67)) {
          *(byte *)(lVar4 + 4) = *(byte *)(lVar4 + 4) | 4;
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 0x1d;
        pfVar6 = pfVar6 + 4;
        bVar10 = bVar2 | bVar11;
      } while (iVar7 < (int)param_1[0x1b]);
      *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) & param_1[1];
      if ((bool)(bVar2 | bVar11)) {
        uVar12 = param_1[0x39];
      }
    }
    *(undefined4 *)(lVar4 + 8) = uVar12;
    FUN_14032e99f();
    return;
  }
  return;
}

