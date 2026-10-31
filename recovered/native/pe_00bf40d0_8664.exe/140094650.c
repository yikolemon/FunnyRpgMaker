/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140094650 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140094650(longlong param_1,int param_2,ushort *param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ushort *puVar11;
  short *psVar12;
  short *psVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStackY_368 [32];
  UINT local_328;
  undefined4 local_324;
  undefined *local_320;
  undefined8 local_318;
  short local_308 [136];
  short local_1f8 [88];
  WORD local_148 [128];
  ulonglong local_48;
  short *psVar16;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_368;
  lVar17 = (longlong)param_2;
  local_328 = 0;
  lVar7 = FUN_1400a1528();
  puVar1 = (undefined8 *)(lVar7 + 0x2c8);
  lVar8 = FUN_140093f5c(param_3,local_308,0x83,local_1f8,0x55,&local_328);
  if (lVar8 != 0) {
    psVar12 = local_308;
    lVar18 = lVar17 * 0x20;
    lVar8 = *(longlong *)(lVar18 + 0x28 + param_1) - (longlong)psVar12;
    do {
      sVar2 = *psVar12;
      sVar3 = *(short *)((longlong)psVar12 + lVar8);
      if (sVar2 != sVar3) break;
      psVar12 = psVar12 + 1;
    } while (sVar3 != 0);
    if (sVar2 != sVar3) {
      lVar8 = -1;
      do {
        lVar14 = lVar8;
        lVar8 = lVar14 + 1;
      } while (local_308[lVar8] != 0);
      puVar9 = _malloc_base(lVar8 * 2 + 6);
      if (puVar9 != (undefined4 *)0x0) {
        local_320 = *(undefined **)(lVar18 + 0x28 + param_1);
        local_318 = *(undefined8 *)(param_1 + 0x128 + lVar17 * 8);
        local_324 = *(undefined4 *)(param_1 + 0xc);
        uVar10 = FUN_1400a1b80((short *)(puVar9 + 1),lVar14 + 2,(longlong)local_308);
        psVar12 = (short *)0x0;
        if ((int)uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(lVar18 + 0x28 + param_1) = puVar9 + 1;
        if ((local_308[0] != 0x43) || (psVar13 = psVar12, local_308[1] != 0)) {
          psVar13 = FUN_140093dbc((undefined1 (*) [32])local_1f8);
        }
        *(short **)(param_1 + 0x128 + lVar17 * 8) = psVar13;
        if (param_2 == 2) {
          *(UINT *)(param_1 + 0xc) = local_328;
          uVar10 = *(undefined8 *)(lVar7 + 0x2e8);
          psVar13 = psVar12;
          psVar16 = psVar12;
          do {
            uVar15 = (uint)psVar16;
            if (*(int *)(param_1 + 0xc) == *(int *)(puVar1 + (longlong)psVar13)) {
              if (uVar15 != 0) {
                *puVar1 = puVar1[(int)uVar15];
                puVar1[(int)uVar15] = uVar10;
              }
              break;
            }
            uVar4 = puVar1[(longlong)psVar13];
            uVar15 = uVar15 + 1;
            psVar16 = (short *)(ulonglong)uVar15;
            puVar1[(longlong)psVar13] = uVar10;
            psVar13 = (short *)((longlong)psVar13 + 1);
            uVar10 = uVar4;
          } while ((longlong)psVar13 < 5);
          if (uVar15 == 5) {
            iVar6 = FUN_1400a2b1c((__crt_locale_pointers *)0x0,1,
                                  "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                                  ,0x7f,local_148,*(UINT *)(param_1 + 0xc),1);
            uVar15 = 0;
            if (iVar6 != 0) {
              puVar11 = local_148;
              do {
                uVar15 = (int)psVar12 + 1;
                psVar12 = (short *)(ulonglong)uVar15;
                *puVar11 = *puVar11 & 0x1ff;
                puVar11 = puVar11 + 1;
              } while (uVar15 < 0x7f);
              iVar6 = memcmp(local_148,PTR_DAT_14013bb18,0xfe);
              uVar15 = (uint)(iVar6 == 0);
            }
            *(uint *)(lVar7 + 0x2cc) = uVar15;
            *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0xc);
          }
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar7 + 0x2cc);
        }
        else if (param_2 == 1) {
          *(UINT *)(param_1 + 0x14) = local_328;
        }
        else if (param_2 == 5) {
          *(UINT *)(param_1 + 0x18) = local_328;
        }
        iVar6 = (*(code *)(&PTR_FUN_14010cdf0)[lVar17 * 3])();
        if (iVar6 == 0) {
          if (local_320 != &DAT_14013bd68) {
            piVar5 = *(int **)(lVar17 * 0x20 + 0x38 + param_1);
            LOCK();
            iVar6 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              FUN_1400a1290(*(LPVOID *)(lVar17 * 0x20 + 0x38 + param_1));
              FUN_1400a1290(*(LPVOID *)(lVar17 * 0x20 + 0x30 + param_1));
              FUN_1400a1290(*(LPVOID *)(param_1 + 0x128 + lVar17 * 8));
              *(undefined8 *)(lVar17 * 0x20 + 0x28 + param_1) = 0;
              *(undefined8 *)(param_1 + 0x128 + lVar17 * 8) = 0;
            }
          }
          *puVar9 = 1;
          *(undefined4 **)(lVar17 * 0x20 + 0x38 + param_1) = puVar9;
        }
        else {
          *(undefined **)(lVar17 * 0x20 + 0x28 + param_1) = local_320;
          FUN_1400a1290(*(LPVOID *)(param_1 + 0x128 + lVar17 * 8));
          *(undefined8 *)(param_1 + 0x128 + lVar17 * 8) = local_318;
          FUN_1400a1290(puVar9);
          *(undefined4 *)(param_1 + 0xc) = local_324;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_368);
}

