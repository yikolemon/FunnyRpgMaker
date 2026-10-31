/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140011d4e */

longlong * FUN_140011d4e(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  bool bVar13;
  
  uVar5 = FUN_140011f3a((uint *)&DAT_1400b7f70,*(uint *)(param_1 + 3));
  uVar6 = FUN_140011fa6((uint *)&DAT_1400b9fec,*(uint *)(param_1 + 3));
  cVar3 = FUN_140012012((uint *)&DAT_1400bab04,*(uint *)(param_1 + 3));
  FUN_14001206a(param_1);
  if (*param_1 != param_1[1]) {
    bVar1 = 0;
    do {
      uVar7 = FUN_140011f3a((uint *)&DAT_1400b7f70,*(uint *)(param_1 + 3));
      cVar4 = FUN_140012012((uint *)&DAT_1400bab04,*(uint *)(param_1 + 3));
      uVar8 = FUN_1400120d6((byte *)(param_1 + 4),(byte)uVar6);
      bVar12 = (byte)uVar5;
      bVar10 = (byte)uVar7;
      if (*(char *)((longlong)param_1 + 0x21) == '\0') {
        bVar2 = 0;
        if (cVar3 == '\0') {
          uVar9 = 1;
          bVar2 = 0;
          goto LAB_140011e11;
        }
LAB_140011e14:
        bVar1 = bVar1 + 1;
        bVar13 = bVar12 == 8;
        if (!bVar13) {
          bVar1 = 0;
        }
        if (bVar10 != 4 || bVar12 != 0) {
          if ((bVar12 < 5) && ((0x13U >> (bVar12 & 0x1f) & 1) != 0)) {
            return param_1;
          }
          goto LAB_140011e51;
        }
      }
      else {
        bVar2 = 0;
        if (bVar12 != 2) {
          if (bVar12 == 0xc) {
            uVar9 = 0;
            bVar2 = 1;
          }
          else {
            uVar9 = 0;
            bVar2 = 0;
          }
LAB_140011e11:
          *(undefined1 *)((longlong)param_1 + 0x21) = uVar9;
          goto LAB_140011e14;
        }
        bVar13 = false;
        bVar1 = 0;
LAB_140011e51:
        uVar11 = (uint)bVar10;
        if ((bVar10 < 5) && ((0x13U >> (uVar11 & 0x1f) & 1) != 0)) {
          return param_1;
        }
        if ((bVar12 == 0xb) || (bVar12 == 5)) {
          if ((bVar10 & 0xfe) != 10) goto LAB_140011ea2;
        }
        else if (((bVar12 != 3) || (0xb < bVar10)) || ((0x868U >> (uVar11 & 0x1f) & 1) == 0)) {
LAB_140011ea2:
          if (((bVar10 != 10 || (bVar12 - 6 & 0xfb) != 0) &&
              ((0xc < bVar10 || ((0x1204U >> (uVar11 & 0x1f) & 1) == 0)))) &&
             (!(bool)(cVar4 == '\0' & bVar2) && (bVar12 != 7 && (char)uVar8 == '\0'))) {
            if (!bVar13 || bVar10 != 8) {
              return param_1;
            }
            if (!(bool)(bVar1 & 1)) {
              return param_1;
            }
          }
        }
      }
      uVar6 = FUN_140011fa6((uint *)&DAT_1400b9fec,*(uint *)(param_1 + 3));
      FUN_14001206a(param_1);
      uVar5 = uVar7;
      cVar3 = cVar4;
    } while (*param_1 != param_1[1]);
  }
  return param_1;
}

