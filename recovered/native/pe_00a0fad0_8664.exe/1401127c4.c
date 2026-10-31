/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401127c4 */

void FUN_1401127c4(longlong param_1,int param_2,wchar_t *param_3)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  short *psVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  size_t _MaxCount;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined **ppuVar14;
  undefined1 auStackY_248 [32];
  short local_208 [136];
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStackY_248;
  iVar12 = 0;
  if (param_2 != 0) {
    if (param_3 != (wchar_t *)0x0) {
      FUN_140112270();
    }
    goto LAB_14011296c;
  }
  if (param_3 != (wchar_t *)0x0) {
    iVar11 = iVar12;
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        psVar5 = (short *)FUN_1401277d0(param_3,&DAT_140174920);
        if (((psVar5 == (short *)0x0) ||
            (_MaxCount = (longlong)psVar5 - (longlong)param_3 >> 1, _MaxCount == 0)) ||
           (*psVar5 == 0x3b)) goto LAB_14011296c;
        iVar12 = 1;
        ppuVar14 = &PTR_u_LC_COLLATE_140167038;
        do {
          iVar4 = wcsncmp((wchar_t *)*ppuVar14,param_3,_MaxCount);
          if (iVar4 == 0) {
            sVar6 = 0xffffffffffffffff;
            do {
              sVar6 = sVar6 + 1;
            } while (*(short *)(*ppuVar14 + sVar6 * 2) != 0);
            if (_MaxCount == sVar6) break;
          }
          iVar12 = iVar12 + 1;
          ppuVar14 = ppuVar14 + 3;
        } while ((longlong)ppuVar14 < 0x140167099);
        psVar5 = psVar5 + 1;
        lVar7 = FUN_140127730(psVar5,&DAT_140174928);
        if ((lVar7 == 0) && (*psVar5 != 0x3b)) goto LAB_14011296c;
        if (iVar12 < 6) {
          iVar4 = FUN_1401275e0();
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (ulonglong)(lVar7 * 2)) {
            FUN_1400ddce0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_208[lVar7] = 0;
          lVar8 = FUN_140112270(param_1,iVar12,local_208);
          if (lVar8 != 0) {
            iVar11 = iVar11 + 1;
          }
        }
      } while ((psVar5[lVar7] != 0) && (param_3 = psVar5 + lVar7 + 1, *param_3 != L'\0'));
    }
    else {
      lVar7 = FUN_140111b7c(param_3,local_208,0x83,local_f8);
      if (lVar7 == 0) goto LAB_14011296c;
      plVar13 = (longlong *)(param_1 + 0x28);
      iVar4 = iVar12;
      iVar9 = 1;
      do {
        iVar10 = iVar9;
        if (iVar4 != 0) {
          psVar5 = local_208;
          lVar7 = *plVar13 - (longlong)psVar5;
          do {
            sVar1 = *psVar5;
            sVar2 = *(short *)((longlong)psVar5 + lVar7);
            if (sVar1 != sVar2) break;
            psVar5 = psVar5 + 1;
          } while (sVar2 != 0);
          if ((sVar1 == sVar2) ||
             (lVar7 = FUN_140112270(param_1,iVar4,local_208), iVar10 = iVar12, lVar7 != 0)) {
            iVar11 = iVar11 + 1;
            iVar10 = iVar9;
          }
        }
        iVar4 = iVar4 + 1;
        plVar13 = plVar13 + 4;
        iVar9 = iVar10;
      } while (iVar4 < 6);
      if (iVar10 != 0) goto LAB_140112967;
    }
    if (iVar11 == 0) goto LAB_14011296c;
  }
LAB_140112967:
  FUN_1401125d8(param_1);
LAB_14011296c:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStackY_248);
}

