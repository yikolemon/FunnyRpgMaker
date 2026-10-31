/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011120b */

void FUN_18011120b(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  lVar1 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 0x14) >> 0x10 & 1) == 0) {
    if (((((*(uint *)(param_1 + 0x14) >> 0x1a & 1) == 0) &&
         (param_1 != *(longlong *)(param_1 + 0x418))) && (param_2 == '\0')) &&
       (*(int *)(param_1 + 0x450) != 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if ((*(byte *)(DAT_180419160 + 0x2acc) & 0x10) != 0) {
      FUN_1800fdfea("[nav] NavInitRequest: from NavInitWindow(), init_for_nav=%d, window=\"%s\", layer=%d\n"
                    ,cVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(DAT_180419160 + 0x220c));
    }
    if (cVar3 != '\0') {
      local_38 = 0;
      uStack_30 = 0;
      FUN_18011bfef(0,*(undefined4 *)(lVar1 + 0x220c),*(undefined4 *)(param_1 + 0x488));
      *(undefined2 *)(lVar1 + 0x2262) = 1;
      *(undefined4 *)(lVar1 + 0x2270) = 0;
      uVar2 = 1;
      if (*(char *)(DAT_180419160 + 0x22a1) == '\0') {
        uVar2 = *(undefined1 *)(DAT_180419160 + 0x2262);
      }
      *(undefined1 *)(DAT_180419160 + 0x2261) = uVar2;
      if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
        return;
      }
      goto LAB_18011132b;
    }
    *(undefined4 *)(lVar1 + 0x21f8) = *(undefined4 *)(param_1 + 0x450);
  }
  else {
    *(undefined4 *)(DAT_180419160 + 0x21f8) = 0;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    FUN_180116dc0(*(undefined4 *)(param_1 + 0x488));
    return;
  }
LAB_18011132b:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

