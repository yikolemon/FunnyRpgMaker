/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078ab18 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078ab18(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  char *pcVar5;
  byte bVar6;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  pcVar5 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff8c);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x39d74c35);
  bVar4 = *pbVar1;
  bVar6 = (byte)param_1;
  *pbVar1 = *pbVar1 + bVar6;
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x14cc86);
  *pcVar2 = *pcVar2 + bVar6 + CARRY1(bVar4,bVar6);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  piVar3 = (int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x14ccbe);
  *piVar3 = *piVar3 + param_1;
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1ed086);
  *pcVar2 = *pcVar2 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

