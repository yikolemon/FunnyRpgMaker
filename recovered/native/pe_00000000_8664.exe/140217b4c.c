/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140217b4c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c1983) overlaps instruction at (ram,0x0001404c1980)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140217b4c(byte *param_1,longlong param_2)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int *piVar7;
  char *pcVar8;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint *apuStack_58 [8];
  ulonglong local_18;
  int iVar6;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  local_18 = ram0x000140613b10 ^ (ulonglong)apuStack_58;
  bVar1 = *param_1;
  if (0xd < (ulonglong)bVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  piVar7 = (int *)((longlong)&switchD_140217b7f::switchdataD_1404c1900 +
                  (longlong)(int)(&switchD_140217b7f::switchdataD_1404c1900)[bVar1]);
  cVar3 = (char)piVar7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
    break;
  case 2:
    *(char *)piVar7 = (char)*piVar7 + cVar3;
    cRam00000001444c190d = cRam00000001444c190d + cVar3;
    goto code_r0x0001404c190d;
  case 3:
    *piVar7 = *piVar7 + (int)piVar7;
    *(char *)piVar7 = (char)*piVar7 + cVar3;
  }
  piVar7 = (int *)(ulonglong)((int)piVar7 + 0x4000000);
code_r0x0001404c190d:
  cVar3 = (char)piVar7;
  *(char *)piVar7 = (char)*piVar7 + cVar3;
  *(char *)(unaff_RDI + 0x73) = *(char *)(unaff_RDI + 0x73) + (char)((ulonglong)piVar7 >> 8);
  *param_1 = *param_1;
  *(char *)piVar7 = (char)*piVar7 + cVar3;
  if ((POPCOUNT((char)*piVar7) & 1U) != 0) {
    iVar6 = (int)piVar7;
    uVar5 = iVar6 + 0x17000000;
    piVar7 = (int *)(ulonglong)uVar5;
    *piVar7 = *piVar7 + uVar5;
    *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + (char)uVar5;
    *param_1 = *param_1;
    *(char *)piVar7 = (char)*piVar7 + (char)uVar5;
    pcVar8 = (char *)(ulonglong)(iVar6 + 0x19000000U);
    cVar3 = (char)(iVar6 + 0x19000000U);
    *pcVar8 = *pcVar8 + cVar3;
    pcVar8[0x1803618] = pcVar8[0x1803618];
    *pcVar8 = *pcVar8 + cVar3;
    *(char *)(unaff_RBP + 0x38) = *(char *)(unaff_RBP + 0x38) + cVar4;
    *param_1 = *param_1;
    *pcVar8 = *pcVar8 + cVar3;
    uVar5 = iVar6 + 0xf0000000;
    piVar7 = (int *)(ulonglong)uVar5;
    *piVar7 = *piVar7 + uVar5;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar4;
    *apuStack_58[0] = *apuStack_58[0] & (uint)apuStack_58[0];
    *param_1 = *param_1;
    cVar4 = (char)uVar5;
    *(char *)piVar7 = (char)*piVar7 + cVar4;
    uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                     CONCAT11((byte)(uVar5 >> 8) | (byte)apuStack_58[0][0xe],cVar4));
    *param_1 = *param_1;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar4;
    uVar5 = uVar5 + 0x10000000;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),uRam6c68000000018036) + 0x48000000;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)piVar7 = (char)*piVar7 + (char)param_1;
  *(char *)piVar7 = (char)*piVar7 + cVar3;
  param_1[0x180361c] = param_1[0x180361c] + 0x19;
  *(char *)piVar7 = (char)*piVar7 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

