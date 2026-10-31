/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019316c */

undefined8 FUN_14019316c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  
  lVar1 = 0;
  lVar5 = 3;
  if (DAT_140f32718 == 0) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = 3;
    if (2 < DAT_140f32718) goto LAB_1401931a9;
  }
  DAT_140f32718 = iVar4;
LAB_1401931a9:
  DAT_140f32720 = _calloc_base((longlong)DAT_140f32718,8);
  FUN_1401aea30(0);
  if (DAT_140f32720 == 0) {
    DAT_140f32718 = 3;
    DAT_140f32720 = _calloc_base(3,8);
    FUN_1401aea30(0);
    if (DAT_140f32720 == 0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_140f29458;
  puVar6 = &DAT_140f29440;
  lVar2 = lVar1;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + 0x30),4000,0);
    *(undefined **)(lVar1 + DAT_140f32720) = puVar6;
    if (*(longlong *)((&DAT_140f32db0)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
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

