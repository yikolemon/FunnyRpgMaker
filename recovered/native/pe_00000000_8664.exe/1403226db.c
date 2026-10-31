/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403226db */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403226db(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  lVar1 = DAT_14062a630;
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 0x14) >> 0x10 & 1) == 0) {
    if (((((*(uint *)(param_1 + 0x14) >> 0x1a & 1) == 0) &&
         (param_1 != *(longlong *)(param_1 + 0x418))) && (param_2 == '\0')) &&
       (*(int *)(param_1 + 0x450) != 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if ((*(byte *)(DAT_14062a630 + 0x2acc) & 0x10) != 0) {
      FUN_14030f4ba("de node %08X\n",cVar3,*(undefined8 *)(param_1 + 8),
                    *(undefined4 *)(DAT_14062a630 + 0x220c));
    }
    if (cVar3 != '\0') {
      local_38 = 0;
      uStack_30 = 0;
      FUN_14032d4bf(0,*(undefined4 *)(lVar1 + 0x220c),*(undefined4 *)(param_1 + 0x488));
      *(undefined2 *)(lVar1 + 0x2262) = 1;
      *(undefined4 *)(lVar1 + 0x2270) = 0;
      uVar2 = 1;
      if (*(char *)(DAT_14062a630 + 0x22a1) == '\0') {
        uVar2 = *(undefined1 *)(DAT_14062a630 + 0x2262);
      }
      *(undefined1 *)(DAT_14062a630 + 0x2261) = uVar2;
      if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_58)) {
        return;
      }
      goto LAB_1403227fb;
    }
    *(undefined4 *)(lVar1 + 0x21f8) = *(undefined4 *)(param_1 + 0x450);
  }
  else {
    *(undefined4 *)(DAT_14062a630 + 0x21f8) = 0;
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_58)) {
    FUN_140328290(*(undefined4 *)(param_1 + 0x488));
    return;
  }
LAB_1403227fb:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
}

