/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a2c8a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a2c8a(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  uint unaff_retaddr;
  
  pcVar1 = (char *)(ulonglong)_DAT_239488891039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_239488891039d74c;
  pcVar1[0x2399] = '\x01';
  bVar2 = (param_2 & unaff_retaddr) == 0xffffffff;
  pcVar1[0x239a] = bVar2;
  pcVar1[0x239b] = bVar2;
  *(undefined2 *)(pcVar1 + 0x23a0) = *(undefined2 *)(pcVar1 + 0x108);
  fVar3 = (float)*(undefined8 *)(pcVar1 + 0xe4) -
          (float)*(undefined8 *)((ulonglong)*(uint *)(pcVar1 + 0x14cc) + 0x154);
  fVar4 = (float)((ulonglong)*(undefined8 *)(pcVar1 + 0xe4) >> 0x20) -
          (float)((ulonglong)*(undefined8 *)((ulonglong)*(uint *)(pcVar1 + 0x14cc) + 0x154) >> 0x20)
  ;
  *(float *)(pcVar1 + 0x23a4) = fVar3;
  *(float *)(pcVar1 + 0x23a8) = fVar4;
  *(float *)(pcVar1 + 0x23ac) = fVar3;
  *(float *)(pcVar1 + 0x23b0) = fVar4;
  pcVar1[0x23b4] = '\0';
  pcVar1[0x23b5] = '\0';
  pcVar1[0x23b6] = '\0';
  pcVar1[0x23b7] = '\0';
  pcVar1[0x23b8] = '\0';
  pcVar1[0x23b9] = '\0';
  pcVar1[0x23ba] = '\0';
  pcVar1[0x23bb] = '\0';
  return;
}

