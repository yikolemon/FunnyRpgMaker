/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b6e74 */

void FUN_1401b6e74(undefined8 param_1)

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
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  lVar3 = FUN_1401aecc8();
  lVar4 = FUN_1401aecc8();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_1401b70cc(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_108,0x78);
  uVar6 = 0;
  if (iVar2 == 0) {
    *puVar1 = 0;
  }
  else {
    iVar2 = FUN_1401a0500(*(undefined8 *)(lVar3 + 0xa0),local_108);
    if (iVar2 == 0) {
      psVar5 = &DAT_140eb8058;
      do {
        if ((short)Locale == *psVar5) goto LAB_1401b6f33;
        uVar6 = uVar6 + 1;
        psVar5 = psVar5 + 1;
      } while (uVar6 < 10);
      *puVar1 = *puVar1 | 4;
      puVar1[2] = Locale;
      puVar1[1] = Locale;
    }
  }
LAB_1401b6f33:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_128);
}

