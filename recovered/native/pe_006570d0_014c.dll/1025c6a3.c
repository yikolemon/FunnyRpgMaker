/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025c6a3 */

short * FUN_1025c6a3(void)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  undefined4 *puVar7;
  short *psVar8;
  int iVar9;
  int local_20;
  int local_1c;
  char local_14;
  uint local_10;
  
  iVar6 = 0;
  FUN_1025be8b(0);
  iVar9 = 7;
  puVar2 = (undefined4 *)(*(int *)(local_1c + 0x9c) + 0xd0);
  puVar7 = puVar2;
  do {
    psVar5 = (short *)puVar7[-7];
    psVar3 = psVar5 + 1;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    psVar4 = (short *)*puVar7;
    psVar8 = psVar4 + 1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + 2 + ((int)psVar4 - (int)psVar8 >> 1) + ((int)psVar5 - (int)psVar3 >> 1);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  psVar3 = (short *)FUN_10274170(iVar6 * 2 + 2);
  if (psVar3 == (short *)0x0) {
    psVar3 = (short *)0x0;
  }
  else {
    local_10 = 0;
    psVar5 = psVar3;
    do {
      *psVar5 = 0x3a;
      psVar8 = psVar5 + 1;
      iVar9 = FUN_102749e0(psVar8,(iVar6 - ((int)psVar8 - (int)psVar3 >> 1)) + 1,puVar2[-7]);
      if (iVar9 != 0) {
LAB_1025c7f5:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      psVar4 = psVar8;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      psVar8 = psVar8 + ((int)psVar4 - (int)(psVar5 + 2) >> 1);
      *psVar8 = 0x3a;
      psVar5 = psVar8 + 1;
      iVar9 = FUN_102749e0(psVar5,(iVar6 - ((int)psVar5 - (int)psVar3 >> 1)) + 1,*puVar2);
      if (iVar9 != 0) goto LAB_1025c7f5;
      psVar4 = psVar5;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      puVar2 = puVar2 + 1;
      psVar5 = psVar5 + ((int)psVar4 - (int)(psVar8 + 2) >> 1);
      local_10 = local_10 + 1;
    } while (local_10 < 7);
    *psVar5 = 0;
  }
  FUN_10274120(0);
  if (local_14 != '\0') {
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
  }
  return psVar3;
}

