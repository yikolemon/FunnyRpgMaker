/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075b080(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  uint local_res8;
  
  puVar2 = (undefined8 *)(ulonglong)local_res8;
  uVar3 = (ulonglong)_DAT_150af87e4;
  *(int *)(uVar3 + 0x1e80) = (int)((ulonglong)unaff_RDI >> 0x20);
  *(undefined4 *)(uVar3 + 0x1e84) = unaff_retaddr;
  *(undefined4 *)(uVar3 + 0x1e88) = unaff_retaddr_00;
  uVar1 = puVar2[1];
  *(undefined8 *)(uVar3 + 0x1e9c) = *puVar2;
  *(undefined8 *)(uVar3 + 0x1ea4) = uVar1;
  uVar1 = puVar2[1];
  *(undefined8 *)(uVar3 + 0x1e8c) = *puVar2;
  *(undefined8 *)(uVar3 + 0x1e94) = uVar1;
  return;
}

