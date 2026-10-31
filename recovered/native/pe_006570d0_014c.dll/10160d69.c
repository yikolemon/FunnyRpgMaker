/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10160d69 */

void FUN_10160d69(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x4c) == 0) {
    sVar2 = *(short *)(param_1 + 0x1c6);
    if (sVar2 == -1) {
      sVar2 = -1;
    }
    else {
      fVar1 = *(float *)(param_1 + 0xb0);
      if ((fVar1 != DAT_102b89b4) || (NAN(fVar1) || NAN(DAT_102b89b4))) {
        FUN_10160ea4((int)sVar2,fVar1);
        sVar2 = *(short *)(param_1 + 0x1c6);
      }
    }
    *(short *)(param_1 + 0x1c8) = sVar2;
    *(undefined4 *)(param_1 + 0xb0) = 0x7f7fffff;
    *(undefined2 *)(param_1 + 0x1c6) = 0xffff;
    iVar3 = (int)*(short *)(param_1 + 0x1c4);
    if (iVar3 != -1) {
      FUN_10160ea4(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14 + iVar3 * 0x74));
      *(undefined2 *)(param_1 + 0x1c4) = 0xffff;
    }
    if (*(short *)(param_1 + 0x4c) == 0) {
      *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(param_1 + 0x1ca);
      *(undefined2 *)(param_1 + 0x1ca) = 0xffff;
      if ((*(short *)(param_1 + 0x1ce) != -1) && (*(short *)(param_1 + 0x1d0) != -1)) {
        FUN_10160ffa(param_1,(int)*(short *)(param_1 + 0x1ce),(int)*(short *)(param_1 + 0x1d0));
        *(undefined2 *)(param_1 + 0x1d0) = 0xffff;
      }
      if (*(int *)(DAT_1039d74c + 0x1528) == 0) {
        *(undefined2 *)(param_1 + 0x1ce) = 0xffff;
      }
    }
  }
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    if (0 < *(int *)(param_1 + 0x40)) {
      iVar3 = 0;
      iVar4 = 0x2b;
      do {
        *(short *)(*(int *)(param_1 + 0x10) + iVar4 * 2) = (short)iVar3;
        *(short *)(*(int *)(param_1 + 0x18) + iVar3 * 2) = (short)iVar3;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x3a;
      } while (iVar3 < *(int *)(param_1 + 0x40));
    }
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    *(undefined1 *)(param_1 + 0x1f5) = 1;
  }
  return;
}

