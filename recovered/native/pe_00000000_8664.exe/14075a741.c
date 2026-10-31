/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a741 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075a741(void)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)_DAT_150af7e95;
  uVar4 = (ulonglong)*(uint *)(uVar3 + 0x14dc);
  if ((*(uint *)(uVar3 + 0x14dc) != 0) && (*(int *)(uVar4 + 0x3c) != 0)) {
    if ((*(byte *)(uVar3 + 0x120d) & 4) != 0) {
      FUN_14075b751(*(undefined4 *)(uVar4 + 0x3b0),*(undefined4 *)(uVar3 + 0x1ff0));
    }
    cVar2 = FUN_14075b935();
    if (cVar2 == '\0') {
      *(undefined4 *)(uVar3 + 0x1ff0) = *(undefined4 *)(uVar4 + 0x3c);
    }
    if ((~*(uint *)(uVar4 + 0xc) & 0x10200) != 0) {
      puVar1 = (uint *)((ulonglong)*(uint *)(uVar4 + 0x3c) + 4);
      *puVar1 = *puVar1 & 0xffffff7f;
    }
  }
  *(undefined4 *)(uVar3 + 0x14dc) = 0;
  return;
}

