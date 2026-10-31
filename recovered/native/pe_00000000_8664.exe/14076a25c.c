/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076a25c */

/* WARNING: Instruction at (ram,0x00014076a29e) overlaps instruction at (ram,0x00014076a299)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076a25c(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined8 unaff_RDI;
  longlong unaff_R14;
  int iVar4;
  
  iVar4 = (int)((ulonglong)unaff_RDI >> 0x20);
  pcVar3 = (char *)(ulonglong)_DAT_150b079b4;
  pcVar1 = pcVar3;
  if (*(int *)(pcVar3 + 0x2048) != iVar4) {
    pcVar1 = (char *)(ulonglong)_DAT_150b079b4;
    if ((pcVar3[0x27b4] & 4U) == 0) {
      *(int *)(pcVar3 + 0x2048) = iVar4;
    }
    else {
      FUN_1407518b6();
      pcVar1 = (char *)(ulonglong)uRam2048be891039d74c;
      *pcVar1 = *pcVar1 + (char)uRam2048be891039d74c;
    }
    *(undefined8 *)(unaff_R14 + 0x2094) = 0;
    pcVar3[0x2090] = '\0';
    pcVar3[0x2091] = '\0';
    pcVar3[0x2092] = '\0';
    pcVar3[0x2093] = '\0';
  }
  pcVar3[0x20d8] = '\0';
  pcVar3[0x20d9] = '\0';
  pcVar3[0x209a] = '\0';
  cVar2 = '\x01';
  if (pcVar1[0x20d9] == '\0') {
    cVar2 = pcVar1[0x209a];
  }
  pcVar1[0x2099] = cVar2;
  return;
}

