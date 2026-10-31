/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075abc2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14075abc2(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint *puVar15;
  
  uVar14 = (int)&stack0xffffffffffffffe0 - 0x14;
  puVar15 = (uint *)(ulonglong)uVar14;
  uVar2 = *(uint *)((longlong)puVar15 + 0x2c);
  uVar3 = *(uint *)((longlong)puVar15 + 0x28);
  puVar17 = (undefined8 *)(ulonglong)uVar3;
  uVar18 = (ulonglong)_DAT_150af8332;
  uVar13 = *(uint *)(uVar18 + 0x14cc);
  if ((((uVar2 != 0) && ((*(uint *)((longlong)puVar15 + 0x30) & 0x20) == 0)) &&
      (*(uint *)(uVar18 + 0x1514) == uVar2)) &&
     (*(int *)(uVar18 + 0x1518) = *(int *)(uVar18 + 0x1518) + 1, *(uint *)(uVar18 + 0x1508) == uVar2
     )) {
    uVar10 = *(undefined4 *)((ulonglong)uVar13 + 0x2e8);
    puVar1 = (undefined8 *)((longlong)puVar15 + 8);
    *(ulonglong *)((ulonglong)puVar1 & 0xffffffff) =
         CONCAT44((float)((ulonglong)puVar17[1] >> 0x20) + fRam0000000150a11cbb,
                  (float)puVar17[1] + _DAT_150a11cb7);
    *(ulonglong *)puVar15 =
         CONCAT44((float)((ulonglong)*puVar17 >> 0x20) + fRam0000000150a135d4,
                  (float)*puVar17 + _DAT_150a135d0);
    uVar7 = uRam0000000150a137fb;
    uVar6 = uRam0000000150a137f7;
    uVar5 = uRam0000000150a137f3;
    puVar15 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x2c);
    puVar15[2] = _DAT_150a137ef;
    puVar15[3] = uVar5;
    puVar15[4] = uVar6;
    puVar15[5] = uVar7;
    puVar15[1] = (uint)puVar1;
    *puVar15 = uVar14;
    puVar15[-2] = 0x4075ac50;
    puVar15[-1] = 1;
    FUN_1407e3632(uVar10);
  }
  if (*(uint *)(uVar18 + 0x14d0) == uVar13) {
    *(undefined8 *)((longlong)puVar15 + -8) = 1;
    *(ulonglong *)((longlong)puVar15 + -0x10) = (ulonglong)(uVar3 + 8);
    *(undefined8 **)((longlong)puVar15 + -0x18) = puVar17;
    *(undefined8 *)((longlong)puVar15 + -0x20) = 0x14075ac68;
    cVar8 = FUN_14075ae0a();
    puVar15 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x18) + 0xc);
    if (cVar8 != '\0') {
      uVar14 = *(uint *)((longlong)puVar15 + 0x30);
      if (((*(uint *)(uVar18 + 0x1510) == 0) || (*(uint *)(uVar18 + 0x1510) == uVar2)) ||
         (*(char *)(uVar18 + 0x1524) == '\x01')) {
        if (((*(uint *)(uVar18 + 0x1528) == 0) || (*(uint *)(uVar18 + 0x1528) == uVar2)) ||
           ((*(char *)(uVar18 + 0x1535) != '\0' || (*(char *)(uVar18 + 0x153a) == '\x01')))) {
          if ((uVar14 >> 0xd & 1) == 0) {
            *(undefined8 *)((longlong)puVar15 + -8) = 0;
            *(ulonglong *)((longlong)puVar15 + -0x10) = (ulonglong)uVar13;
            *(undefined8 *)((longlong)puVar15 + -0x18) = 0x14075acc4;
            cVar8 = FUN_14075a83d();
            uVar14 = *(uint *)((longlong)puVar15 + 0x28);
            puVar15 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x10) + 8);
            if (cVar8 != '\0') goto LAB_14075acd3;
          }
          else {
LAB_14075acd3:
            sVar12 = (short)uVar14;
            if (uVar2 != 0) {
              if (((*(char *)(uVar18 + 0x2250) != '\x01') || (*(uint *)(uVar18 + 0x2268) != uVar2))
                 || ((*(byte *)(uVar18 + 0x2254) & 2) != 0)) {
                *(ulonglong *)((longlong)puVar15 + -8) = (ulonglong)uVar2;
                *(undefined8 *)((longlong)puVar15 + -0x10) = 0x14075acff;
                FUN_14075a7b5();
                uVar13 = *(uint *)((longlong)puVar15 + 0x2c);
                puVar15 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar15 + -8) + 4);
                if (((uVar13 >> 0xe & 1) == 0) ||
                   (*(undefined1 *)(uVar18 + 0x1524) = 1, *(uint *)(uVar18 + 0x1514) == uVar2)) {
                  if ((uVar2 == *(uint *)(uVar18 + 0x1e80)) &&
                     (((*(byte *)(uVar18 + 0x1e89) & 4) != 0 &&
                      (*(uint *)(uVar18 + 0x1528) != uVar2)))) {
                    *(undefined8 *)((longlong)puVar15 + -8) = 0x11000;
                    *(undefined8 *)((longlong)puVar15 + -0x10) = 0x14075ad42;
                    cVar8 = FUN_14075a8ea();
                    uVar13 = *(uint *)((longlong)puVar15 + 0x2c);
                    puVar15 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar15 + -8) + 4);
                    if (cVar8 != '\0') {
                      *(undefined8 *)((longlong)puVar15 + -8) = *(undefined8 *)(uVar18 + 0x1ecc);
                      *(undefined8 *)((longlong)puVar15 + -0x10) = 0x14075ad58;
                      uVar11 = FUN_14075af35();
                      uVar16 = (ulonglong)((int)(undefined1 *)((longlong)puVar15 + -8) + 4);
                      *(undefined8 *)(uVar16 - 8) = uVar11;
                      *(undefined8 *)(uVar16 - 0x10) = 0x103344e9;
                      *(undefined8 *)(uVar16 - 0x18) = 0x14075ad66;
                      FUN_14075aef2();
                      uVar13 = *(uint *)(uVar16 + 0x28);
                      puVar15 = (uint *)(ulonglong)((int)(uVar16 - 0x10) + 8);
                    }
                  }
                  sVar12 = (short)uVar13;
                  if ((uVar13 & 0x40) != 0) {
                    if (*(uint *)(uVar18 + 0x1528) == uVar2) {
                      *(undefined8 *)((longlong)puVar15 + -8) = 0x14075adde;
                      FUN_14075a7a8();
                    }
                    goto LAB_14075adde;
                  }
                  if ((*(char *)(uVar18 + 0x27e5) == '\x01') &&
                     (*(uint *)(uVar18 + 0x1514) == uVar2)) {
                    *(undefined8 *)((longlong)puVar15 + -8) = 0;
                    *(undefined8 *)((longlong)puVar15 + -0x10) = 0x14075ad8a;
                    uVar10 = FUN_1407567d0();
                    uVar5 = uRam0000000150a13960;
                    uVar14 = uRam0000000150a1395c;
                    uVar13 = uRam0000000150a13958;
                    puVar15 = (uint *)(ulonglong)
                                      ((int)(undefined1 *)((longlong)puVar15 + -8) - 0x14);
                    puVar15[2] = _DAT_150a13954;
                    puVar15[3] = uVar13;
                    puVar15[4] = uVar14;
                    puVar15[5] = uVar5;
                    puVar15[1] = uVar3 + 8;
                    *puVar15 = uVar3;
                    puVar15[-2] = 0x4075adaa;
                    puVar15[-1] = 1;
                    FUN_1407e3632(uVar10);
                    sVar12 = (short)puVar15[0xc];
                  }
                  if (*(uint *)(uVar18 + 0x27e8) == uVar2) {
                    pcVar4 = (code *)swi(3);
                    bVar9 = (*pcVar4)();
                    return bVar9;
                  }
                  goto LAB_14075adbe;
                }
              }
              goto LAB_14075ade5;
            }
            if ((uVar14 & 0x40) == 0) {
LAB_14075adbe:
              bVar9 = sVar12 < 0 | *(byte *)(uVar18 + 0x2041) ^ 1;
              goto LAB_14075ade7;
            }
          }
LAB_14075adde:
          *(undefined1 *)(uVar18 + 0x1525) = 1;
        }
      }
    }
  }
LAB_14075ade5:
  bVar9 = 0;
LAB_14075ade7:
  if (_DAT_150ae3af3 == (*(uint *)((longlong)puVar15 + 0x10) ^ (uint)puVar15)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar15 + -8) = FUN_14075ae0a;
  FUN_1408802b0(*(uint *)((longlong)puVar15 + 0x10) ^ (uint)puVar15);
}

