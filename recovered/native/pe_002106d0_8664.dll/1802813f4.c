/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802813f4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802813f4(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  short *psVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStackY_368 [32];
  short local_308 [136];
  undefined1 local_1f8 [176];
  ushort local_148 [128];
  ulonglong local_48;
  ulonglong uVar19;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStackY_368;
  lVar20 = (longlong)param_2;
  lVar10 = FUN_1802910d8();
  puVar1 = (undefined8 *)(lVar10 + 0x2c8);
  lVar11 = FUN_180280d00(param_3,local_308,0x83,local_1f8);
  if (lVar11 != 0) {
    psVar14 = local_308;
    lVar21 = lVar20 * 0x20;
    lVar11 = *(longlong *)(lVar21 + 0x28 + param_1) - (longlong)psVar14;
    do {
      sVar2 = *psVar14;
      sVar3 = *(short *)((longlong)psVar14 + lVar11);
      if (sVar2 != sVar3) break;
      psVar14 = psVar14 + 1;
    } while (sVar3 != 0);
    if (sVar2 != sVar3) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (local_308[lVar11] != 0);
      puVar12 = (undefined4 *)_malloc_base(lVar11 * 2 + 6);
      if (puVar12 != (undefined4 *)0x0) {
        puVar5 = *(undefined **)(lVar21 + 0x28 + param_1);
        uVar6 = *(undefined8 *)(param_1 + 0x128 + lVar20 * 8);
        uVar4 = *(undefined4 *)(param_1 + 0xc);
        iVar9 = FUN_180291780();
        uVar16 = 0;
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(lVar21 + 0x28 + param_1) = puVar12 + 1;
        if ((local_308[0] != 0x43) || (uVar17 = uVar16, local_308[1] != 0)) {
          uVar17 = FUN_180280bcc(local_1f8);
        }
        *(ulonglong *)(param_1 + 0x128 + lVar20 * 8) = uVar17;
        if (param_2 == 2) {
          *(undefined4 *)(param_1 + 0xc) = 0;
          uVar15 = *(undefined8 *)(lVar10 + 0x2e8);
          uVar17 = uVar16;
          uVar19 = uVar16;
          do {
            uVar18 = (uint)uVar19;
            if (*(int *)(param_1 + 0xc) == *(int *)(puVar1 + uVar17)) {
              if (uVar18 != 0) {
                *puVar1 = puVar1[(int)uVar18];
                puVar1[(int)uVar18] = uVar15;
              }
              break;
            }
            uVar7 = puVar1[uVar17];
            uVar18 = uVar18 + 1;
            uVar19 = (ulonglong)uVar18;
            puVar1[uVar17] = uVar15;
            uVar17 = uVar17 + 1;
            uVar15 = uVar7;
          } while ((longlong)uVar17 < 5);
          if (uVar18 == 5) {
            iVar9 = FUN_18029358c(0,1,&DAT_180350040);
            uVar18 = 0;
            if (iVar9 != 0) {
              puVar13 = local_148;
              do {
                uVar18 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar18;
                *puVar13 = *puVar13 & 0x1ff;
                puVar13 = puVar13 + 1;
              } while (uVar18 < 0x7f);
              iVar9 = memcmp(local_148,PTR_DAT_180415dc0,0xfe);
              uVar18 = (uint)(iVar9 == 0);
            }
            *(uint *)(lVar10 + 0x2cc) = uVar18;
            *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0xc);
          }
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar10 + 0x2cc);
        }
        else if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        else if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
        iVar9 = (*(code *)(&PTR_LAB_1803500d0)[lVar20 * 3])();
        if (iVar9 == 0) {
          if (puVar5 != &DAT_180416008) {
            piVar8 = *(int **)(lVar20 * 0x20 + 0x38 + param_1);
            LOCK();
            iVar9 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              FUN_180290e40(*(undefined8 *)(lVar20 * 0x20 + 0x38 + param_1));
              FUN_180290e40(*(undefined8 *)(lVar20 * 0x20 + 0x30 + param_1));
              FUN_180290e40(*(undefined8 *)(param_1 + 0x128 + lVar20 * 8));
              *(undefined8 *)(lVar20 * 0x20 + 0x28 + param_1) = 0;
              *(undefined8 *)(param_1 + 0x128 + lVar20 * 8) = 0;
            }
          }
          *puVar12 = 1;
          *(undefined4 **)(lVar20 * 0x20 + 0x38 + param_1) = puVar12;
        }
        else {
          *(undefined **)(lVar20 * 0x20 + 0x28 + param_1) = puVar5;
          FUN_180290e40(*(undefined8 *)(param_1 + 0x128 + lVar20 * 8));
          *(undefined8 *)(param_1 + 0x128 + lVar20 * 8) = uVar6;
          FUN_180290e40(puVar12);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStackY_368);
}

