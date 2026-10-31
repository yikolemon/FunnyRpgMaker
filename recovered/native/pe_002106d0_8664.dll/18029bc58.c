/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029bc58 */

void FUN_18029bc58(undefined8 param_1)

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
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_128;
  lVar3 = FUN_1802910d8();
  lVar4 = FUN_1802910d8();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_18029bfb8(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_108,0x78);
  if (iVar2 == 0) {
    *puVar1 = 0;
    goto LAB_18029bd3b;
  }
  iVar2 = FUN_180280970(*(undefined8 *)(lVar3 + 0x98),local_108);
  if (iVar2 == 0) {
    if (*(int *)(lVar3 + 0xb0) == 0) {
      uVar5 = 1;
      goto LAB_18029bd1a;
    }
  }
  else {
    if (((*(int *)(lVar3 + 0xb0) != 0) || (*(int *)(lVar3 + 0xac) == 0)) ||
       (iVar2 = FUN_180280970(*(undefined8 *)(lVar3 + 0x98),local_108), iVar2 != 0))
    goto LAB_18029bd3b;
    uVar5 = 0;
LAB_18029bd1a:
    iVar2 = FUN_18029befc(Locale,uVar5,puVar1);
    if (iVar2 == 0) goto LAB_18029bd3b;
  }
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
LAB_18029bd3b:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_128);
}

