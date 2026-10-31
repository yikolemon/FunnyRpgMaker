/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010e035 */

void FUN_14010e035(undefined4 *param_1)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  short sVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  lVar7 = DAT_140f2a910;
  *(undefined1 *)(param_1 + 0x90) = 0;
  if ((*(byte *)(param_1 + 1) & 0x10) == 0) {
    if (param_1[0x19] == -1) {
      lVar3 = FUN_140114e0a(*param_1);
      if (lVar3 == 0) {
        return;
      }
      iVar5 = param_1[0x1b];
      if (iVar5 != *(short *)(lVar3 + 0xc)) {
        *(undefined1 *)((longlong)param_1 + 0x241) = 1;
      }
      param_1[0x19] = (int)lVar3 - *(int *)(lVar7 + 0x29b0);
    }
    else {
      lVar3 = FUN_140114e42(param_1);
      iVar5 = param_1[0x1b];
    }
    param_1[0x18] = *(undefined4 *)(lVar3 + 4);
    param_1[0x39] = *(undefined4 *)(lVar3 + 8);
    if (0 < iVar5) {
      lVar7 = 0;
      lVar11 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 6);
        FUN_1401122a8(param_1,lVar2 + lVar7,0xffffffff);
        *(undefined1 *)(lVar2 + 0x6f + lVar7) = 0;
        lVar11 = lVar11 + 1;
        lVar7 = lVar7 + 0x74;
      } while (lVar11 < (int)param_1[0x1b]);
    }
    sVar6 = *(short *)(lVar3 + 0xc);
    if (0 < sVar6) {
      pbVar4 = (byte *)(lVar3 + 0x22);
      iVar5 = 0;
      do {
        sVar1 = *(short *)(pbVar4 + -6);
        if ((-1 < sVar1) && ((int)sVar1 < (int)param_1[0x1b])) {
          lVar7 = (ulonglong)(uint)(int)sVar1 * 0x74 + *(longlong *)(param_1 + 6);
          if ((*(byte *)(lVar3 + 4) & 1) != 0) {
            puVar10 = (undefined4 *)(lVar7 + 0x1c);
            if ((*pbVar4 & 0x10) == 0) {
              puVar10 = (undefined4 *)(lVar7 + 0x10);
            }
            *puVar10 = *(undefined4 *)(pbVar4 + -0xe);
          }
          uVar9 = *(uint *)(lVar3 + 4);
          if ((uVar9 & 2) != 0) {
            *(undefined2 *)(lVar7 + 0x56) = *(undefined2 *)(pbVar4 + -4);
            uVar9 = *(uint *)(lVar3 + 4);
          }
          if (((uVar9 & 4) != 0) && (cVar8 = (char)(*pbVar4 << 4) >> 6, cVar8 != -1)) {
            *(bool *)(lVar7 + 0x68) = cVar8 == '\x01';
            *(bool *)(lVar7 + 0x67) = cVar8 == '\x01';
          }
          *(undefined2 *)(lVar7 + 0x5e) = *(undefined2 *)(pbVar4 + -2);
          *(byte *)(lVar7 + 0x71) = *(byte *)(lVar7 + 0x71) & 0xfc | *pbVar4 & 3;
          sVar6 = *(short *)(lVar3 + 0xc);
        }
        iVar5 = iVar5 + 1;
        pbVar4 = pbVar4 + 0x10;
      } while (iVar5 < sVar6);
    }
    if ((*(byte *)(lVar3 + 4) & 2) != 0) {
      FUN_140114e72();
    }
    if (0 < (int)param_1[0x1b]) {
      lVar7 = 0x56;
      lVar3 = 0;
      do {
        *(short *)(*(longlong *)(param_1 + 10) +
                  (longlong)*(short *)(*(longlong *)(param_1 + 6) + lVar7) * 2) = (short)lVar3;
        lVar3 = lVar3 + 1;
        lVar7 = lVar7 + 0x74;
      } while (lVar3 < (int)param_1[0x1b]);
    }
  }
  return;
}

