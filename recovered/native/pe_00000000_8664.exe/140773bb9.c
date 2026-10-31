/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140773bb9 */

/* WARNING: Removing unreachable block (ram,0x000140773dd5) */
/* WARNING: Removing unreachable block (ram,0x000140773e21) */
/* WARNING: Removing unreachable block (ram,0x000140773e2c) */
/* WARNING: Removing unreachable block (ram,0x000140773ec9) */
/* WARNING: Removing unreachable block (ram,0x000140773e76) */
/* WARNING: Removing unreachable block (ram,0x000140773ecc) */
/* WARNING: Removing unreachable block (ram,0x000140773ee2) */
/* WARNING: Removing unreachable block (ram,0x000140773ee6) */
/* WARNING: Removing unreachable block (ram,0x000140773f0d) */
/* WARNING: Removing unreachable block (ram,0x000140773f12) */
/* WARNING: Removing unreachable block (ram,0x000140773f16) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140773bb9(undefined4 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  char cVar10;
  ushort uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 *puVar15;
  
  uVar14 = (int)&stack0xffffffffffffffe0 - 0x40;
  puVar15 = (undefined1 *)(ulonglong)uVar14;
  iVar19 = *(int *)(puVar15 + 0x58);
  if (iVar19 == 0) {
    iVar19 = *(int *)((ulonglong)*(uint *)(puVar15 + 0x54) + 0x434);
  }
  uVar16 = *(uint *)(puVar15 + 0x5c);
  uVar13 = (ulonglong)uVar16;
  *(undefined4 *)(puVar15 + 0x10) = param_1;
  if ((int)param_2 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = param_2 & 0xffffffff;
    if ((*(byte *)(param_2 + 0xac) & 1) == 0) {
      uVar20 = param_2 & 0xffffffff;
      do {
        uVar18 = uVar20;
        uVar20 = (ulonglong)*(uint *)(uVar18 + 0x18);
      } while (*(uint *)(uVar18 + 0x18) != 0);
    }
  }
  *(int *)(puVar15 + 8) = iVar19;
  uVar3 = iVar19 + 0x10;
  if (iVar19 == 0) {
    uVar3 = *(uint *)(puVar15 + 0x54) + 0x30;
  }
  *(int *)(puVar15 + 4) = (int)param_2;
  uVar4 = *(int *)(puVar15 + 0x10) + 0x30;
  if (*(int *)(puVar15 + 4) != 0) {
    uVar4 = *(int *)(puVar15 + 4) + 0x10;
  }
  uVar2 = *(uint *)(puVar15 + 4);
  uVar20 = (ulonglong)uVar2;
  uVar3 = *(uint *)(ulonglong)uVar3;
  uVar4 = *(uint *)(ulonglong)uVar4;
  *(undefined1 *)(uVar13 + 0xb1) = 1;
  if ((puVar15[100] == '\0') &&
     ((uVar4 >> 0x14 & 1) == 0 && *(char *)((ulonglong)*(uint *)(puVar15 + 0xc) + 0x6d) == '\0')) {
    if (((byte)((uVar4 & 4) >> 2) & uVar2 != 0) == 1) {
      if ((*(byte *)((ulonglong)(uVar2 + 0x10) + 1) & 8) == 0) {
LAB_140773f40:
        puVar15[3] = *(int *)(uVar20 + 0x24) == 0 && *(int *)(uVar20 + 0x1c) == 0;
        if ((*(int *)(puVar15 + 8) != 0) && (puVar15[3] == '\0')) {
LAB_140773f64:
          if ((*(int *)((ulonglong)*(uint *)(puVar15 + 8) + 0x1c) != 0) &&
             (*(int *)((ulonglong)*(uint *)(puVar15 + 8) + 0x84) == 0)) goto LAB_140773c63;
        }
        if ((((uVar3 >> 0x15 & 1) == 0) ||
            (((uVar2 != 0 && (*(int *)(uVar20 + 0x1c) == 0)) && (*(int *)(uVar20 + 0x24) == 0)))) &&
           (((uVar2 == 0 || ((uVar3 & 0x400000) == 0)) ||
            ((*(int *)(uVar20 + 0x1c) != 0 || (*(int *)(uVar20 + 0x24) != 0))))))
        goto LAB_140773c6a;
      }
      goto LAB_140773c63;
    }
    if (uVar2 != 0) goto LAB_140773f40;
    if (*(int *)(puVar15 + 8) != 0) goto LAB_140773f64;
    if ((uVar3 >> 0x15 & 1) != 0) goto LAB_140773c63;
  }
  else {
LAB_140773c63:
    *(undefined1 *)(uVar13 + 0xb1) = 0;
  }
LAB_140773c6a:
  *(undefined1 *)(uVar13 + 0xb2) = 1;
  uVar5 = *(uint *)(puVar15 + 0x10);
  uVar17 = (ulonglong)uVar5;
  if (((uVar4 & 0x10) == 0) && (*(char *)((ulonglong)*(uint *)(puVar15 + 0xc) + 0x6c) == '\0')) {
    if ((uVar2 == 0 || puVar15[100] != '\0') ||
       ((*(int *)(uVar20 + 0x18) != 0 || ((*(byte *)((ulonglong)(uVar2 + 0x10) + 1) & 8) == 0)))) {
      if ((uVar3 >> 0x13 & 1) != 0) goto LAB_140773ca7;
      goto LAB_140773cae;
    }
    *(undefined1 *)(uVar13 + 0xb2) = 0;
  }
  else {
LAB_140773ca7:
    *(undefined1 *)(uVar13 + 0xb2) = 0;
LAB_140773cae:
    if (uVar2 == 0) {
      if (*(char *)(uVar17 + 0x104) == '\x01') {
        bVar9 = *(byte *)(uVar13 + 0xac) | 8;
      }
      else {
        bVar9 = *(byte *)(uVar13 + 0xac) & 0xf7 |
                *(char *)((ulonglong)*(uint *)(puVar15 + 0x54) + 0x104) << 3;
      }
      *(byte *)(uVar13 + 0xac) = bVar9;
      uVar11 = CONCAT11(((*(byte *)(uVar17 + 0xc) & 0x20) == 0) << 4,bVar9);
      goto LAB_140773d50;
    }
  }
  if ((*(byte *)(uVar20 + 0xac) & 8) == 0) {
    bVar9 = *(byte *)(uVar13 + 0xac) & 0xf7 |
            *(char *)((ulonglong)*(uint *)(puVar15 + 0x54) + 0x104) << 3;
  }
  else {
    bVar9 = *(byte *)(uVar13 + 0xac) | 8;
  }
  *(byte *)(uVar13 + 0xac) = bVar9;
  uVar11 = CONCAT11(0x10,bVar9);
LAB_140773d50:
  iVar19 = (int)uVar18;
  puVar12 = (undefined8 *)(ulonglong)(iVar19 + 0x34);
  if (iVar19 == 0) {
    puVar12 = (undefined8 *)(ulonglong)(uVar5 + 0x50);
  }
  *(byte *)(uVar13 + 0xac) =
       (byte)((ulonglong)uVar11 & 0xffffffffffffffef) |
       (byte)(((ulonglong)uVar11 & 0xffffffffffffffef) >> 8);
  *(undefined8 *)(uVar13 + 0x34) = *puVar12;
  uVar3 = uVar5 + 0x58;
  if (iVar19 != 0) {
    uVar3 = iVar19 + 0x3c;
  }
  uVar6 = *(undefined4 *)(ulonglong)uVar3;
  *(undefined4 *)(uVar13 + 0x40) = ((undefined4 *)(ulonglong)uVar3)[1];
  *(undefined4 *)(uVar13 + 0x3c) = uVar6;
  *(undefined4 *)(uVar13 + 0xb4) = *(undefined4 *)(puVar15 + 4);
  *(undefined4 *)(uVar13 + 0xb8) = 0xffffffff;
  *(undefined1 *)(uVar13 + 0xb3) = 0;
  if (*(char *)(uVar17 + 0xfc) == '\0') {
    *(int *)(puVar15 + 4) = *(int *)(puVar15 + 0xc) + 0xe4;
    uVar16 = uVar16 + 0xc0;
    do {
      if (*(char *)(uVar13 + 0xb2) == '\x01') {
        fVar7 = *(float *)(uVar13 + 0x34);
        fVar8 = *(float *)(uVar13 + 0x38);
        uVar1 = *(undefined8 *)(uVar13 + 0x3c);
        *(float *)(puVar15 + 0x2c) = fVar7;
        *(float *)(puVar15 + 0x30) = fVar8;
        *(float *)(puVar15 + 0x34) = (float)uVar1 + fVar7;
        *(float *)(puVar15 + 0x38) = (float)((ulonglong)uVar1 >> 0x20) + fVar8;
        *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + 4);
        *(undefined8 **)(puVar15 + -0x10) = (undefined8 *)(ulonglong)(uVar5 + 0x50);
        *(ulonglong *)(puVar15 + -0x18) = (ulonglong)uVar16;
        *(undefined8 *)(puVar15 + -0x20) = 0x140773e04;
        cVar10 = FUN_140783824((ulonglong)(puVar15 + 0x2c) & 0xffffffff,0);
        puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -0x18) + 0xc);
        if (cVar10 != '\0') {
          *(undefined4 *)(uVar13 + 0xb8) = 0;
          *(undefined1 *)(uVar13 + 0xb3) = 1;
        }
      }
      uVar16 = uVar16 + 0x10;
    } while( true );
  }
  *(undefined1 *)(uVar13 + 0xb0) = *(undefined1 *)(uVar13 + 0xb1);
  if (((puVar15[0x60] == '\0') && (*(char *)(uVar13 + 0xb3) == '\0')) &&
     (*(char *)((ulonglong)*(uint *)(puVar15 + 0xc) + 0x6e) == '\0')) {
    *(undefined1 *)(uVar13 + 0xb0) = 0;
  }
  *(undefined4 *)(uVar13 + 0xbc) = 0;
  if (_DAT_150afcc2a != (*(uint *)(puVar15 + 0x3c) ^ uVar14)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar15 + -8) = 0x140773ffd;
    FUN_1408802b0(*(uint *)(puVar15 + 0x3c) ^ uVar14);
  }
  return;
}

