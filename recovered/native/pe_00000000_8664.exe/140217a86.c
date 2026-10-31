/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140217a86 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c1983) overlaps instruction at (ram,0x0001404c1980)
    */
/* WARNING: Switch with 1 destination removed at 0x000140217ac9 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_140217a86(ulonglong *param_1,int *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar8;
  char cVar10;
  undefined1 *puVar9;
  uint uVar11;
  char *pcVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_retaddr;
  char *pcVar7;
  
  if (param_3 < *param_1) {
    uVar3 = *(ulonglong *)(param_1[1] + param_3 * 8);
    uVar11 = (uint)(uVar3 >> 0x3c) - 1;
    if (uVar11 < 0xd) {
      puVar9 = (undefined1 *)((uVar3 & 0xfffffffffffffff) + param_1[1] + *param_1 * 8);
      pcVar12 = &DAT_1404c18cc + *(int *)(&DAT_1404c18cc + (ulonglong)uVar11 * 4);
      cVar4 = (char)param_2;
      *(char *)param_2 = (char)*param_2 + cVar4;
      *pcVar12 = *pcVar12 + (char)((ulonglong)param_2 >> 8);
      iVar2 = *param_2;
      cRam00000001604c18dd = cRam00000001604c18dd + cVar4;
      *(char *)param_2 = (char)*param_2 + cVar4;
      cVar10 = (char)((ulonglong)pcVar12 >> 8);
      puVar9[0x18036b4] = puVar9[0x18036b4] + cVar10;
      *(char *)param_2 = (char)*param_2 + cVar4;
      uVar1 = in((short)CONCAT71((int7)((ulonglong)pcVar12 >> 8),(char)pcVar12 + unaff_BL));
      *(undefined4 *)(ulonglong)(uint)(iVar2 * 0x180) = uVar1;
      *param_2 = *param_2 + (int)param_2;
      *(char *)param_2 = (char)*param_2 + cVar4;
      *(char *)param_2 = (char)*param_2 + cVar4;
      *puVar9 = *puVar9;
      *(char *)param_2 = (char)*param_2 + cVar4;
      uVar5 = in(0x65);
      iVar6 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),uVar5);
      uVar11 = iVar6 + 0x4000000;
      pcVar7 = (char *)(ulonglong)uVar11;
      cVar4 = (char)uVar11;
      *pcVar7 = *pcVar7 + cVar4;
      pcVar12 = (char *)((longlong)(ulonglong)(uint)(iVar2 * 0x180) + 0x77);
      *pcVar12 = *pcVar12 + (char)(uVar11 >> 8);
      *puVar9 = *puVar9;
      *pcVar7 = *pcVar7 + cVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      if ((POPCOUNT(*pcVar7) & 1U) == 0) {
        *pcVar7 = *pcVar7 + (char)puVar9;
        *pcVar7 = *pcVar7 + cVar4;
        puVar9[0x180361c] = puVar9[0x180361c] + cVar10;
        *pcVar7 = *pcVar7 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar11 = iVar6 + 0x1b000000;
      piVar8 = (int *)(ulonglong)uVar11;
      *piVar8 = *piVar8 + uVar11;
      *(char *)(unaff_RSI + 0x49) = *(char *)(unaff_RSI + 0x49) + (char)uVar11;
      *puVar9 = *puVar9;
      *(char *)piVar8 = (char)*piVar8 + (char)uVar11;
      pcVar12 = (char *)(ulonglong)(iVar6 + 0x1d000000U);
      cVar4 = (char)(iVar6 + 0x1d000000U);
      *pcVar12 = *pcVar12 + cVar4;
      pcVar12[0x1803618] = pcVar12[0x1803618] + '\x1c';
      *pcVar12 = *pcVar12 + cVar4;
      cVar10 = (char)((ulonglong)puVar9 >> 8);
      *(char *)(unaff_RBP + 0x38) = *(char *)(unaff_RBP + 0x38) + cVar10;
      *puVar9 = *puVar9;
      *pcVar12 = *pcVar12 + cVar4;
      uVar11 = iVar6 + 0xf4000000;
      piVar8 = (int *)(ulonglong)uVar11;
      *piVar8 = *piVar8 + uVar11;
      *(char *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar10;
      *unaff_retaddr = *unaff_retaddr & (uint)unaff_retaddr;
      *puVar9 = *puVar9;
      cVar4 = (char)uVar11;
      *(char *)piVar8 = (char)*piVar8 + cVar4;
      uVar11 = CONCAT22((short)(uVar11 >> 0x10),
                        CONCAT11((byte)(uVar11 >> 8) | (byte)unaff_retaddr[0xe],cVar4));
      *puVar9 = *puVar9;
      *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + cVar4;
      uVar11 = uVar11 + 0x10000000;
      *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + (char)uVar11;
      uVar11 = CONCAT31((int3)(uVar11 >> 8),uRam6c68000000018036) + 0x48000000;
      *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + (char)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)param_2 = '\0';
  return;
}

