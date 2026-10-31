/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140128d1c */

void FUN_140128d1c(undefined8 param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_128;
  lVar3 = FUN_140121578();
  lVar4 = FUN_140121578();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_14012907c(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_108,0x78);
  if (iVar2 == 0) {
    *puVar1 = 0;
    goto LAB_140128dff;
  }
  iVar2 = FUN_1401156b0(*(undefined8 *)(lVar3 + 0x98),local_108);
  if (iVar2 == 0) {
    if (*(int *)(lVar3 + 0xb0) == 0) {
      uVar5 = 1;
      goto LAB_140128dde;
    }
  }
  else {
    if (((*(int *)(lVar3 + 0xb0) != 0) || (*(int *)(lVar3 + 0xac) == 0)) ||
       (iVar2 = FUN_1401156b0(*(undefined8 *)(lVar3 + 0x98),local_108), iVar2 != 0))
    goto LAB_140128dff;
    uVar5 = 0;
LAB_140128dde:
    iVar2 = FUN_140128fc0(Locale,uVar5,puVar1);
    if (iVar2 == 0) goto LAB_140128dff;
  }
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
LAB_140128dff:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_128);
}

