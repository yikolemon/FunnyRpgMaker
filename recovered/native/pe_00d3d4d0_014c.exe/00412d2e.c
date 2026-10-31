/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00412d2e */

int * __fastcall FUN_00412d2e(int *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined4 uVar10;
  ushort *puVar11;
  undefined1 uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  byte local_1e;
  
  uVar7 = FUN_00412f50(&DAT_004a9b98,param_1[3]);
  uVar8 = FUN_00412fb4(&DAT_004abc14,param_1[3]);
  bVar2 = (byte)uVar8;
  cVar3 = FUN_00413018(&DAT_004ac72c,param_1[3]);
  puVar9 = (ushort *)param_1[1];
  puVar11 = (ushort *)param_1[2];
  *param_1 = (int)puVar11;
  if (puVar11 != puVar9) {
    bVar1 = 0;
    local_1e = (byte)uVar7;
    do {
      uVar15 = FUN_00410f09(puVar11,puVar9,(uint *)(param_1 + 3));
      param_1[2] = (int)uVar15;
      if (*param_1 == param_1[1]) {
        return param_1;
      }
      uVar7 = FUN_00412f50(&DAT_004a9b98,param_1[3]);
      bVar4 = (byte)uVar7;
      cVar5 = FUN_00413018(&DAT_004ac72c,param_1[3]);
      uVar10 = FUN_0041306c(param_1 + 4,bVar2);
      uVar6 = (undefined1)uVar10;
      if (*(char *)((int)param_1 + 0x11) == '\0') {
        bVar2 = 0;
        if (cVar3 == '\0') {
          uVar12 = 1;
          goto LAB_00412e21;
        }
LAB_00412e28:
        bVar1 = bVar1 + 1;
        bVar14 = local_1e == 8;
        if (!bVar14) {
          bVar1 = 0;
        }
        if (bVar4 != 4 || local_1e != 0) {
          if ((local_1e < 5) && ((0x13U >> (local_1e & 0x1f) & 1) != 0)) {
            return param_1;
          }
          goto LAB_00412e68;
        }
      }
      else {
        if (local_1e != 2) {
          if (local_1e == 0xc) {
            bVar2 = 1;
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            bVar2 = 0;
          }
LAB_00412e21:
          *(undefined1 *)((int)param_1 + 0x11) = uVar12;
          goto LAB_00412e28;
        }
        bVar2 = 0;
        bVar14 = false;
        bVar1 = 0;
LAB_00412e68:
        uVar13 = (uint)bVar4;
        if ((bVar4 < 5) && ((0x13U >> (uVar13 & 0x1f) & 1) != 0)) {
          return param_1;
        }
        if ((local_1e == 0xb) || (local_1e == 5)) {
          uVar7 = CONCAT11(bVar4,uVar6) & 0xfeff;
          uVar6 = (undefined1)uVar7;
          if ((char)(uVar7 >> 8) != '\n') goto LAB_00412ebf;
        }
        else if (((local_1e != 3) || (0xb < bVar4)) || ((0x868U >> (uVar13 & 0x1f) & 1) == 0)) {
LAB_00412ebf:
          uVar7 = CONCAT11(local_1e - 6,uVar6) & 0xfbff;
          if (((bVar4 != 10 || (char)(uVar7 >> 8) != '\0') &&
              ((0xc < bVar4 || ((0x1204U >> (uVar13 & 0x1f) & 1) == 0)))) &&
             (!(bool)(cVar5 == '\0' & bVar2) && (local_1e != 7 && (char)uVar7 == '\0'))) {
            if (!bVar14 || bVar4 != 8) {
              return param_1;
            }
            if (!(bool)(bVar1 & 1)) {
              return param_1;
            }
          }
        }
      }
      uVar7 = FUN_00412fb4(&DAT_004abc14,param_1[3]);
      bVar2 = (byte)uVar7;
      puVar9 = (ushort *)param_1[1];
      puVar11 = (ushort *)param_1[2];
      *param_1 = (int)puVar11;
      local_1e = bVar4;
      cVar3 = cVar5;
    } while (puVar11 != puVar9);
  }
  return param_1;
}

