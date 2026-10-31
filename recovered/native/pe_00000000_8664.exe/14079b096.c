/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079b096 */

/* WARNING: Instruction at (ram,0x00014079b3ec) overlaps instruction at (ram,0x00014079b3eb)
    */
/* WARNING: Removing unreachable block (ram,0x00014079b3ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14079b096(undefined4 param_1,uint *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint in_ECX;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  undefined8 uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint in_R11D;
  int unaff_R13D;
  uint unaff_R14D;
  
  puVar10 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  puVar10[1] = param_1;
  iVar18 = puVar10[10];
  uVar20 = puVar10[9];
  uVar7 = puVar10[8];
  *puVar10 = (int)param_2;
  if ((in_ECX >> 0x18 & 1) == 0) {
    if (uVar20 == 0) {
      uVar8 = (ulonglong)uVar7;
      do {
        uVar21 = uVar8;
        if (-1 < iVar18) {
          puVar9 = (uint *)(ulonglong)*puVar10;
          uVar20 = *puVar9;
          if (uVar20 == puVar9[1]) {
            if (uVar20 == 0) {
              uVar7 = 8;
            }
            else {
              uVar7 = (int)uVar20 / 2 + uVar20;
            }
            if (unaff_R13D < (int)param_3) {
              uVar20 = uVar7;
            }
            *(ulonglong *)(puVar10 + -2) = (ulonglong)(uVar20 * 4);
            puVar10[-4] = 0x4079b2db;
            puVar10[-3] = 1;
            uVar3 = FUN_1407520ca();
            puVar10 = (uint *)(ulonglong)((int)(puVar10 + -2) + 4);
            uVar8 = (ulonglong)uVar3;
            puVar9 = (uint *)(ulonglong)*puVar10;
            uVar7 = puVar9[2];
            if (uVar7 != 0) {
              *(ulonglong *)(puVar10 + -2) = (ulonglong)(*puVar9 << 2);
              *(ulonglong *)(puVar10 + -4) = (ulonglong)uVar7;
              *(ulonglong *)(puVar10 + -6) = uVar8;
              puVar10[-8] = 0x4079b2f7;
              puVar10[-7] = 1;
              FUN_1408b31a0();
              puVar14 = (uint *)(ulonglong)((int)(puVar10 + -6) + 0xc);
              *(undefined8 *)(puVar14 + -2) = *(undefined8 *)((ulonglong)*puVar14 + 8);
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar14 + -4) = &UNK_14079b305;
              FUN_14075219b();
            }
            puVar9[2] = uVar3;
            puVar9[1] = uVar20;
            uVar20 = *puVar9;
          }
          else {
            uVar8 = (ulonglong)puVar9[2];
          }
          *(int *)(uVar8 + (ulonglong)uVar20 * 4) = (int)uVar21 - *(int *)((longlong)puVar10 + 0x20)
          ;
          *puVar9 = *puVar9 + 1;
          iVar18 = *(int *)((longlong)puVar10 + 0x28);
        }
        *(undefined8 *)((longlong)puVar10 + -8) = 10;
        *(ulonglong *)((longlong)puVar10 + -0x10) = uVar21;
        *(undefined8 *)((longlong)puVar10 + -0x18) = 0x14079b32b;
        iVar5 = FUN_1408b3880();
        puVar10 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x10) + 8);
        uVar8 = (ulonglong)(iVar5 + 1);
      } while ((int)param_3 != 0);
      *(ulonglong *)((longlong)puVar10 + -8) = uVar21;
      *(undefined8 *)((longlong)puVar10 + -0x10) = 0x14079b340;
      iVar5 = FUN_1408c85c0();
      puVar10 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -8) + 4);
      uVar7 = iVar5 + (int)uVar21;
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
      param_2 = (uint *)(ulonglong)*puVar10;
      uVar20 = puVar10[9];
      goto LAB_14079b350;
    }
    uVar8 = 0;
    if (uVar20 <= uVar7) goto LAB_14079b350;
    do {
      if (-1 < iVar18) {
        puVar9 = (uint *)(ulonglong)*puVar10;
        uVar20 = *puVar9;
        if (uVar20 == puVar9[1]) {
          if (uVar20 == 0) {
            uVar3 = 8;
          }
          else {
            uVar3 = (int)uVar20 / 2 + uVar20;
          }
          if ((int)unaff_R14D < (int)uVar3) {
            uVar20 = uVar3;
          }
          *(ulonglong *)(puVar10 + -2) = (ulonglong)(uVar20 * 4);
          puVar10[-4] = 0x4079b119;
          puVar10[-3] = 1;
          uVar4 = FUN_1407520ca();
          puVar10 = (uint *)(ulonglong)((int)(puVar10 + -2) + 4);
          uVar8 = (ulonglong)uVar4;
          puVar9 = (uint *)(ulonglong)*puVar10;
          uVar3 = puVar9[2];
          if (uVar3 != 0) {
            *(ulonglong *)(puVar10 + -2) = (ulonglong)(*puVar9 << 2);
            *(ulonglong *)(puVar10 + -4) = (ulonglong)uVar3;
            *(ulonglong *)(puVar10 + -6) = uVar8;
            puVar10[-8] = 0x4079b135;
            puVar10[-7] = 1;
            FUN_1408b31a0();
            puVar11 = (uint *)(ulonglong)((int)(puVar10 + -6) + 0xc);
            *(undefined8 *)(puVar11 + -2) = *(undefined8 *)((ulonglong)*puVar11 + 8);
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar11 + -4) = &UNK_14079b143;
            FUN_14075219b();
          }
          puVar9[2] = uVar4;
          puVar9[1] = uVar20;
          uVar20 = *puVar9;
        }
        else {
          uVar8 = (ulonglong)puVar9[2];
        }
        *(uint *)(uVar8 + (ulonglong)uVar20 * 4) = uVar7 - *(int *)((longlong)puVar10 + 0x20);
        *puVar9 = *puVar9 + 1;
        iVar18 = *(int *)((longlong)puVar10 + 0x28);
        uVar20 = *(uint *)((longlong)puVar10 + 0x24);
      }
      *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uVar20 - uVar7);
      *(undefined8 *)((longlong)puVar10 + -0x10) = 10;
      *(ulonglong *)((longlong)puVar10 + -0x18) = (ulonglong)uVar7;
      *(undefined8 *)((longlong)puVar10 + -0x20) = 0x14079b173;
      iVar5 = FUN_1408b1400();
      puVar10 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x18) + 0xc);
      uVar7 = iVar5 + 1;
      if (iVar5 == 0) {
        uVar7 = uVar20;
      }
    } while (in_R11D < unaff_R14D);
  }
  else {
    uVar8 = 0;
    if (uVar20 <= uVar7) goto LAB_14079b350;
    puVar10[2] = _DAT_150b388ef;
    do {
      if (-1 < iVar18) {
        puVar9 = (uint *)(ulonglong)*puVar10;
        uVar20 = *puVar9;
        if (uVar20 == puVar9[1]) {
          if (uVar20 == 0) {
            uVar3 = 8;
          }
          else {
            uVar3 = (int)uVar20 / 2 + uVar20;
          }
          if ((int)unaff_R14D < (int)uVar3) {
            uVar20 = uVar3;
          }
          *(ulonglong *)(puVar10 + -2) = (ulonglong)(uVar20 * 4);
          puVar10[-4] = 0x4079b1eb;
          puVar10[-3] = 1;
          uVar4 = FUN_1407520ca();
          puVar10 = (uint *)(ulonglong)((int)(puVar10 + -2) + 4);
          uVar8 = (ulonglong)uVar4;
          puVar9 = (uint *)(ulonglong)*puVar10;
          uVar3 = puVar9[2];
          if (uVar3 != 0) {
            *(ulonglong *)(puVar10 + -2) = (ulonglong)(*puVar9 << 2);
            *(ulonglong *)(puVar10 + -4) = (ulonglong)uVar3;
            *(ulonglong *)(puVar10 + -6) = uVar8;
            puVar10[-8] = 0x4079b207;
            puVar10[-7] = 1;
            FUN_1408b31a0();
            puVar12 = (uint *)(ulonglong)((int)(puVar10 + -6) + 0xc);
            *(undefined8 *)(puVar12 + -2) = *(undefined8 *)((ulonglong)*puVar12 + 8);
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar12 + -4) = &UNK_14079b215;
            FUN_14075219b();
          }
          puVar9[2] = uVar4;
          puVar9[1] = uVar20;
          uVar20 = *puVar9;
        }
        else {
          uVar8 = (ulonglong)puVar9[2];
        }
        *(uint *)(uVar8 + (ulonglong)uVar20 * 4) = uVar7 - *(int *)((longlong)puVar10 + 0x20);
        *puVar9 = *puVar9 + 1;
        iVar18 = *(int *)((longlong)puVar10 + 0x28);
        uVar20 = *(uint *)((longlong)puVar10 + 0x24);
      }
      uVar1 = *(undefined4 *)((ulonglong)*(uint *)((longlong)puVar10 + 8) + 0x1228);
      uVar2 = *(undefined4 *)((ulonglong)*(uint *)((longlong)puVar10 + 8) + 0x1220);
      puVar13 = (undefined4 *)(ulonglong)((int)puVar10 - 0x18);
      puVar13[4] = puVar13[7];
      puVar13[3] = uVar20;
      puVar13[2] = uVar7;
      puVar13[1] = uVar1;
      *puVar13 = uVar2;
      puVar13[5] = 2;
      *(undefined8 *)(puVar13 + -2) = 0x14079b277;
      pcVar6 = (char *)FUN_1407eb1a6();
      uVar7 = (uint)(*pcVar6 == '\n') + (int)pcVar6;
    } while (in_R11D < unaff_R14D);
  }
  uVar8 = 0;
  param_2 = (uint *)(ulonglong)*puVar10;
LAB_14079b350:
  if (*(uint *)((longlong)puVar10 + 0x2c) != 0) {
    *(uint *)(ulonglong)*(uint *)((longlong)puVar10 + 0x2c) = uVar7;
    uVar20 = uVar7;
  }
  uVar7 = *param_2;
  if (uVar7 == param_2[1]) {
    *(int *)((longlong)puVar10 + 4) = (int)uVar8;
    if (uVar7 == 0) {
      uVar3 = 8;
    }
    else {
      uVar3 = (int)uVar7 / 2 + uVar7;
    }
    uVar4 = uVar7 + 1;
    if ((int)(uVar7 + 1) < (int)uVar3) {
      uVar4 = uVar3;
    }
    *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uVar4 * 4);
    *(undefined8 *)((longlong)puVar10 + -0x10) = 0x14079b3a1;
    uVar3 = FUN_1407520ca();
    puVar10 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -8) + 4);
    uVar21 = (ulonglong)uVar3;
    param_2 = (uint *)(ulonglong)*puVar10;
    uVar7 = param_2[2];
    if (uVar7 != 0) {
      *(ulonglong *)(puVar10 + -2) = (ulonglong)(*param_2 << 2);
      *(ulonglong *)(puVar10 + -4) = (ulonglong)uVar7;
      *(ulonglong *)(puVar10 + -6) = uVar21;
      puVar10[-8] = 0x4079b3bd;
      puVar10[-7] = 1;
      FUN_1408b31a0();
      puVar15 = (uint *)(ulonglong)((int)(puVar10 + -6) + 0xc);
      *(undefined8 *)(puVar15 + -2) = *(undefined8 *)((ulonglong)*puVar15 + 8);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar15 + -4) = &UNK_14079b3cb;
      FUN_14075219b();
    }
    param_2[2] = uVar3;
    param_2[1] = uVar4;
    uVar7 = *param_2;
    uVar8 = (ulonglong)puVar10[1];
  }
  else {
    uVar21 = (ulonglong)param_2[2];
  }
  *(undefined4 *)(uVar21 + (ulonglong)uVar7 * 4) = 0;
  *param_2 = *param_2 + 1;
  uVar19 = 0;
  iVar5 = uVar20 - *(uint *)((longlong)puVar10 + 0x20);
  if (((*(uint *)((longlong)puVar10 + 0x20) <= uVar20 && iVar5 != 0) &&
      ((char)uVar8 == '\0' && *(char *)((ulonglong)uVar7 - 1) == '\n')) && (uVar19 = 1, -1 < iVar18)
     ) {
    uVar20 = *param_2;
    if (uVar20 == param_2[1]) {
      if (uVar20 == 0) {
        uVar7 = 8;
      }
      else {
        uVar7 = (int)uVar20 / 2 + uVar20;
      }
      uVar3 = uVar20 + 1;
      if ((int)(uVar20 + 1) < (int)uVar7) {
        uVar3 = uVar7;
      }
      *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uVar3 * 4);
      *(undefined8 *)((longlong)puVar10 + -0x10) = 0x14079b44b;
      uVar7 = FUN_1407520ca(uVar7,param_2,unaff_R14D);
      puVar16 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -8) + 4);
      uVar8 = (ulonglong)uVar7;
      param_2 = (uint *)(ulonglong)*puVar16;
      uVar20 = param_2[2];
      if (uVar20 != 0) {
        *(ulonglong *)(puVar16 + -2) = (ulonglong)(*param_2 << 2);
        *(ulonglong *)(puVar16 + -4) = (ulonglong)uVar20;
        *(ulonglong *)(puVar16 + -6) = uVar8;
        puVar16[-8] = 0x4079b467;
        puVar16[-7] = 1;
        FUN_1408b31a0();
        puVar17 = (uint *)(ulonglong)((int)(puVar16 + -6) + 0xc);
        *(undefined8 *)(puVar17 + -2) = *(undefined8 *)((ulonglong)*puVar17 + 8);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -4) = &UNK_14079b475;
        FUN_14075219b();
      }
      param_2[2] = uVar7;
      param_2[1] = uVar3;
      uVar20 = *param_2;
    }
    else {
      uVar8 = (ulonglong)param_2[2];
    }
    *(int *)(uVar8 + (ulonglong)uVar20 * 4) = iVar5;
    *param_2 = *param_2 + 1;
  }
  return uVar19;
}

