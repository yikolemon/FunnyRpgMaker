/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10164d3d */

void FUN_10164d3d(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  bool bVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  
  *(undefined1 *)((int)param_1 + 0x1f5) = 0;
  iVar8 = DAT_1039d74c;
  if ((*(byte *)(param_1 + 1) & 0x10) == 0) {
    iVar2 = FUN_10167bbb(param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_10167ae2(*param_1,param_1[0x10]);
      param_1[0xe] = iVar2 - *(int *)(iVar8 + 0x26fc);
    }
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_1 + 0x10);
    puVar3 = (uint *)param_1[4];
    *(undefined4 *)(iVar2 + 4) = 0;
    uVar10 = 0;
    if (0 < (int)param_1[0x10]) {
      pfVar9 = (float *)(iVar2 + 0x14);
      bVar5 = false;
      iVar8 = 0;
      do {
        if ((*puVar3 & 8) == 0) {
          pfVar6 = (float *)(puVar3 + 4);
        }
        else {
          pfVar6 = (float *)(puVar3 + 7);
        }
        fVar1 = *pfVar6;
        *pfVar9 = fVar1;
        *(short *)(pfVar9 + 2) = (short)iVar8;
        *(undefined2 *)((int)pfVar9 + 10) = *(undefined2 *)((int)puVar3 + 0x56);
        *(undefined2 *)(pfVar9 + 3) = *(undefined2 *)((int)puVar3 + 0x5e);
        uVar7 = (CONCAT11(*(byte *)((int)puVar3 + 0x71),*(undefined1 *)((int)pfVar9 + 0xe)) & 0x3ff)
                & 0xfffffffc;
        bVar4 = (byte)uVar7 | (byte)(uVar7 >> 8);
        *(byte *)((int)pfVar9 + 0xe) = bVar4;
        uVar7 = CONCAT11(*(byte *)((int)puVar3 + 0x67) << 2,bVar4) & 0xfffffff3;
        bVar4 = (byte)uVar7 | (byte)(uVar7 >> 8);
        *(byte *)((int)pfVar9 + 0xe) = bVar4;
        uVar7 = (CONCAT11((byte)*puVar3 * '\x02',bVar4) & 0x10ff) & 0xffffffe7;
        *(byte *)((int)pfVar9 + 0xe) = (byte)uVar7 | (byte)(uVar7 >> 8);
        uVar7 = *puVar3;
        if ((fVar1 != (float)puVar3[8]) || (NAN(fVar1) || NAN((float)puVar3[8]))) {
          *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 1;
        }
        if (iVar8 != *(short *)((int)puVar3 + 0x56)) {
          *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 2;
        }
        if (*(short *)((int)puVar3 + 0x5e) != -1) {
          *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 8;
        }
        if ((*puVar3 >> 1 & 1) == (uint)*(byte *)((int)puVar3 + 0x67)) {
          *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 4;
        }
        bVar5 = (bool)(bVar5 | (uVar7 & 8) == 0);
        iVar8 = iVar8 + 1;
        puVar3 = puVar3 + 0x1d;
        pfVar9 = pfVar9 + 4;
      } while (iVar8 < (int)param_1[0x10]);
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & param_1[1];
      if (bVar5) {
        uVar10 = param_1[0x2e];
      }
    }
    *(undefined4 *)(iVar2 + 8) = uVar10;
    FUN_10118556();
    return;
  }
  return;
}

