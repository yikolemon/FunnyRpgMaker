/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a7a50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400a7a50(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  
  lVar3 = DAT_140f2a910;
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x2200);
  uVar11 = 0;
  if (((*(byte *)(lVar2 + 0x16) & 1) == 0) &&
     (uVar11 = 0, *(longlong *)(DAT_140f2a910 + 0x23e8) == 0)) {
    bVar4 = FUN_140091d9a(0x205,0xffffffff);
    bVar5 = FUN_140091d9a(0x206,0xffffffff);
    bVar6 = FUN_140091ea2(0x207,1,0xffffffff);
    bVar7 = FUN_140091ea2(0x208,1,0xffffffff);
    uVar11 = 0;
    if ((byte)(bVar6 ^ bVar7 | bVar5 ^ bVar4) == 1) {
      if (*(int *)(lVar3 + 0x220c) != 0) {
        FUN_1400a79ac(0);
      }
      if (((*(byte *)(lVar2 + 0x1b4) & 1) == 0) && (*(char *)(lVar2 + 0x1ba) == '\x01')) {
        cVar8 = FUN_140091ea2(0x205,1,0xffffffff);
        if (cVar8 == '\0') {
          cVar8 = FUN_140091ea2(0x206,1,0xffffffff);
          if (cVar8 == '\0') {
            if (bVar6 == 0) {
              if (bVar7 == 0) {
                return 0;
              }
              fVar12 = *(float *)(lVar2 + 0xe0);
            }
            else {
              fVar12 = 0.0;
            }
          }
          else {
            fVar12 = (*(float *)(lVar2 + 0x284) - *(float *)(lVar2 + 0x27c)) +
                     *(float *)(lVar2 + 0xd8);
          }
        }
        else {
          fVar12 = *(float *)(lVar2 + 0xd8) -
                   (*(float *)(lVar2 + 0x284) - *(float *)(lVar2 + 0x27c));
        }
        uVar11 = 0;
        FUN_140093a2a(lVar2,fVar12);
      }
      else {
        lVar10 = (longlong)*(int *)(lVar3 + 0x220c) * 0x10;
        uVar11 = FUN_14007b71f(0,(*(float *)(lVar2 + 0x464 + lVar10) -
                                 *(float *)(lVar2 + 0x45c + lVar10)) +
                                 ((*(float *)(lVar2 + 0x284) - *(float *)(lVar2 + 0x27c)) -
                                 *(float *)(lVar2 + 0x318)));
        cVar8 = FUN_140091e97(0x205,1);
        if (cVar8 == '\0') {
          cVar8 = FUN_140091e97(0x206,1);
          if (cVar8 == '\0') {
            lVar10 = lVar2 + lVar10;
            pfVar9 = (float *)(lVar10 + 0x458);
            if (bVar6 != 0) {
              *(undefined4 *)(lVar10 + 0x464) = 0;
              *(undefined4 *)(lVar10 + 0x45c) = 0;
              if (*(float *)(lVar10 + 0x460) <= *pfVar9 && *pfVar9 != *(float *)(lVar10 + 0x460)) {
                *(undefined4 *)(lVar10 + 0x460) = 0;
                *pfVar9 = 0.0;
              }
              *(undefined4 *)(lVar3 + 0x22b0) = 3;
              *(undefined4 *)(lVar3 + 0x22a4) = 0x50;
              return 0;
            }
            if (bVar7 == 0) {
              return 0;
            }
            uVar1 = *(undefined4 *)(lVar2 + 0x7c);
            *(undefined4 *)(lVar10 + 0x464) = uVar1;
            *(undefined4 *)(lVar10 + 0x45c) = uVar1;
            if (*(float *)(lVar10 + 0x460) <= *pfVar9 && *pfVar9 != *(float *)(lVar10 + 0x460)) {
              *(undefined4 *)(lVar10 + 0x460) = 0;
              *pfVar9 = 0.0;
            }
            *(undefined4 *)(lVar3 + 0x22b0) = 2;
            *(undefined4 *)(lVar3 + 0x22a4) = 0x50;
            return 0;
          }
          *(undefined4 *)(lVar3 + 0x22b0) = 2;
          *(undefined4 *)(lVar3 + 0x22b8) = 3;
        }
        else {
          uVar11 = CONCAT44((uint)((ulonglong)uVar11 >> 0x20) ^ _UNK_1401c8594,
                            (uint)uVar11 ^ _DAT_1401c8590);
          *(undefined4 *)(lVar3 + 0x22b0) = 3;
          *(undefined4 *)(lVar3 + 0x22b8) = 2;
        }
        *(undefined4 *)(lVar3 + 0x22a4) = 0x810;
      }
    }
  }
  return uVar11;
}

