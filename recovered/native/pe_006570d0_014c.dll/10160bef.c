/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10160bef */

void FUN_10160bef(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar7 = DAT_1039d74c;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  if ((*(byte *)(param_1 + 1) & 0x10) == 0) {
    if (param_1[0xe] == -1) {
      iVar2 = FUN_10167b81(*param_1);
      if (iVar2 == 0) {
        return;
      }
      iVar9 = param_1[0x10];
      if (iVar9 != *(short *)(iVar2 + 0xc)) {
        *(undefined1 *)((int)param_1 + 0x1f5) = 1;
      }
      param_1[0xe] = iVar2 - *(int *)(iVar7 + 0x26fc);
    }
    else {
      iVar2 = FUN_10167bbb(param_1);
      iVar9 = param_1[0x10];
    }
    param_1[0xd] = *(undefined4 *)(iVar2 + 4);
    param_1[0x2e] = *(undefined4 *)(iVar2 + 8);
    if (0 < iVar9) {
      iVar7 = 0;
      iVar9 = 0;
      do {
        iVar1 = param_1[4];
        FUN_10164fdd(0xffffffff);
        *(undefined1 *)(iVar1 + 0x6f + iVar7) = 0;
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 0x74;
      } while (iVar9 < (int)param_1[0x10]);
    }
    sVar4 = *(short *)(iVar2 + 0xc);
    if (0 < sVar4) {
      pbVar3 = (byte *)(iVar2 + 0x22);
      iVar7 = 0;
      do {
        iVar9 = (int)*(short *)(pbVar3 + -6);
        if ((-1 < iVar9) && (iVar9 < (int)param_1[0x10])) {
          iVar9 = iVar9 * 0x74 + param_1[4];
          if ((*(byte *)(iVar2 + 4) & 1) != 0) {
            puVar10 = (undefined4 *)(iVar9 + 0x1c);
            if ((*pbVar3 & 0x10) == 0) {
              puVar10 = (undefined4 *)(iVar9 + 0x10);
            }
            *puVar10 = *(undefined4 *)(pbVar3 + -0xe);
          }
          uVar8 = *(uint *)(iVar2 + 4);
          if ((uVar8 & 2) != 0) {
            *(undefined2 *)(iVar9 + 0x56) = *(undefined2 *)(pbVar3 + -4);
            uVar8 = *(uint *)(iVar2 + 4);
          }
          if (((uVar8 & 4) != 0) && (cVar5 = (char)(*pbVar3 << 4) >> 6, cVar5 != -1)) {
            *(bool *)(iVar9 + 0x68) = cVar5 == '\x01';
            *(bool *)(iVar9 + 0x67) = cVar5 == '\x01';
          }
          *(undefined2 *)(iVar9 + 0x5e) = *(undefined2 *)(pbVar3 + -2);
          uVar6 = CONCAT11(*(undefined1 *)(iVar9 + 0x71),*pbVar3) & 0xfc03;
          *(byte *)(iVar9 + 0x71) = (byte)(uVar6 >> 8) | (byte)uVar6;
          sVar4 = *(short *)(iVar2 + 0xc);
        }
        iVar7 = iVar7 + 1;
        pbVar3 = pbVar3 + 0x10;
      } while (iVar7 < sVar4);
    }
    if ((*(byte *)(iVar2 + 4) & 2) != 0) {
      FUN_10167bf1(param_1);
    }
    if (0 < (int)param_1[0x10]) {
      iVar7 = 0;
      iVar2 = 0x56;
      do {
        *(short *)(param_1[6] + *(short *)(param_1[4] + iVar2) * 2) = (short)iVar7;
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + 0x74;
      } while (iVar7 < (int)param_1[0x10]);
    }
  }
  return;
}

