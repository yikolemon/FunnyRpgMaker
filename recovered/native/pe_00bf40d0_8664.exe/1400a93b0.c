/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a93b0 */

undefined8 * FUN_1400a93b0(void)

{
  WCHAR WVar1;
  ulonglong uVar2;
  LPWCH pWVar3;
  longlong lVar4;
  undefined8 *puVar6;
  undefined8 *puVar7;
  WCHAR *pWVar8;
  longlong lVar5;
  
  pWVar3 = GetEnvironmentStringsW();
  puVar7 = (undefined8 *)0x0;
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    uVar2 = ((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1) * 2;
    puVar6 = _malloc_base(uVar2);
    puVar7 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1400b3550(puVar6,(undefined8 *)pWVar3,uVar2);
      puVar7 = puVar6;
    }
    FUN_1400a1290((LPVOID)0x0);
    FreeEnvironmentStringsW(pWVar3);
  }
  return puVar7;
}

