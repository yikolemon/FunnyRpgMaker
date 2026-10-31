/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140480f84 */

undefined2 * FUN_140480f84(void)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong local_48;
  longlong local_40;
  char local_30;
  longlong lVar4;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_48,(__crt_locale_pointers *)0x0);
  puVar8 = (undefined2 *)0x0;
  lVar10 = 7;
  plVar7 = (longlong *)(*(longlong *)(local_40 + 0x120) + 0x160);
  puVar9 = puVar8;
  do {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(short *)(plVar7[7] + lVar6 * 2) != 0);
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (*(short *)(*plVar7 + lVar3 * 2) != 0);
    plVar7 = plVar7 + 1;
    puVar9 = (undefined2 *)((longlong)puVar9 + lVar6 + lVar4 + 3);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puVar5 = (undefined2 *)_malloc_base((longlong)puVar9 * 2 + 2);
  puVar9 = puVar5;
  if (puVar5 != (undefined2 *)0x0) {
    do {
      *puVar9 = 0x3a;
      iVar2 = FUN_1404a2c50();
      if (iVar2 != 0) {
LAB_1404810fa:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      lVar10 = -1;
      do {
        lVar6 = lVar10;
        lVar10 = lVar6 + 1;
      } while (puVar9[lVar6 + 2] != 0);
      puVar1 = puVar9 + lVar6 + 2;
      *puVar1 = 0x3a;
      iVar2 = FUN_1404a2c50();
      if (iVar2 != 0) goto LAB_1404810fa;
      lVar10 = -1;
      do {
        lVar6 = lVar10;
        lVar10 = lVar6 + 1;
      } while (puVar1[lVar6 + 2] != 0);
      puVar8 = (undefined2 *)((longlong)puVar8 + 1);
      puVar9 = puVar1 + lVar6 + 2;
    } while (puVar8 < (undefined2 *)0x7);
    puVar1[lVar6 + 2] = 0;
    puVar8 = puVar5;
  }
  FUN_1404a2310(0);
  if (local_30 != '\0') {
    *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
  }
  return puVar8;
}

