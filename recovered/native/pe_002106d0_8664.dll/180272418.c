/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180272418 */

undefined8 FUN_180272418(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  
  lVar1 = 0;
  lVar5 = 3;
  if (DAT_180420d78 == 0) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = 3;
    if (2 < DAT_180420d78) goto LAB_180272455;
  }
  DAT_180420d78 = iVar4;
LAB_180272455:
  DAT_180420d80 = _calloc_base((longlong)DAT_180420d78,8);
  FUN_180290e40(0);
  if (DAT_180420d80 == 0) {
    DAT_180420d78 = 3;
    DAT_180420d80 = _calloc_base(3,8);
    FUN_180290e40(0);
    if (DAT_180420d80 == 0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_180415cb8;
  puVar6 = &DAT_180415ca0;
  lVar2 = lVar1;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + 0x30),4000,0);
    *(undefined **)(lVar1 + DAT_180420d80) = puVar6;
    if (*(longlong *)((&DAT_180421400)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
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

