/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076a415 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076a415(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  longlong unaff_RBP;
  undefined4 unaff_retaddr;
  char *pcVar3;
  
  uVar1 = _DAT_20d980c61039d74c;
  cVar2 = (char)_DAT_20d980c61039d74c;
  *(char *)(ulonglong)_DAT_20d980c61039d74c = *(char *)(ulonglong)_DAT_20d980c61039d74c + cVar2;
  cVar2 = cVar2 + (char)((uint)unaff_retaddr >> 8);
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),cVar2);
  *pcVar3 = *pcVar3 + cVar2;
  pcVar3 = (char *)(ulonglong)_DAT_b88001b11039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_b88001b11039d74c;
  *(char *)(unaff_RBP + 6) = *(char *)(unaff_RBP + 6) + (char)((ulonglong)param_2 >> 8);
  pcVar3[0x2099] = pcVar3[0x209a];
  return;
}

