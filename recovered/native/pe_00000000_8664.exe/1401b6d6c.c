/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b6d6c */

void FUN_1401b6d6c(undefined8 param_1)

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
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  lVar3 = FUN_1401aecc8();
  lVar4 = FUN_1401aecc8();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_1401b70cc(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_108,0x78);
  if (iVar2 == 0) {
    *puVar1 = 0;
    goto LAB_1401b6e4f;
  }
  iVar2 = FUN_1401a0500(*(undefined8 *)(lVar3 + 0x98),local_108);
  if (iVar2 == 0) {
    if (*(int *)(lVar3 + 0xb0) == 0) {
      uVar5 = 1;
      goto LAB_1401b6e2e;
    }
  }
  else {
    if (((*(int *)(lVar3 + 0xb0) != 0) || (*(int *)(lVar3 + 0xac) == 0)) ||
       (iVar2 = FUN_1401a0500(*(undefined8 *)(lVar3 + 0x98),local_108), iVar2 != 0))
    goto LAB_1401b6e4f;
    uVar5 = 0;
LAB_1401b6e2e:
    iVar2 = FUN_1401b7010(Locale,uVar5,puVar1);
    if (iVar2 == 0) goto LAB_1401b6e4f;
  }
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
LAB_1401b6e4f:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_128);
}

