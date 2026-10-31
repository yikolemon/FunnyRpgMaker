/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028ad88 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00014028aef2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_14028ad88(uint *param_1,uint param_2,ulonglong param_3,uint *param_4,char *param_5)

{
  sbyte sVar1;
  byte bVar2;
  char cVar3;
  byte bVar11;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  undefined7 uVar12;
  uint *puVar7;
  char *pcVar8;
  int *piVar9;
  sbyte sVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  float10 in_ST0;
  char *pcVar10;
  
  param_3 = param_3 & 0xffffffff;
  uVar18 = 0;
  do {
    uVar17 = *param_1;
    uVar15 = (uVar17 << 0xb ^ uVar17) >> 8 ^ uVar17;
    uVar4 = (uVar17 << 0xb ^ uVar15) * 0x19660d + 0x3c6ef35f;
    uVar17 = uVar4 * 4;
    if ((uVar15 & 1) != 0) {
      uVar17 = uVar4 >> 3;
    }
    uVar17 = uVar17 ^ uVar4;
    bVar19 = (uVar17 >> 10 & 1) == 0;
    sVar13 = 0x15;
    if (bVar19) {
      sVar13 = 2;
    }
    sVar1 = 9;
    if (bVar19) {
      sVar1 = 0x16;
    }
    uVar17 = uVar17 << sVar13 ^ uVar17;
    uVar17 = uVar17 >> sVar1 ^ uVar17;
    uVar4 = uVar17 | 0x100;
    if ((uVar17 & 0xfffff) != 0) {
      uVar4 = uVar17;
    }
    uVar17 = uVar4 * 0x19660d + 0x3c6ef35f;
    sVar13 = ((byte)uVar4 & 7) + 1;
    if (uVar17 % 3 == 0) {
      uVar15 = uVar17 << sVar13;
LAB_14028ae75:
      uVar15 = uVar15 ^ uVar17;
    }
    else {
      if (uVar17 % 3 == 1) {
        uVar15 = uVar17 >> sVar13;
        goto LAB_14028ae75;
      }
      uVar15 = (uVar17 << sVar13) + uVar4 * -0x19660d + 0xc3910ca0;
    }
    uVar17 = uVar15 ^ 0x55aa55aa;
    if ((short)uVar15 != 0) {
      uVar17 = uVar15;
    }
    puVar14 = (undefined1 *)0x173bef;
    if (uVar15 != 0) {
      puVar14 = (undefined1 *)(ulonglong)uVar17;
    }
    *param_1 = (uint)puVar14;
    uVar17 = *(uint *)((longlong)param_1 +
                      (ulonglong)(((uint)param_3 ^ (uint)puVar14) & 0xff) * 4 +
                      (ulonglong)(((uVar4 ^ param_2) & 0x1f) << 10) + 0xc);
    param_3 = (ulonglong)uVar17;
    uVar4 = ~(((param_1[2] + param_2) / 0x14) * 0x14) + param_1[2] + param_2;
    if (uVar4 < 0x13) {
      piVar5 = (int *)(&DAT_1404cbcb4 + *(int *)(&DAT_1404cbcb4 + (ulonglong)uVar4 * 4));
      cVar3 = (char)piVar5;
      *(char *)piVar5 = (char)*piVar5 + cVar3;
      bVar11 = (byte)((ulonglong)piVar5 >> 8);
      *param_5 = *param_5 + bVar11;
      *(int *)((longlong)piVar5 * 5) = (int)in_ST0;
      *piVar5 = *piVar5 + (int)piVar5;
      *(char *)piVar5 = (char)*piVar5 + cVar3;
      piVar5 = (int *)CONCAT62((int6)((ulonglong)piVar5 >> 0x10),
                               CONCAT11(bVar11 & (byte)param_1,cVar3));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      do {
        pbVar6 = (byte *)((ulonglong)piVar5 | 0x80);
        *(int *)pbVar6 = *(int *)pbVar6 + (int)pbVar6;
        bVar11 = *pbVar6;
        bVar2 = (byte)pbVar6;
        *pbVar6 = *pbVar6 + bVar2;
        puVar14 = (undefined1 *)
                  CONCAT62((int6)((ulonglong)puVar14 >> 0x10),
                           CONCAT11(((char)((ulonglong)puVar14 >> 8) + -0xc) - CARRY1(bVar11,bVar2),
                                    (char)puVar14));
        *puVar14 = *puVar14;
        *pbVar6 = *pbVar6 + bVar2;
        uVar12 = (undefined7)((ulonglong)piVar5 >> 8);
        pbVar6 = (byte *)(CONCAT71(uVar12,bVar2 + 0x22) | 0x80);
        *(int *)pbVar6 = *(int *)pbVar6 + (int)pbVar6;
        bVar11 = *pbVar6;
        bVar2 = (byte)pbVar6;
        *pbVar6 = *pbVar6 + bVar2;
        puVar7 = (uint *)(CONCAT71(uVar12,(bVar2 - 0x21) + CARRY1(bVar11,bVar2)) | 0x80);
        uVar18 = (uint)puVar7;
        *puVar7 = *puVar7 + uVar18;
        cVar3 = (char)puVar7;
        *(char *)puVar7 = (char)*puVar7 + cVar3;
        *puVar7 = *puVar7 + uVar18;
        *(char *)puVar7 = (char)*puVar7 + cVar3;
        *(char *)puVar7 = (char)*puVar7 + cVar3;
        *(char *)puVar7 = (char)*puVar7 + cVar3;
        *(char *)puVar7 = (char)*puVar7 + cVar3;
        *(char *)puVar7 = (char)*puVar7 + cVar3;
        uVar18 = uVar18 & *puVar7;
        pcVar8 = (char *)(ulonglong)uVar18;
        pcVar10 = (char *)((longlong)param_1 + param_3 + 0x2bb41000);
        *pcVar10 = *pcVar10 + 'D';
        cVar3 = (char)uVar18;
        *pcVar8 = *pcVar8 + cVar3;
        *pcVar8 = *pcVar8 + cVar3;
        *pcVar8 = *pcVar8 + cVar3;
        *pcVar8 = *pcVar8 + cVar3;
        *(char *)param_1 = (char)*param_1 + cVar3;
        *pcVar8 = *pcVar8 + cVar3;
        *pcVar8 = *pcVar8 + (char)((ulonglong)param_1 >> 8);
        uVar18 = CONCAT22((short)(uVar18 >> 0x10),CONCAT11(0x2b,cVar3));
        piVar9 = (int *)(ulonglong)uVar18;
        *(char *)(piVar9 + -0x13) = (char)piVar9[-0x13] + -0x4c;
        piVar5 = (int *)(ulonglong)(uVar18 - *piVar9);
      } while (SBORROW4(uVar18,*piVar9));
      uVar18 = (uVar18 - *piVar9) - *piVar5;
      puVar7 = (uint *)(ulonglong)uVar18;
      *(byte *)((longlong)param_1 + param_3) = *(byte *)((longlong)param_1 + param_3) ^ 0xb4;
      cVar3 = (char)uVar18;
      *(char *)puVar7 = (char)*puVar7 + cVar3;
      *(char *)puVar7 = (char)*puVar7 + cVar3;
      *(char *)puVar7 = (char)*puVar7 + cVar3;
      *(char *)puVar7 = (char)*puVar7 + cVar3;
      *(char *)puVar7 = (char)*puVar7 + cVar3;
      *(char *)puVar7 = (char)*puVar7 + cVar3;
      uVar18 = uVar18 & *puVar7;
      cVar3 = (char)uVar18 + *(char *)(ulonglong)uVar18;
      pcVar10 = (char *)(ulonglong)CONCAT31((int3)(uVar18 >> 8),cVar3);
      *pcVar10 = *pcVar10 + cVar3;
      *pcVar10 = *pcVar10 + cVar3;
      *pcVar10 = *pcVar10 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar15 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
    uVar15 = uVar15 >> 0x11 ^ uVar15;
    uVar15 = uVar15 << 5 ^ uVar15;
    uVar16 = uVar15 & 0x3fffffff ^ uVar15 >> 0xb;
    uVar4 = 0x5d588b65;
    if (uVar15 != uVar16) {
      uVar4 = (uVar16 ^ uVar15) * 0x10dcd;
      uVar15 = uVar4 ^ 0x59a6f141;
      if ((short)uVar4 != 0) {
        uVar15 = uVar4;
      }
      uVar4 = uVar15 | 0x100;
      if ((uVar15 & 0xfffff) != 0) {
        uVar4 = uVar15;
      }
    }
    param_1[1] = uVar4;
    param_2 = param_2 + uVar4;
    uVar18 = uVar18 + 1;
    if (0x13 < uVar18) {
      param_5[*param_4] = param_5[*param_4] + (char)uVar17;
      return;
    }
  } while( true );
}

