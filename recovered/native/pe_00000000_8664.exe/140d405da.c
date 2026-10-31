/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140d405da */

void FUN_140d405da(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar4;
  ulonglong uVar5;
  longlong in_FS_OFFSET;
  char *pcVar3;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar4 = (int)&stack0xfffffffffffffff8 - 0x10;
  uVar2 = (int)&stack0xfffffffffffffff8 - 0xc;
  pcVar3 = (char *)(ulonglong)uVar2;
  *(uint *)(pcVar3 + -4) = uVar4;
  pcVar3[8] = -1;
  pcVar3[9] = -1;
  pcVar3[10] = -1;
  pcVar3[0xb] = -1;
  pcVar3[4] = -0x20;
  pcVar3[5] = 'm';
  pcVar3[6] = '@';
  pcVar3[7] = '\0';
  *(undefined4 *)pcVar3 = *(undefined4 *)(in_FS_OFFSET + 0x140d405fb);
  *(uint *)(in_FS_OFFSET + 0x10840c700000000) = uVar2;
  *pcVar3 = *pcVar3 + (char)uVar2;
  cVar1 = (char)uVar2 + (char)((ulonglong)param_1 >> 8);
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  if (param_1 == 1 || cVar1 != '\0') {
    *pcVar3 = *pcVar3 + cVar1;
    *(undefined4 *)(uVar5 - 4) = 0xffffffff;
    *(undefined4 *)(uVar5 - 4) = 0;
    *(undefined4 *)(uVar5 - 4) = 0xffffffff;
    *(undefined4 *)(in_FS_OFFSET + 0x5d10c48300000000) = *(undefined4 *)(uVar5 - 0xc);
    return;
  }
  *(ulonglong *)((ulonglong)uVar4 - 8) = uVar5;
  return;
}

