/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013799d */

void FUN_18013799d(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar3 = FUN_180102463(*(undefined4 *)(lVar1 + 0x184),
                          *(float *)(lVar2 + 0xdf8) + *(float *)(lVar2 + 0xdf8) +
                          *(float *)(lVar2 + 0x1320));
    *(undefined4 *)(lVar1 + 0x184) = uVar3;
    uVar3 = FUN_180102463(*(undefined4 *)(lVar1 + 400),*(undefined4 *)(lVar2 + 0xdf8));
    *(undefined4 *)(lVar1 + 400) = uVar3;
  }
  return;
}

