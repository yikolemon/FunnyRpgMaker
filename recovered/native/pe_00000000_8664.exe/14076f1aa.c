/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076f1aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076f1aa(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char cVar7;
  ulonglong uVar6;
  longlong unaff_RBP;
  undefined4 unaff_retaddr;
  uint unaff_retaddr_00;
  
  puVar4 = (undefined4 *)(ulonglong)unaff_retaddr_00;
  uVar6 = (ulonglong)_DAT_150b0c901;
  *(undefined1 *)(uVar6 + 0x20d9) = 0;
  *(undefined4 *)(uVar6 + 0x1e80) = *puVar4;
  *(uint *)(uVar6 + 0x1e84) = puVar4[2] & 0xffdfffff;
  uVar1 = puVar4[4];
  uVar2 = puVar4[5];
  uVar3 = puVar4[6];
  *(undefined4 *)(uVar6 + 0x1e9c) = puVar4[3];
  *(undefined4 *)(uVar6 + 0x1ea0) = uVar1;
  *(undefined4 *)(uVar6 + 0x1ea4) = uVar2;
  *(undefined4 *)(uVar6 + 0x1ea8) = uVar3;
  FUN_14076a604(unaff_retaddr);
  cVar7 = (char)(uVar6 >> 8);
  FUN_14076eff3();
  pcVar5 = (char *)(ulonglong)_DAT_b88001b11039d74c;
  *pcVar5 = *pcVar5 + (char)_DAT_b88001b11039d74c;
  *(char *)(unaff_RBP + 6) = *(char *)(unaff_RBP + 6) + cVar7;
  pcVar5[0x2099] = pcVar5[0x209a];
  return;
}

