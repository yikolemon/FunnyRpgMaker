/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a83c0 */

void FUN_1400a83c0(ushort *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  bool bVar3;
  uint Locale;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  short *psVar9;
  undefined7 extraout_var;
  uint uVar10;
  undefined1 auStack_138 [32];
  WCHAR local_118 [120];
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_138;
  lVar5 = FUN_1400a1528();
  plVar1 = (longlong *)(lVar5 + 0x98);
  lVar6 = FUN_1400a1528();
  puVar2 = *(uint **)(lVar6 + 0x3a0);
  Locale = FUN_1400a89fc(param_1);
  iVar4 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar5 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_118,0x78);
  if (iVar4 != 0) {
    iVar4 = FUN_140096a70(*(WCHAR **)(lVar5 + 0xa0),local_118);
    lVar6 = -1;
    if (iVar4 == 0) {
      iVar4 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                             local_118,0x78);
      if (iVar4 == 0) goto LAB_1400a85d3;
      iVar4 = FUN_140096a70((WCHAR *)*plVar1,local_118);
      if (iVar4 == 0) {
        puVar2[1] = Locale;
        *puVar2 = *puVar2 | 0x304;
LAB_1400a8505:
        puVar2[2] = Locale;
      }
      else if ((*puVar2 & 2) == 0) {
        if ((*(int *)(lVar5 + 0xac) == 0) ||
           (uVar7 = FUN_1400b1e30((WCHAR *)*plVar1,local_118,(longlong)*(int *)(lVar5 + 0xac)),
           (int)uVar7 != 0)) {
          if ((*puVar2 & 1) == 0) {
            uVar10 = 0;
            psVar9 = &DAT_140110508;
            do {
              if ((short)Locale == *psVar9) goto LAB_1400a8508;
              uVar10 = uVar10 + 1;
              psVar9 = psVar9 + 1;
            } while (uVar10 < 10);
            *puVar2 = *puVar2 | 1;
            goto LAB_1400a8505;
          }
        }
        else {
          *puVar2 = *puVar2 | 2;
          lVar8 = -1;
          puVar2[2] = Locale;
          do {
            lVar8 = lVar8 + 1;
          } while (*(short *)(*plVar1 + lVar8 * 2) != 0);
          if ((int)lVar8 == *(int *)(lVar5 + 0xac)) {
            puVar2[1] = Locale;
          }
        }
      }
    }
LAB_1400a8508:
    if ((*puVar2 & 0x300) == 0x300) goto LAB_1400a85db;
    iVar4 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                           local_118,0x78);
    if (iVar4 != 0) {
      iVar4 = FUN_140096a70((WCHAR *)*plVar1,local_118);
      if (iVar4 == 0) {
        uVar10 = *puVar2;
        *puVar2 = uVar10 | 0x200;
        if ((*(int *)(lVar5 + 0xb0) == 0) && (*(int *)(lVar5 + 0xac) != 0)) {
          do {
            lVar6 = lVar6 + 1;
          } while (*(short *)(*plVar1 + lVar6 * 2) != 0);
          if ((int)lVar6 == *(int *)(lVar5 + 0xac)) {
            iVar4 = 1;
            goto LAB_1400a85ac;
          }
        }
        *puVar2 = uVar10 | 0x300;
      }
      else {
        if (((*(int *)(lVar5 + 0xb0) != 0) || (*(int *)(lVar5 + 0xac) == 0)) ||
           (iVar4 = FUN_140096a70((WCHAR *)*plVar1,local_118), iVar4 != 0)) goto LAB_1400a85db;
        iVar4 = 0;
LAB_1400a85ac:
        bVar3 = FUN_1400a8940(Locale,iVar4);
        if ((int)CONCAT71(extraout_var,bVar3) == 0) goto LAB_1400a85db;
        *puVar2 = *puVar2 | 0x100;
      }
      if (puVar2[1] == 0) {
        puVar2[1] = Locale;
      }
      goto LAB_1400a85db;
    }
  }
LAB_1400a85d3:
  *puVar2 = 0;
LAB_1400a85db:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_138);
}

