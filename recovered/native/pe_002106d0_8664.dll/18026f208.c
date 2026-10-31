/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026f208 */

undefined1 * FUN_18026f208(__crt_locale_pointers *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong local_38;
  longlong local_30;
  char local_20;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,param_1);
  lVar7 = 0;
  uVar4 = 0;
  do {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)(*(longlong *)(*(longlong *)(local_30 + 0x120) + 0x38 + uVar4 * 8) + lVar5) !=
             '\0');
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(*(longlong *)(*(longlong *)(local_30 + 0x120) + uVar4 * 8) + lVar2) != '\0');
    uVar4 = uVar4 + 1;
    lVar7 = lVar7 + 2 + lVar2 + lVar5;
  } while (uVar4 < 7);
  puVar3 = (undefined1 *)_malloc_base(lVar7 + 1);
  if (puVar3 != (undefined1 *)0x0) {
    uVar4 = 0;
    puVar6 = puVar3;
    do {
      *puVar6 = 0x3a;
      iVar1 = FUN_1802908f0();
      if (iVar1 != 0) {
LAB_18026f335:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      lVar7 = -1;
      do {
        lVar5 = lVar7;
        lVar7 = lVar5 + 1;
      } while (puVar6[lVar5 + 2] != '\0');
      puVar6 = puVar6 + lVar5 + 2;
      *puVar6 = 0x3a;
      iVar1 = FUN_1802908f0();
      if (iVar1 != 0) goto LAB_18026f335;
      lVar7 = -1;
      do {
        lVar5 = lVar7;
        lVar7 = lVar5 + 1;
      } while (puVar6[lVar5 + 2] != '\0');
      puVar6 = puVar6 + lVar5 + 2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 7);
    *puVar6 = 0;
  }
  FUN_180290e40(0);
  if (local_20 != '\0') {
    *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
  }
  return puVar3;
}

