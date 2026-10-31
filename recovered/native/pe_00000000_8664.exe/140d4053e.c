/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140d4053e */

void FUN_140d4053e(uint param_1,longlong param_2)

{
  uint uVar1;
  uint uVar3;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong in_FS_OFFSET;
  char *pcVar2;
  ulonglong uVar4;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = (int)&stack0xfffffffffffffff0 - 0x10;
  uVar4 = (ulonglong)uVar3;
  puVar6 = (undefined8 *)(ulonglong)param_1;
  uVar1 = (int)&stack0xfffffffffffffff8 - 0x10;
  pcVar2 = (char *)(ulonglong)uVar1;
  *(uint *)(pcVar2 + -4) = uVar3;
  pcVar2[8] = -1;
  pcVar2[9] = -1;
  pcVar2[10] = -1;
  pcVar2[0xb] = -1;
  pcVar2[4] = -0x30;
  pcVar2[5] = 'm';
  pcVar2[6] = '@';
  pcVar2[7] = '\0';
  *(undefined4 *)pcVar2 = *(undefined4 *)(in_FS_OFFSET + 0x140d40562);
  *(uint *)(in_FS_OFFSET + 0x10840c700000000) = uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x7cebb975] = pcVar2[-0x7cebb975] + (char)param_2;
  *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | (byte)((ulonglong)param_2 >> 8);
  *(char **)(uVar4 - 8) = pcVar2;
  *(undefined8 *)(uVar4 - 0x10) = *puVar6;
  *(undefined8 **)(uVar4 - 0x18) = puVar6;
  *(undefined8 *)(uVar4 - 0x20) = 0x140d40584;
  FUN_140d4119e();
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x14) = 7;
  *(undefined2 *)puVar6 = 0;
  *(undefined4 *)(uVar5 - 8) = 0xffffffff;
  *(undefined4 *)(uVar5 - 8) = 0;
  *(undefined4 *)(uVar5 - 8) = 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + 0x5e10c48300000000) = *(undefined4 *)(uVar5 - 0x10);
  return;
}

