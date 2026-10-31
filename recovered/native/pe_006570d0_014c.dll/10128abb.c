/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10128abb */

void FUN_10128abb(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  
  iVar3 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x2048);
  if (((*(byte *)(iVar2 + 0xe) & 1) == 0) && (*(int *)(DAT_1039d74c + 0x221c) == 0)) {
    bVar4 = FUN_10113c7f(0x205,0xffffffff);
    bVar5 = FUN_10113c7f(0x206,0xffffffff);
    bVar6 = FUN_10113d60(0x207,1,0xffffffff);
    bVar7 = FUN_10113d60(0x208,1,0xffffffff);
    if ((byte)(bVar6 ^ bVar7 | bVar5 ^ bVar4) == 1) {
      if (*(int *)(iVar3 + 0x2050) != 0) {
        FUN_10128a26();
      }
      if (((*(byte *)(iVar2 + 0x1a0) & 1) == 0) && (*(char *)(iVar2 + 0x1a6) == '\x01')) {
        cVar8 = FUN_10113d60(0x205,1,0xffffffff);
        if (cVar8 == '\0') {
          cVar8 = FUN_10113d60(0x206,1,0xffffffff);
          if (cVar8 == '\0') {
            if (bVar6 == 0) {
              if (bVar7 == 0) {
                return;
              }
              fVar11 = *(float *)(iVar2 + 0xd0);
            }
            else {
              fVar11 = 0.0;
            }
          }
          else {
            fVar11 = (*(float *)(iVar2 + 600) - *(float *)(iVar2 + 0x250)) + *(float *)(iVar2 + 200)
            ;
          }
        }
        else {
          fVar11 = *(float *)(iVar2 + 200) - (*(float *)(iVar2 + 600) - *(float *)(iVar2 + 0x250));
        }
        FUN_10115932(iVar2,fVar11);
      }
      else {
        iVar10 = *(int *)(iVar3 + 0x2050) * 0x10;
        FUN_100fdbca(0,(*(float *)(iVar2 + 0x3d8 + iVar10) - *(float *)(iVar2 + 0x3d0 + iVar10)) +
                       ((*(float *)(iVar2 + 600) - *(float *)(iVar2 + 0x250)) -
                       *(float *)(iVar2 + 0x2e0)));
        cVar8 = FUN_10113d4b(0x205,1);
        if (cVar8 == '\0') {
          cVar8 = FUN_10113d4b(0x206,1);
          if (cVar8 == '\0') {
            iVar10 = iVar2 + iVar10;
            pfVar9 = (float *)(iVar10 + 0x3cc);
            if (bVar6 == 0) {
              if (bVar7 == 0) {
                return;
              }
              uVar1 = *(undefined4 *)(iVar2 + 0x6c);
              *(undefined4 *)(iVar10 + 0x3d8) = uVar1;
              *(undefined4 *)(iVar10 + 0x3d0) = uVar1;
              if (*(float *)(iVar10 + 0x3d4) <= *pfVar9 && *pfVar9 != *(float *)(iVar10 + 0x3d4)) {
                *(undefined4 *)(iVar10 + 0x3d4) = 0;
                *pfVar9 = 0.0;
              }
              *(undefined4 *)(iVar3 + 0x20e8) = 2;
            }
            else {
              *(undefined4 *)(iVar10 + 0x3d8) = 0;
              *(undefined4 *)(iVar10 + 0x3d0) = 0;
              if (*(float *)(iVar10 + 0x3d4) <= *pfVar9 && *pfVar9 != *(float *)(iVar10 + 0x3d4)) {
                *(undefined4 *)(iVar10 + 0x3d4) = 0;
                *pfVar9 = 0.0;
              }
              *(undefined4 *)(iVar3 + 0x20e8) = 3;
            }
            *(undefined4 *)(iVar3 + 0x20dc) = 0x50;
          }
          else {
            *(undefined4 *)(iVar3 + 0x20e8) = 2;
            *(undefined4 *)(iVar3 + 0x20f0) = 3;
            *(undefined4 *)(iVar3 + 0x20dc) = 0x810;
          }
        }
        else {
          *(undefined4 *)(iVar3 + 0x20e8) = 3;
          *(undefined4 *)(iVar3 + 0x20f0) = 2;
          *(undefined4 *)(iVar3 + 0x20dc) = 0x810;
        }
      }
    }
  }
  return;
}

