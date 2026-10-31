/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076da77 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14076da77(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 *puVar10;
  ulonglong uVar13;
  
  uVar8 = (int)&stack0xffffffffffffffe0 - 0x2c;
  puVar10 = (undefined8 *)(ulonglong)uVar8;
  uVar9 = *(uint *)((longlong)puVar10 + 0x44);
  uVar15 = (ulonglong)_DAT_150b0b1df;
  if ((*(char *)(uVar15 + 0x2251) == '\0') && (*(char *)(uVar15 + 0x2252) != '\x01')) {
    uVar7 = 0x1033aa3d;
    if ((*(uint *)(puVar10 + 8) & 2) == 0) goto LAB_14076db9b;
  }
  else {
    if ((*(byte *)(uVar15 + 0x1ed0) & 1) == 0) {
      fVar1 = *(float *)(uVar15 + 0xdf0);
      fVar2 = *(float *)(uVar15 + 0xe4);
      fVar3 = *(float *)(uVar15 + 0xe8);
      if (*(int *)(uVar15 + 0xfc) == 1) {
        fVar16 = fVar1 * 0.0;
        uVar7 = _DAT_150a268e2;
        fVar4 = _DAT_150a24b8b;
      }
      else {
        fVar16 = fVar1 * _DAT_150a267aa;
        uVar7 = 0;
        fVar4 = _DAT_150a24c1a;
      }
      *puVar10 = uVar7;
      pfVar6 = (float *)((ulonglong)(puVar10 + 1) & 0xffffffff);
      *pfVar6 = fVar16 + fVar2;
      pfVar6[1] = fVar3 + fVar4 * fVar1;
      puVar10[-1] = puVar10;
      puVar10[-2] = 0;
      puVar10[-3] = pfVar6;
      puVar10[-4] = 0x14076db43;
      FUN_140769c26();
      uVar8 = (int)(puVar10 + -3) + 0xc;
    }
    pfVar11 = (float *)(ulonglong)(uVar8 - 4);
    *pfVar11 = *(float *)(uVar15 + 0xe4c) * _DAT_150a24d2e;
    pfVar11[-2] = 3.8571403;
    pfVar11[-1] = 1.4013e-45;
    FUN_140769d32();
    puVar10 = (undefined8 *)(ulonglong)uVar8;
    uVar7 = 0x1033aa25;
  }
  uVar14 = (ulonglong)*(uint *)(uVar15 + 0x25ec);
  if ((*(uint *)(uVar15 + 0x25ec) != 0) && (*(char *)(uVar14 + 0xf9) == '\x01')) {
    *(ulonglong *)((longlong)puVar10 + -8) = uVar14;
    *(undefined8 *)((longlong)puVar10 + -0x10) = 0x14076db84;
    cVar5 = FUN_140769a0c();
    puVar10 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -8) + 4);
    if (cVar5 == '\0') {
      *(ulonglong *)((longlong)puVar10 + -8) = uVar14;
      *(undefined8 *)((longlong)puVar10 + -0x10) = 0x14076db91;
      FUN_140769bfb();
      puVar10 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -8) + 4);
      *(short *)(uVar15 + 0x25ea) = *(short *)(uVar15 + 0x25ea) + 1;
    }
  }
LAB_14076db9b:
  *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uint)(int)*(short *)(uVar15 + 0x25ea);
  *(undefined8 *)((longlong)puVar10 + -0x10) = uVar7;
  *(undefined8 *)((longlong)puVar10 + -0x18) = 0x20;
  *(ulonglong *)((longlong)puVar10 + -0x20) = (ulonglong)((longlong)puVar10 + 8) & 0xffffffff;
  *(undefined8 *)((longlong)puVar10 + -0x28) = 0x14076dbb0;
  FUN_140752381();
  uVar12 = (ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x20) + 0x10);
  *(ulonglong *)(uVar12 - 8) = (ulonglong)(uVar9 | 0x20b0347);
  *(undefined8 *)(uVar12 - 0x10) = 0;
  *(ulonglong *)(uVar12 - 0x18) = (ulonglong)((longlong)puVar10 + 8) & 0xffffffff;
  *(undefined8 *)(uVar12 - 0x20) = 0x14076dbc2;
  FUN_14075fbfb();
  uVar9 = (int)(uVar12 - 0x18) + 0xc;
  uVar13 = (ulonglong)uVar9;
  if (_DAT_150af68d1 != (*(uint *)(uVar13 + 0x28) ^ uVar9)) {
    uVar8 = *(uint *)(uVar13 + 0x28);
                    /* WARNING: Subroutine does not return */
    *(code **)(uVar13 - 8) = FUN_14076dbea;
    FUN_1408802b0(uVar8 ^ uVar9);
  }
  return CONCAT71((uint7)(uint3)((*(uint *)(uVar13 + 0x28) ^ uVar9) >> 8),1);
}

