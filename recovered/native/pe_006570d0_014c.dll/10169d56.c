/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10169d56 */

void FUN_10169d56(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  
  iVar4 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar2 = *(int *)(iVar4 + 0x14cc);
  if ((*(char *)(iVar2 + 0xfe) == '\0') && (iVar3 = *(int *)(iVar2 + 0x1e8), iVar3 != 0)) {
    if (*(int *)(iVar3 + 0x10) == 1) {
      *(float *)(iVar2 + 0x144) =
           (float)(int)(*(float *)(iVar2 + 0x50) + *(float *)(iVar2 + 0x188) +
                       *(float *)(iVar2 + 0x18c));
    }
    else {
      iVar5 = *(int *)(iVar3 + 0xc) + 1;
      iVar6 = 0;
      if (iVar5 != *(int *)(iVar3 + 0x10)) {
        iVar6 = iVar5;
      }
      *(int *)(iVar3 + 0xc) = iVar6;
      FUN_101154f4();
      FUN_101655b6(iVar2,*(int *)(iVar3 + 100) + *(int *)(iVar3 + 0xc) * 0x1c + 0xc);
      FUN_1018de6c(*(undefined4 *)(iVar2 + 0x2e8),*(int *)(iVar3 + 0xc) + 1);
      fVar1 = *(float *)(iVar4 + 0xd1c);
      fVar7 = (float10)FUN_100fdbca(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar2 + 0x148));
      *(float *)(iVar3 + 0x20) = (float)fVar7;
      if (*(int *)(iVar3 + 0xc) < 1) {
        fVar7 = (float10)FUN_100fdbca(fVar1 - *(float *)(iVar2 + 0x80),0);
        *(float *)(iVar2 + 0x18c) = (float)fVar7;
        *(undefined1 *)(iVar2 + 0x184) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x20);
        fVar9 = *(float *)(iVar2 + 0x188);
        fVar10 = *(float *)(iVar2 + 0x18c);
      }
      else {
        fVar7 = (float10)FUN_1016905b(*(int *)(iVar3 + 0xc));
        fVar9 = *(float *)(iVar2 + 0x188);
        fVar10 = ((float)fVar7 - fVar9) + fVar1;
        *(float *)(iVar2 + 0x18c) = fVar10;
      }
      *(float *)(iVar2 + 0x144) = (float)(int)(fVar9 + *(float *)(iVar2 + 0x50) + fVar10);
      *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar2 + 0x16c) = 0;
      *(undefined4 *)(iVar2 + 0x170) = 0;
      *(undefined4 *)(iVar2 + 0x17c) = 0;
      fVar7 = (float10)FUN_1016905b(*(undefined4 *)(iVar3 + 0xc));
      fVar8 = (float10)FUN_1016905b(*(int *)(iVar3 + 0xc) + 1);
      FUN_1011520a(((float)fVar8 - (float)fVar7) * DAT_102b8c94);
      *(float *)(iVar2 + 0x274) = ((float)fVar8 + *(float *)(iVar2 + 0x50)) - fVar1;
    }
  }
  return;
}

