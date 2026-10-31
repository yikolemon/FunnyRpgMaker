/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140763ee7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140763ee7(char param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint unaff_retaddr;
  
  pbVar2 = (byte *)(ulonglong)_DAT_d880c7661039d74c;
  bVar1 = (byte)_DAT_d880c7661039d74c;
  *pbVar2 = *pbVar2 & bVar1;
  *pbVar2 = *pbVar2 + bVar1;
  *(char *)(param_2 + 0x209a88) = *(char *)(param_2 + 0x209a88) + param_1;
  pbVar2[0x209988] = pbVar2[0x209988] + param_1;
  *(undefined8 *)(ulonglong)unaff_retaddr = *(undefined8 *)((ulonglong)_DAT_150b01658 + 0x1e8c);
  return;
}

