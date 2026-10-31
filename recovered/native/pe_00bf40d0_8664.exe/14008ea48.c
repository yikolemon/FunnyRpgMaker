/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008ea48 */

undefined8 FUN_14008ea48(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  
  lVar1 = 0;
  lVar5 = 3;
  if (DAT_140142bd8 == 0) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = 3;
    if (2 < DAT_140142bd8) goto LAB_14008ea85;
  }
  DAT_140142bd8 = iVar4;
LAB_14008ea85:
  DAT_140142be0 = _calloc_base((longlong)DAT_140142bd8,8);
  FUN_1400a1290((LPVOID)0x0);
  if (DAT_140142be0 == (LPVOID)0x0) {
    DAT_140142bd8 = 3;
    DAT_140142be0 = _calloc_base(3,8);
    FUN_1400a1290((LPVOID)0x0);
    if (DAT_140142be0 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_14013ba18;
  puVar6 = &DAT_14013ba00;
  lVar2 = lVar1;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_140142be0) = puVar6;
    if (*(longlong *)((&DAT_1401433a0)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar6 = puVar6 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}

