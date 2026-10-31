/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140773ffe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_140773ffe(undefined4 param_1,char param_2)

{
  uint uVar1;
  longlong in_FS_OFFSET;
  char *pcVar2;
  
  *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 0x14) = param_1;
  uVar1 = (int)&stack0xfffffffffffffff8 - 0xc;
  pcVar2 = (char *)(ulonglong)uVar1;
  *(int *)(pcVar2 + -4) = (int)&stack0xfffffffffffffff8 + -0x14;
  pcVar2[8] = -1;
  pcVar2[9] = -1;
  pcVar2[10] = -1;
  pcVar2[0xb] = -1;
  pcVar2[4] = '`';
  pcVar2[5] = -0x35;
  pcVar2[6] = '\x12';
  pcVar2[7] = '\x10';
  *(undefined4 *)pcVar2 = *(undefined4 *)(in_FS_OFFSET + 0x140774022);
  *(uint *)(in_FS_OFFSET + 0x840c700000000) = uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x3ba39] = pcVar2[-0x3ba39] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

