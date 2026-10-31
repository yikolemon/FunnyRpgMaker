/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140128e24 */

void FUN_140128e24(undefined8 param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  short *psVar5;
  uint uVar6;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_128;
  lVar3 = FUN_140121578();
  lVar4 = FUN_140121578();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_14012907c(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_108,0x78);
  uVar6 = 0;
  if (iVar2 == 0) {
    *puVar1 = 0;
  }
  else {
    iVar2 = FUN_1401156b0(*(undefined8 *)(lVar3 + 0xa0),local_108);
    if (iVar2 == 0) {
      psVar5 = &DAT_140168fa8;
      do {
        if ((short)Locale == *psVar5) goto LAB_140128ee3;
        uVar6 = uVar6 + 1;
        psVar5 = psVar5 + 1;
      } while (uVar6 < 10);
      *puVar1 = *puVar1 | 4;
      puVar1[2] = Locale;
      puVar1[1] = Locale;
    }
  }
LAB_140128ee3:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_128);
}

