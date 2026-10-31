/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076bc30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14076bc30(void)

{
  undefined1 *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float *pfVar11;
  undefined1 *puVar12;
  uint *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 *puVar13;
  
  uVar10 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  uVar3 = *(uint *)(uVar10 + 0x24);
  uVar16 = (ulonglong)_DAT_150b09398;
  *(ulonglong *)(uVar10 - 8) = (ulonglong)uVar3;
  *(ulonglong *)(uVar10 - 0x10) = uVar16;
  *(undefined8 *)(uVar10 - 0x18) = 0x14076bc53;
  pcVar8 = (char *)FUN_140751460();
  pfVar11 = (float *)(ulonglong)((int)(uVar10 - 0x10) + 8);
  if ((*pcVar8 == '\x01') && (fVar2 = *(float *)(pcVar8 + 4), 0.0 <= fVar2)) {
    uVar4 = *(uint *)((longlong)pfVar11 + 0x28);
    uVar6 = (uint)((uVar4 & 0xfe) != 0);
    if ((uVar6 == 0 && (uVar4 & 1) == 0) || ((fVar2 == 0.0 && (!NAN(fVar2))))) {
      if ((fVar2 == 0.0) && (!NAN(fVar2))) {
LAB_14076bd77:
        *(undefined8 *)((longlong)pfVar11 + -8) = *(undefined8 *)((longlong)pfVar11 + 0x2c);
        puVar15 = (undefined1 *)((longlong)pfVar11 + -0x10);
        *(ulonglong *)((longlong)pfVar11 + -0x10) = (ulonglong)uVar3;
        *(undefined8 *)((longlong)pfVar11 + -0x18) = 0x14076bd81;
        uVar9 = FUN_14076bb6d();
        pfVar11 = (float *)(ulonglong)((int)puVar15 + 8U);
        if (_DAT_150af4a90 == (*(uint *)((longlong)pfVar11 + 0xc) ^ (int)puVar15 + 8U)) {
          return uVar9;
        }
        goto LAB_14076bd98;
      }
    }
    else {
      puVar1 = (undefined1 *)((longlong)pfVar11 + 8);
      *(undefined1 **)((longlong)pfVar11 + -8) = (undefined1 *)((longlong)pfVar11 + 4);
      *(float **)((longlong)pfVar11 + -0x10) = (float *)((ulonglong)puVar1 & 0xffffffff);
      puVar12 = (undefined1 *)((longlong)pfVar11 + -0x18);
      puVar13 = (undefined1 *)((longlong)pfVar11 + -0x18);
      *(ulonglong *)((longlong)pfVar11 + -0x18) = (ulonglong)(uVar6 | uVar4);
      *(float *)((longlong)pfVar11 + -0xc) = fVar2;
      *(undefined8 *)((longlong)pfVar11 + -0x20) = 0x14076bcbd;
      FUN_14076b5c5();
      pfVar11 = (float *)(ulonglong)((int)puVar12 + 0xc);
      fVar2 = *(float *)((ulonglong)puVar1 & 0xffffffff);
      if (fVar2 < *pfVar11) {
        puVar14 = (uint *)((ulonglong)puVar13 & 0xffffffff);
        puVar14[2] = (uint)pfVar11[1];
        puVar14[1] = (uint)fVar2;
        *puVar14 = uVar3;
        puVar14[-2] = 0x4076bcec;
        puVar14[-1] = 1;
        iVar7 = FUN_14076b63b();
        pfVar11 = (float *)(ulonglong)((int)puVar12 + 0xc);
        bVar5 = 0 < iVar7;
        if ((uVar4 & 0xf0) != 0 && 0 < iVar7) {
          dVar17 = (*(double *)(uVar16 + 0x18) - (double)(float)puVar14[3]) + _DAT_150a24acc;
          bVar5 = true;
          if (((uVar4 & 0x20) != 0) && (dVar17 < *(double *)(uVar16 + 0x1570))) {
            bVar5 = false;
          }
          if (((uVar4 & 0x40) != 0) && (dVar17 < *(double *)(uVar16 + 0x1578))) {
            bVar5 = false;
          }
          if (((char)uVar4 < '\0') && (dVar17 < *(double *)(uVar16 + 0x1580))) goto LAB_14076bc68;
        }
        if (bVar5) goto LAB_14076bd77;
      }
    }
  }
LAB_14076bc68:
  if (_DAT_150af4974 == (*(uint *)((longlong)pfVar11 + 0xc) ^ (uint)pfVar11)) {
    return 0;
  }
LAB_14076bd98:
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)pfVar11 + -8) = &UNK_14076bda3;
  FUN_1408802b0(*(uint *)((longlong)pfVar11 + 0xc) ^ (uint)pfVar11);
}

