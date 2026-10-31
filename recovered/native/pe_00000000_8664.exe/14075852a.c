/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075852a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_14075852a(undefined4 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  longlong in_FS_OFFSET;
  char *pcVar3;
  
  *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 0x14) = param_1;
  uVar2 = (int)&stack0xfffffffffffffff8 - 0xc;
  pcVar3 = (char *)(ulonglong)uVar2;
  *(int *)(pcVar3 + -4) = (int)&stack0xfffffffffffffff8 + -0x14;
  pcVar3[8] = -1;
  pcVar3[9] = -1;
  pcVar3[10] = -1;
  pcVar3[0xb] = -1;
  pcVar3[4] = -0x60;
  pcVar3[5] = -0x36;
  pcVar3[6] = '\x12';
  pcVar3[7] = '\x10';
  *(undefined4 *)pcVar3 = *(undefined4 *)(in_FS_OFFSET + 0x14075854e);
  *(uint *)(in_FS_OFFSET + 0x840c700000000) = uVar2;
  cVar1 = (char)uVar2;
  *pcVar3 = *pcVar3 + cVar1;
  pcVar3[0x1fc45c7] = pcVar3[0x1fc45c7] + param_2;
  *pcVar3 = *pcVar3 + cVar1;
  pcVar3[0x2fc45c7] = pcVar3[0x2fc45c7] + param_2;
  *pcVar3 = *pcVar3 + cVar1;
  pcVar3[-0x3ba39] = pcVar3[-0x3ba39] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

