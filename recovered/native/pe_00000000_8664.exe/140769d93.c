/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769d93 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769d93(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  undefined8 *puVar7;
  uint unaff_retaddr;
  
  uVar4 = _DAT_1ed088811039d74c;
  pcVar6 = (char *)(ulonglong)_DAT_1ed088811039d74c;
  cVar5 = (char)_DAT_1ed088811039d74c;
  *pcVar6 = *pcVar6 + cVar5;
  *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
  *pcVar6 = *pcVar6 + cVar5;
  puVar7 = (undefined8 *)(ulonglong)unaff_retaddr;
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  *(undefined8 *)(pcVar6 + 0x1f3c) = *puVar7;
  *(undefined8 *)(pcVar6 + 0x1f44) = uVar1;
  *(undefined8 *)(pcVar6 + 0x1f4c) = uVar2;
  *(undefined8 *)(pcVar6 + 0x1f54) = uVar3;
  *(undefined4 *)(pcVar6 + 0x1f5c) = *(undefined4 *)(puVar7 + 4);
  return;
}

