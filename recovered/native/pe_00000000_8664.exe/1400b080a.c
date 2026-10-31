/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b080a */

void FUN_1400b080a(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  lVar3 = DAT_140f2a910;
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    uVar1 = *(undefined4 *)(lVar2 + 0x214);
    *(undefined4 *)(lVar2 + 0x214) = 1;
    *(undefined1 *)(lVar2 + 0x198) = 0;
    if (*(float *)(lVar2 + 0x184) <= 0.0) {
      local_20 = (ulonglong)*(uint *)(lVar3 + 0x1320) << 0x20;
    }
    else {
      local_20 = 0;
    }
    FUN_14008a82c(&local_20,DAT_1401c86a4);
    *(undefined4 *)(lVar2 + 0x214) = uVar1;
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

