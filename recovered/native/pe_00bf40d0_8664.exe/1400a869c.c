/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a869c */

void FUN_1400a869c(ushort *param_1)

{
  uint *puVar1;
  bool bVar2;
  uint Locale;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined7 extraout_var;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_128;
  lVar4 = FUN_1400a1528();
  lVar5 = FUN_1400a1528();
  puVar1 = *(uint **)(lVar5 + 0x3a0);
  Locale = FUN_1400a89fc(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_108,0x78);
  if (iVar3 == 0) {
    *puVar1 = 0;
    goto LAB_1400a877f;
  }
  iVar3 = FUN_140096a70(*(WCHAR **)(lVar4 + 0x98),local_108);
  if (iVar3 == 0) {
    if (*(int *)(lVar4 + 0xb0) == 0) {
      iVar3 = 1;
      goto LAB_1400a875e;
    }
  }
  else {
    if (((*(int *)(lVar4 + 0xb0) != 0) || (*(int *)(lVar4 + 0xac) == 0)) ||
       (iVar3 = FUN_140096a70(*(WCHAR **)(lVar4 + 0x98),local_108), iVar3 != 0)) goto LAB_1400a877f;
    iVar3 = 0;
LAB_1400a875e:
    bVar2 = FUN_1400a8940(Locale,iVar3);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) goto LAB_1400a877f;
  }
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
LAB_1400a877f:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_128);
}

