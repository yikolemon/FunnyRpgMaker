/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026f34c */

undefined1 * FUN_18026f34c(__crt_locale_pointers *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_38;
  longlong local_30;
  char local_20;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,param_1);
  lVar9 = 0;
  lVar8 = 0xc;
  plVar5 = (longlong *)(*(longlong *)(local_30 + 0x120) + 0x70);
  do {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(plVar5[0xc] + lVar4) != '\0');
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(*plVar5 + lVar2) != '\0');
    plVar5 = plVar5 + 1;
    lVar9 = lVar9 + 2 + lVar2 + lVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar3 = (undefined1 *)_malloc_base(lVar9 + 1);
  if (puVar3 != (undefined1 *)0x0) {
    uVar7 = 0;
    puVar6 = puVar3;
    do {
      *puVar6 = 0x3a;
      iVar1 = FUN_1802908f0();
      if (iVar1 != 0) {
LAB_18026f48c:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      lVar8 = -1;
      do {
        lVar9 = lVar8;
        lVar8 = lVar9 + 1;
      } while (puVar6[lVar9 + 2] != '\0');
      puVar6 = puVar6 + lVar9 + 2;
      *puVar6 = 0x3a;
      iVar1 = FUN_1802908f0();
      if (iVar1 != 0) goto LAB_18026f48c;
      lVar8 = -1;
      do {
        lVar9 = lVar8;
        lVar8 = lVar9 + 1;
      } while (puVar6[lVar9 + 2] != '\0');
      puVar6 = puVar6 + lVar9 + 2;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xc);
    *puVar6 = 0;
  }
  FUN_180290e40(0);
  if (local_20 != '\0') {
    *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
  }
  return puVar3;
}

