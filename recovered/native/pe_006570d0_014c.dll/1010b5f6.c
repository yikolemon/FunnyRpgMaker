/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010b5f6 */

void FUN_1010b5f6(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar4 = DAT_1039d74c;
  iVar12 = *(int *)(DAT_1039d74c + 8);
  if (iVar12 != *(int *)(DAT_1039d74c + 4)) {
    FUN_1010a6a2();
    iVar12 = *(int *)(iVar4 + 4);
  }
  if (*(int *)(iVar4 + 0x10) != iVar12) {
    *(int *)(iVar4 + 0x10) = iVar12;
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    FUN_10101a75(iVar4,4);
    iVar12 = *(int *)(iVar4 + 0x1fe0);
    if (iVar12 != 0) {
      iVar13 = *(int *)(iVar4 + 0x1fe8);
      iVar11 = 0;
      do {
        iVar2 = *(int *)(iVar13 + iVar11);
        FUN_1010b8d5();
        if (*(int *)(iVar2 + 0x90) != 0) {
          if ((*(float *)(iVar2 + 0x88) == (float)*(double *)(iVar4 + 0x18)) &&
             (!NAN(*(float *)(iVar2 + 0x88)) && !NAN((float)*(double *)(iVar4 + 0x18)))) {
            uVar7 = FUN_10103366(iVar2);
            FUN_1018df9f(iVar2 + 0x98,*(undefined4 *)(iVar2 + 0xd4),uVar7);
          }
        }
        iVar11 = iVar11 + 4;
      } while (iVar12 << 2 != iVar11);
    }
    FUN_1010ba24();
    iVar12 = *(int *)(iVar4 + 0x221c);
    iVar13 = 0;
    if (iVar12 == 0) {
      iVar12 = 0;
    }
    else {
      if ((*(byte *)(iVar12 + 0xd) & 0x20) == 0) {
        iVar13 = *(int *)(iVar12 + 0x3b0);
      }
      iVar12 = *(int *)(iVar4 + 0x2224);
    }
    iVar11 = *(int *)(iVar4 + 0x1484);
    if (iVar11 != 0) {
      iVar2 = *(int *)(iVar4 + 0x148c);
      iVar10 = 0;
      do {
        iVar3 = *(int *)(iVar2 + iVar10);
        cVar6 = FUN_1010a68d();
        if ((cVar6 != '\0') &&
           ((iVar3 != iVar12 && iVar3 != iVar13) && (*(uint *)(iVar3 + 0xc) & 0x1000000) == 0)) {
          FUN_101263dd();
        }
        iVar10 = iVar10 + 4;
      } while (iVar11 << 2 != iVar10);
    }
    bVar5 = true;
    do {
      bVar9 = bVar5;
      if ((iVar13 != 0) && (cVar6 = FUN_1010a68d(), cVar6 != '\0')) {
        FUN_101263dd();
      }
      iVar13 = iVar12;
      bVar5 = false;
    } while (bVar9);
    if ((*(char *)(iVar4 + 0x78) != '\0') && (*(int *)(iVar4 + 0x2460) != -1)) {
      FUN_100fe427(*(undefined4 *)(iVar4 + 0xe4),*(undefined4 *)(iVar4 + 0xe8),
                   *(undefined4 *)(iVar4 + 0xdf0),*(int *)(iVar4 + 0x2460),0xffffffff,0xff000000,
                   0x30000000);
    }
    *(undefined4 *)(iVar4 + 0xcc) = 0;
    *(undefined4 *)(iVar4 + 200) = 0;
    if (*(int *)(iVar4 + 0x1fe0) != 0) {
      piVar8 = *(int **)(iVar4 + 0x1fe8);
      piVar1 = piVar8 + *(int *)(iVar4 + 0x1fe0);
      do {
        iVar12 = *piVar8;
        FUN_1010bdf3();
        if (*(int *)(iVar12 + 0x94) != 0) {
          if ((*(float *)(iVar12 + 0x8c) == (float)*(double *)(iVar4 + 0x18)) &&
             (!NAN(*(float *)(iVar12 + 0x8c)) && !NAN((float)*(double *)(iVar4 + 0x18)))) {
            uVar7 = FUN_100fe900(iVar12);
            FUN_1018df9f(iVar12 + 0x98,*(undefined4 *)(iVar12 + 0xd4),uVar7);
          }
        }
        iVar13 = *(int *)(iVar12 + 0xa8);
        if (iVar13 != 0) {
          iVar11 = 0;
          do {
            FUN_10187e6e();
            iVar11 = iVar11 + 4;
          } while (iVar13 << 2 != iVar11);
        }
        *(int *)(iVar4 + 200) = *(int *)(iVar4 + 200) + *(int *)(iVar12 + 0xa4);
        *(int *)(iVar4 + 0xcc) = *(int *)(iVar4 + 0xcc) + *(int *)(iVar12 + 0xa0);
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar1);
    }
    if (((*(byte *)(iVar4 + 0x34) & 0x10) != 0) && (iVar12 = *(int *)(iVar4 + 0x1214), iVar12 != 0))
    {
      iVar13 = *(int *)(iVar4 + 0x121c);
      iVar11 = 0;
      do {
        FUN_10192847(*(undefined4 *)(iVar13 + iVar11));
        iVar11 = iVar11 + 4;
      } while (iVar12 << 2 != iVar11);
    }
    FUN_10101a75(iVar4,5);
  }
  return;
}

