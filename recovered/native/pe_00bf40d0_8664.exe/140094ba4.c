/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140094ba4 */

void FUN_140094ba4(longlong param_1,int param_2,wchar_t *param_3)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  ushort *puVar5;
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
  UINT local_218 [4];
  ushort local_208 [136];
  short local_f8 [88];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_248;
  iVar12 = 0;
  if (param_2 != 0) {
    if (param_3 != (wchar_t *)0x0) {
      FUN_140094650(param_1,param_2,(ushort *)param_3);
    }
    goto LAB_140094d4c;
  }
  if (param_3 != (wchar_t *)0x0) {
    iVar11 = iVar12;
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        puVar5 = FUN_1400a7150((ushort *)param_3,(ushort *)&DAT_14011c978);
        if (((puVar5 == (ushort *)0x0) ||
            (_MaxCount = (longlong)puVar5 - (longlong)param_3 >> 1, _MaxCount == 0)) ||
           (*puVar5 == 0x3b)) goto LAB_140094d4c;
        iVar12 = 1;
        ppuVar14 = &PTR_u_LC_COLLATE_14010cdf8;
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
        } while ((longlong)ppuVar14 < 0x14010ce59);
        puVar5 = puVar5 + 1;
        lVar7 = FUN_1400a70b0(puVar5,(ushort *)&DAT_14011c980);
        if ((lVar7 == 0) && (*puVar5 != 0x3b)) goto LAB_140094d4c;
        if (iVar12 < 6) {
          iVar4 = FUN_1400a6f60((short *)local_208,0x83,(longlong)puVar5,lVar7);
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (ulonglong)(lVar7 * 2)) {
            FUN_14008b960();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_208[lVar7] = 0;
          lVar8 = FUN_140094650(param_1,iVar12,local_208);
          if (lVar8 != 0) {
            iVar11 = iVar11 + 1;
          }
        }
      } while ((puVar5[lVar7] != 0) &&
              (param_3 = (wchar_t *)(puVar5 + lVar7 + 1), *param_3 != L'\0'));
    }
    else {
      local_218[0] = 0;
      lVar7 = FUN_140093f5c((ushort *)param_3,(short *)local_208,0x83,local_f8,0x55,local_218);
      if (lVar7 == 0) goto LAB_140094d4c;
      plVar13 = (longlong *)(param_1 + 0x28);
      iVar4 = iVar12;
      iVar9 = 1;
      do {
        iVar10 = iVar9;
        if (iVar4 != 0) {
          puVar5 = local_208;
          lVar7 = *plVar13 - (longlong)puVar5;
          do {
            uVar1 = *puVar5;
            uVar2 = *(ushort *)((longlong)puVar5 + lVar7);
            if (uVar1 != uVar2) break;
            puVar5 = puVar5 + 1;
          } while (uVar2 != 0);
          if ((uVar1 == uVar2) ||
             (lVar7 = FUN_140094650(param_1,iVar4,local_208), iVar10 = iVar12, lVar7 != 0)) {
            iVar11 = iVar11 + 1;
            iVar10 = iVar9;
          }
        }
        iVar4 = iVar4 + 1;
        plVar13 = plVar13 + 4;
        iVar9 = iVar10;
      } while (iVar4 < 6);
      if (iVar10 != 0) goto LAB_140094d47;
    }
    if (iVar11 == 0) goto LAB_140094d4c;
  }
LAB_140094d47:
  FUN_1400949b8(param_1);
LAB_140094d4c:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_248);
}

