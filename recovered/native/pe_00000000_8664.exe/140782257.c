/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140782257 */

void FUN_140782257(byte *param_1)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar19;
  byte *unaff_RDI;
  longlong unaff_R13;
  longlong in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 *puVar12;
  char *pcVar13;
  int *piVar18;
  
  uVar19 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar17 = (int)&stack0xffffffffffffffe0 - 0xa8;
  piVar18 = (int *)(ulonglong)uVar17;
  uVar9 = (int)&stack0xfffffffffffffff8 - 0x18;
  puVar12 = (undefined4 *)(ulonglong)uVar9;
  puVar12[-1] = uVar17;
  puVar12[2] = 0xffffffff;
  puVar12[1] = 0x1012ca10;
  *puVar12 = *(undefined4 *)(in_FS_OFFSET + 0x14078227e);
  *(uint *)(in_FS_OFFSET + -0x7ae3be7500000000) = uVar9;
  *unaff_RDI = *unaff_RDI >> 4 | *unaff_RDI << 4;
  bVar7 = (byte)uVar9 & *param_1;
  uVar17 = CONCAT31((int3)(uVar9 >> 8),bVar7);
  pcVar13 = (char *)(ulonglong)uVar17;
  *pcVar13 = *pcVar13 + bVar7;
  uVar9 = *(uint *)(param_1 + 0x20);
  *(uint *)(uVar19 - 0x30) = uVar17;
  bVar7 = pcVar13[0xac];
  *(uint *)(uVar19 - 0x34) = uVar9;
  if (((bVar7 & 1) != 0) && ((*(byte *)((ulonglong)uVar9 + 0xac) & 1) != 0)) {
    *(int *)(uVar19 - 0x20) = (int)param_1;
    uVar9 = *(uint *)(param_1 + 0x4c);
    uVar14 = (ulonglong)uVar9;
    uVar16 = (ulonglong)*(uint *)(uVar19 - 0x30);
    *(undefined8 *)(uVar19 - 0x74) = *(undefined8 *)(uVar16 + 0x34);
    uVar15 = (ulonglong)*(uint *)(uVar19 - 0x34);
    *(undefined8 *)(uVar19 - 0x6c) = *(undefined8 *)(uVar15 + 0x34);
    *(undefined1 (*) [16])((uVar19 - 0x74) + uVar14 * 4) =
         ZEXT416((uint)(*(float *)(uVar16 + 0x3c + uVar14 * 4) +
                       *(float *)((uVar19 - 0x74) + uVar14 * 4)));
    uVar14 = (ulonglong)(uVar9 ^ 1);
    *(float *)((uVar19 - 0x6c) + uVar14 * 4) =
         *(float *)(uVar15 + 0x3c + uVar14 * 4) + *(float *)((uVar19 - 0x6c) + uVar14 * 4);
    uVar17 = *(uint *)(uVar15 + 0x10) | *(uint *)(uVar16 + 0x10);
    if (((uVar17 & 0x20) == 0) && ((uVar17 & (uint)(uVar9 != 0) * 0x10000 + 0x10000) == 0)) {
      *(uint *)(uVar19 - 0x28) = uVar9;
      *piVar18 = *(undefined4 *)(ulonglong)*(uint *)(uVar19 - 0x20);
      piVar18[-2] = 0x407823d9;
      piVar18[-1] = 1;
      FUN_14076b228();
      iVar10 = 0;
      do {
        *(int *)(uVar19 - 0x24) = iVar10;
        *(undefined4 *)(uVar19 - 0x10) = 0;
        uVar14 = (ulonglong)*(uint *)(uVar19 - 0x24);
        *(undefined4 *)((uVar19 - 0x60) + uVar14) = 0;
        *(undefined4 *)((uVar19 - 100) + uVar14) = 0;
        *(undefined4 *)((uVar19 - 0x5c) + uVar14) = 0;
        *(undefined4 *)(uVar19 - 0x10) = 0xffffffff;
        iVar10 = *(int *)(uVar19 - 0x24) + 0xc;
      } while (iVar10 != 0x18);
      *(undefined4 *)(uVar19 - 0x10) = 2;
      uVar15 = (ulonglong)*(uint *)(uVar19 - 0x28);
      fVar2 = *(float *)((ulonglong)*(uint *)(uVar19 - 0x44) + 0xce8 + uVar15 * 4);
      uVar14 = (ulonglong)*(uint *)((ulonglong)*(uint *)(uVar19 - 0x20) + 0x20);
      fVar3 = *(float *)((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar19 - 0x20) + 0x1c) + 0x34 +
                        uVar15 * 4);
      *(float *)(uVar19 - 0x40) = fVar2;
      *(float *)(uVar19 - 0x24) = fVar3 + fVar2;
      *(float *)(uVar19 - 0x2c) =
           *(float *)(uVar14 + 0x34 + uVar15 * 4) + *(float *)(uVar14 + 0x3c + uVar15 * 4);
      *piVar18 = 0x1033491e;
      piVar18[-2] = 0x4078245c;
      piVar18[-1] = 1;
      iVar10 = FUN_14076b464();
      *(float *)(uVar19 - 0x2c) = *(float *)(uVar19 - 0x2c) - *(float *)(uVar19 - 0x40);
      if (*(int *)((ulonglong)*(uint *)(uVar19 - 0x44) + 0x1528) == iVar10) {
        piVar18[1] = (int)&stack0xfffffffffffffff8 + -100;
        *piVar18 = 1;
        uVar11 = *(undefined4 *)(uVar19 - 0x30);
        uVar5 = *(undefined4 *)(uVar19 - 0x28);
        piVar18[-2] = 0x40782494;
        piVar18[-1] = 1;
        FUN_140783437(uVar11,uVar5);
        piVar18[1] = (int)&stack0xfffffffffffffff8 + -0x58;
        *piVar18 = 0;
        uVar11 = *(undefined4 *)(uVar19 - 0x34);
        uVar5 = *(undefined4 *)(uVar19 - 0x28);
        piVar18[-2] = 0x407824ad;
        piVar18[-1] = 1;
        FUN_140783437(uVar11,uVar5);
        *(undefined4 *)(uVar19 - 0x38) = *(undefined4 *)(uVar19 - 100);
        *(undefined4 *)(uVar19 - 0x48) = *(undefined4 *)(uVar19 - 0x5c);
        uVar14 = (ulonglong)*(uint *)(uVar19 - 0x28);
        if (0 < *(int *)(uVar19 - 0x38)) {
          uVar9 = *(uint *)(uVar19 - 0x48);
          *(undefined4 *)(uVar19 - 0x3c) = 0;
          uVar15 = (ulonglong)*(uint *)(ulonglong)uVar9;
          fVar2 = *(float *)(uVar15 + 0x34);
          fVar3 = *(float *)(uVar15 + 0x38);
          uVar4 = *(undefined8 *)(uVar15 + 0x3c);
          *(float *)(uVar19 - 0x8c) = fVar2;
          *(float *)(uVar19 - 0x88) = fVar3;
          *(float *)(uVar19 - 0x84) = (float)uVar4 + fVar2;
          *(float *)(uVar19 - 0x80) = (float)((ulonglong)uVar4 >> 0x20) + fVar3;
          piVar18[1] = (int)(*(float *)((uVar19 - 0x8c) + uVar14 * 4) + *(float *)(uVar19 - 0x40));
          *piVar18 = *(undefined4 *)(uVar19 - 0x24);
                    /* WARNING: Subroutine does not return */
          *(undefined **)(piVar18 + -2) = &UNK_14078250c;
          FUN_140755a9a();
        }
        *(undefined4 *)(uVar19 - 0x38) = *(undefined4 *)(uVar19 - 0x58);
        *(undefined4 *)(uVar19 - 0x48) = *(undefined4 *)(uVar19 - 0x50);
        uVar15 = 0;
        while ((int)uVar15 < *(int *)(uVar19 - 0x38)) {
          uVar9 = *(uint *)(uVar19 - 0x48);
          *(int *)(uVar19 - 0x3c) = (int)uVar15;
          uVar15 = (ulonglong)*(uint *)((ulonglong)uVar9 + uVar15 * 4);
          fVar2 = *(float *)(uVar15 + 0x34);
          fVar3 = *(float *)(uVar15 + 0x38);
          uVar4 = *(undefined8 *)(uVar15 + 0x3c);
          *(float *)(uVar19 - 0x8c) = fVar2;
          *(float *)(uVar19 - 0x88) = fVar3;
          *(float *)(uVar19 - 0x84) = (float)uVar4 + fVar2;
          *(float *)(uVar19 - 0x80) = (float)((ulonglong)uVar4 >> 0x20) + fVar3;
          piVar18[1] = (int)(*(float *)((uVar19 - 0x84) + uVar14 * 4) - *(float *)(uVar19 - 0x40));
          *piVar18 = *(undefined4 *)(uVar19 - 0x2c);
          piVar18[-2] = 0x407827c3;
          piVar18[-1] = 1;
          FUN_14074225a();
          *(float *)(uVar19 - 0x7c) = (float)in_ST0;
          *(undefined4 *)(uVar19 - 0x2c) = *(undefined4 *)(uVar19 - 0x7c);
          uVar14 = (ulonglong)*(uint *)(uVar19 - 0x28);
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          uVar15 = (ulonglong)*(uint *)(uVar19 - 0x3c);
        }
      }
      else {
        uVar14 = (ulonglong)*(uint *)(uVar19 - 0x28);
      }
      uVar9 = *(uint *)(uVar19 - 0x30);
      *(undefined4 *)(uVar19 - 0x8c) = *(undefined4 *)((ulonglong)uVar9 + 0x3c + uVar14 * 4);
      uVar17 = *(uint *)(uVar19 - 0x34);
      fVar2 = *(float *)((ulonglong)uVar17 + 0x3c + uVar14 * 4);
      *(float *)(uVar19 - 0x4c) = fVar2;
      *(float *)(uVar19 - 0x24) =
           *(float *)(uVar19 - 0x24) - *(float *)((ulonglong)uVar9 + 0x34 + uVar14 * 4);
      *(float *)(uVar19 - 0x40) = fVar2 + *(float *)((ulonglong)uVar17 + 0x34 + uVar14 * 4);
      piVar18[1] = 0x3f800000;
      *piVar18 = 2;
      piVar18[-2] = 0x40782572;
      piVar18[-1] = 1;
      uVar11 = FUN_140754a09();
      *(undefined4 *)(uVar19 - 0x3c) = uVar11;
      *(undefined4 *)(uVar19 - 0x38) = *(undefined4 *)((ulonglong)*(uint *)(uVar19 - 0x44) + 0x14c4)
      ;
      *(undefined4 *)(uVar19 - 0x10) = 2;
      *piVar18 = 0x1033491e;
      piVar18[-2] = 0x40782599;
      piVar18[-1] = 1;
      iVar10 = FUN_14076b464();
      fVar2 = *(float *)(uVar19 - 0x40);
      fVar3 = *(float *)(uVar19 - 0x2c);
      piVar18[9] = *(int *)(uVar19 - 0x3c);
      piVar18[7] = *(int *)(uVar19 - 0x38);
      piVar18[6] = (int)(fVar2 - fVar3);
      piVar18[5] = *(int *)(uVar19 - 0x24);
      piVar18[4] = (int)&stack0xfffffffffffffff8 + -0x4c;
      piVar18[3] = (int)&stack0xfffffffffffffff8 + -0x8c;
      piVar18[2] = *(int *)(uVar19 - 0x28);
      piVar18[1] = iVar10;
      *piVar18 = (int)&stack0xfffffffffffffff8 + -0x74;
      piVar18[8] = 0x3d23d70a;
      piVar18[-2] = 0x407825f6;
      piVar18[-1] = 1;
      cVar8 = FUN_14078a568();
      if (((cVar8 != '\0') && (0 < *(int *)(uVar19 - 100))) && (0 < *(int *)(uVar19 - 0x58))) {
        uVar11 = *(undefined4 *)(uVar19 - 0x8c);
        uVar9 = *(uint *)(uVar19 - 0x30);
        uVar17 = *(uint *)(uVar19 - 0x28);
        uVar15 = (ulonglong)uVar17;
        *(undefined4 *)((ulonglong)uVar9 + 0x44 + uVar15 * 4) = uVar11;
        *(undefined4 *)((ulonglong)uVar9 + 0x3c + uVar15 * 4) = uVar11;
        uVar14 = (ulonglong)*(uint *)(uVar19 - 0x34);
        *(float *)(uVar14 + 0x34 + uVar15 * 4) =
             *(float *)(uVar14 + 0x34 + uVar15 * 4) -
             (*(float *)(uVar19 - 0x4c) - *(float *)(uVar14 + 0x3c + uVar15 * 4));
        uVar11 = *(undefined4 *)(uVar19 - 0x4c);
        *(undefined4 *)(uVar14 + 0x44 + uVar15 * 4) = uVar11;
        *(undefined4 *)(uVar14 + 0x3c + uVar15 * 4) = uVar11;
        uVar9 = (int)&stack0xfffffffffffffff8 - 100;
        *(int *)(uVar19 - 0x2c) = (int)CONCAT71((uint7)(uint3)(uVar17 >> 8),1);
        do {
          iVar10 = *(int *)(ulonglong)uVar9;
          *(int *)(uVar19 - 0x24) = iVar10;
          if (0 < iVar10) {
            uVar9 = ((int *)(ulonglong)uVar9)[2];
            do {
              uVar17 = *(uint *)(ulonglong)uVar9;
              uVar6 = *(uint *)((ulonglong)uVar17 + 0x18);
              if (uVar6 != *(uint *)(uVar19 - 0x20)) {
                do {
                  uVar14 = (ulonglong)uVar6;
                  if (*(int *)(uVar14 + 0x4c) == *(int *)(uVar19 - 0x28)) {
                    pbVar1 = (byte *)((ulonglong)*(uint *)(uVar14 + 0x1c) + 0xac);
                    *pbVar1 = *pbVar1 | 0x80;
                    uVar14 = (ulonglong)*(uint *)(ulonglong)(uVar17 + 0x18);
                  }
                  uVar6 = *(uint *)(uVar14 + 0x18);
                  uVar17 = (uint)uVar14;
                } while (uVar6 != *(uint *)(uVar19 - 0x20));
              }
            } while (*(int *)(unaff_R13 + -0x24) != 0);
          }
          uVar9 = (int)&stack0xfffffffffffffff8 - 0x58;
          bVar7 = *(byte *)(uVar19 - 0x2c);
          *(undefined4 *)(uVar19 - 0x2c) = 0;
        } while ((bVar7 & 1) != 0);
        uVar14 = (ulonglong)*(uint *)(uVar19 - 0x30);
        uVar11 = *(undefined4 *)(uVar14 + 0x3c);
        uVar5 = *(undefined4 *)(uVar14 + 0x34);
        *piVar18 = *(undefined4 *)(uVar14 + 0x40);
        piVar18[-2] = 0x407826eb;
        piVar18[-1] = 1;
        FUN_140781c1e(uVar5,0,uVar11);
        uVar14 = (ulonglong)*(uint *)(uVar19 - 0x34);
        uVar11 = *(undefined4 *)(uVar14 + 0x3c);
        uVar5 = *(undefined4 *)(uVar14 + 0x34);
        *piVar18 = *(undefined4 *)(uVar14 + 0x40);
        piVar18[-2] = 0x4078270f;
        piVar18[-1] = 1;
        FUN_140781c1e(uVar5,0,uVar11);
        piVar18[-2] = 0x40782714;
        piVar18[-1] = 1;
        FUN_140770426();
        *(undefined4 *)(uVar19 - 0x10) = 2;
      }
      piVar18[-2] = 0x40782720;
      piVar18[-1] = 1;
      FUN_14076b438();
      *(undefined4 *)(uVar19 - 0x10) = 0xffffffff;
      *(undefined4 *)(uVar19 - 0x20) = 0xc;
      do {
        *(undefined4 *)(uVar19 - 0x10) = 1;
        iVar10 = *(int *)((uVar19 - 0x5c) + (ulonglong)*(uint *)(uVar19 - 0x20));
        if (iVar10 != 0) {
          *piVar18 = iVar10;
                    /* WARNING: Subroutine does not return */
          piVar18[-2] = 0x4078274c;
          piVar18[-1] = 1;
          FUN_14075219b();
        }
        *(undefined4 *)(uVar19 - 0x10) = 0xffffffff;
        iVar10 = *(int *)(uVar19 - 0x20) + -0xc;
        *(int *)(uVar19 - 0x20) = iVar10;
      } while (iVar10 != -0xc);
    }
    else {
      uVar11 = *(undefined4 *)
                ((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar19 - 0x44) + 0x14cc) + 0x2e8);
      *(undefined4 *)(uVar19 - 0x20) = *(undefined4 *)((ulonglong)*(uint *)(uVar19 - 0x44) + 0xd14);
      piVar18[1] = 0x3f800000;
      *piVar18 = 0x1c;
      piVar18[-2] = 0x4078235f;
      piVar18[-1] = 1;
      iVar10 = FUN_140754a09();
      piVar18[3] = *(int *)(uVar19 - 0x20);
      piVar18[2] = iVar10;
      piVar18[1] = (int)&stack0xfffffffffffffff8 + -0x6c;
      *piVar18 = (int)&stack0xfffffffffffffff8 + -0x74;
      piVar18[4] = 0;
      piVar18[-2] = 0x40782387;
      piVar18[-1] = 1;
      FUN_1407e372a(uVar11);
      piVar18 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xbc);
    }
    bVar7 = *(byte *)((ulonglong)*(uint *)(uVar19 - 0x30) + 0xac);
  }
  if ((bVar7 & 1) != 0) {
    uVar11 = *(undefined4 *)(uVar19 - 0x30);
    *(undefined8 *)((longlong)piVar18 + -8) = 0x1407823a1;
    FUN_140782257(uVar11);
  }
  if ((*(byte *)((ulonglong)*(uint *)(uVar19 - 0x34) + 0xac) & 1) != 0) {
    *(undefined8 *)((longlong)piVar18 + -8) = 0x1407823b3;
    FUN_140782257();
  }
  uVar9 = *(uint *)(uVar19 - 0x18);
  *(uint *)(in_FS_OFFSET + 0xa8c48100000000) = uVar9;
  *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar9;
  return;
}

