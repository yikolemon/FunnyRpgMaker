/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079ad14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14079ad14(ulonglong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  
  puVar14 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x40);
  bVar13 = (byte)puVar14[0x18];
  uVar5 = (ulonglong)_DAT_4489e03110388d00 & 0xffffffffffffff3c;
  uVar12 = *(uint *)(ulonglong)puVar14[0x15];
  puVar14[1] = (uint)param_2;
  uVar2 = *(uint *)(param_2 + 8);
  uVar15 = uVar12;
  if (uVar12 < 0x20) {
    *puVar14 = (int)param_1;
    bVar16 = uVar12 == 10;
    bVar11 = (byte)(uVar2 >> 0x1a) & 1;
    uVar6 = CONCAT71((int7)(CONCAT62((int6)(uVar5 >> 0x10),CONCAT11(bVar11 & bVar16,bVar16)) >> 8),
                     bVar16 & bVar13);
    if (((bVar16 & bVar13) == 1) && (uVar15 = 10, (uVar2 >> 0x1a & 1) == 0)) {
      uVar15 = puVar14[0x15];
      *(undefined4 *)(ulonglong)uVar15 = 0x20;
      uVar6 = (ulonglong)CONCAT22((short)(uVar15 >> 0x10),0x100);
      uVar15 = 0x20;
    }
    uVar5 = CONCAT71((int7)(uVar6 >> 8),uVar15 == 9);
    if (((uVar15 == 9 & (byte)((uVar2 & 0x20) >> 5)) != 0) || ((char)(uVar6 >> 8) != '\0')) {
      param_1 = (ulonglong)*puVar14;
      bVar13 = (byte)puVar14[0x18];
      goto LAB_14079adb2;
    }
    param_1 = (ulonglong)*puVar14;
    bVar13 = (byte)puVar14[0x18];
    if ((uVar15 == 10 & bVar11) != 0) goto LAB_14079adb2;
  }
  else {
LAB_14079adb2:
    if (bVar13 == 0) {
      uVar5 = 0;
      uVar7 = 0;
      if (((0xffff < uVar15) || (uVar15 == 0x7f)) || (uVar15 - 0xe000 < 0x1900)) goto LAB_14079af4e;
    }
    else if (0xffff < uVar15) goto LAB_14079af4c;
    puVar8 = (uint *)CONCAT71((int7)(uVar5 >> 8),uVar12 < 0x20);
    if ((uVar2 & 0x1000001f) != 0 && uVar12 >= 0x20) {
      uVar1 = *(ushort *)(param_1 + 0xc1c);
      uVar12 = uVar15;
      if ((uVar15 & 0xfffd) == 0x2c) {
        uVar12 = (uint)uVar1;
      }
      if ((uVar2 & 0x10000005) == 0) {
        uVar12 = uVar15;
      }
      uVar10 = uVar12 - 0xfee0;
      if (0x5d < uVar12 - 0xff01) {
        uVar10 = uVar12;
      }
      if ((uVar2 & 7) == 0) {
        uVar10 = uVar12;
      }
      uVar12 = uVar10 - 0x30;
      if ((((uVar2 & 1) != 0) && (9 < uVar12)) && (uVar10 != uVar1)) {
        uVar7 = 0;
        if ((5 < uVar10 - 0x2a) || ((0x2bU >> (uVar10 - 0x2a & 0x1f) & 1) == 0)) goto LAB_14079af4e;
      }
      if ((((((uVar2 & 4) != 0) && ((9 < uVar12 && (uVar10 != uVar1)))) &&
           ((0x1b < uVar10 - 0x2a || ((0x800002bU >> (uVar10 - 0x2a & 0x1f) & 1) == 0)))) &&
          (uVar10 != 0x65)) ||
         (((((uVar2 & 2) != 0 && (9 < uVar12)) && (5 < uVar10 - 0x61)) && (5 < uVar10 - 0x41))))
      goto LAB_14079af4c;
      uVar15 = uVar10 - 0x20;
      if (0x19 < uVar10 - 0x61) {
        uVar15 = uVar10;
      }
      if ((uVar2 & 8) == 0) {
        uVar15 = uVar10;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar7 = 0;
        if (((uVar15 == 9) || (uVar7 = 0, uVar15 == 0x20)) || (uVar15 == 0x3000))
        goto LAB_14079af4e;
      }
      puVar8 = (uint *)(ulonglong)puVar14[0x15];
      *puVar8 = uVar15;
    }
    uVar12 = _DAT_150b38631;
    if ((uVar2 >> 0x15 & 1) == 0) {
LAB_14079aed9:
      uVar7 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
      goto LAB_14079af4e;
    }
    uVar5 = (ulonglong)_DAT_150b38631;
    puVar8 = puVar14 + 2;
    puVar14[-2] = 0x4079aef0;
    puVar14[-1] = 1;
    FUN_14079a556(puVar8);
    *puVar8 = uVar12;
    uVar12 = *(uint *)((ulonglong)puVar14[1] + 0xc);
    puVar14[6] = uVar12;
    puVar14[4] = uVar2;
    puVar14[3] = 0x200000;
    *(short *)(puVar14 + 8) = (short)uVar15;
    if (*(uint *)(uVar5 + 0x1528) == uVar12) {
      uVar3 = *(undefined1 *)(uVar5 + 0x1534);
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)((longlong)puVar14 + 0x22) = uVar3;
    puVar9 = (uint *)(ulonglong)*(uint *)((ulonglong)puVar14[1] + 4);
    puVar14[0xc] = *puVar9;
    puVar14[0xd] = puVar9[1];
    puVar14[0xe] = puVar9[2];
    puVar14[5] = puVar14[0x17];
    *(uint **)(puVar14 + -2) = puVar8;
    puVar14[-4] = 0x4079af45;
    puVar14[-3] = 1;
    iVar4 = (**(code **)(puVar14 + 0x15))();
    puVar14 = (uint *)(ulonglong)((int)(puVar14 + -2) + 4);
    if (iVar4 == 0) {
      uVar1 = *(ushort *)((longlong)puVar14 + 0x20);
      puVar8 = (uint *)(ulonglong)uVar1;
      *(uint *)(ulonglong)*(uint *)((longlong)puVar14 + 0x54) = (uint)uVar1;
      if (uVar1 != 0) goto LAB_14079aed9;
    }
  }
LAB_14079af4c:
  uVar7 = 0;
LAB_14079af4e:
  if (_DAT_150b23c5a != (*(uint *)((longlong)puVar14 + 0x3c) ^ (uint)puVar14)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)puVar14 + -8) = FUN_14079afab;
    FUN_1408802b0(*(uint *)((longlong)puVar14 + 0x3c) ^ (uint)puVar14);
  }
  return uVar7;
}

