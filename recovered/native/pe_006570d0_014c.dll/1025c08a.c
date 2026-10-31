/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025c08a */

char * FUN_1025c08a(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int local_1c;
  int local_18;
  char local_10;
  uint local_c;
  
  FUN_1025be8b(param_1);
  pcVar6 = (char *)0x0;
  iVar9 = 0xc;
  puVar2 = (undefined4 *)(*(int *)(local_18 + 0x9c) + 0x68);
  puVar7 = puVar2;
  do {
    pcVar4 = (char *)puVar7[-0xc];
    pcVar3 = pcVar4 + 1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)*puVar7;
    pcVar8 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    puVar7 = puVar7 + 1;
    pcVar6 = pcVar4 + (int)(pcVar5 + (int)(pcVar6 + (-(int)pcVar8 - (int)pcVar3) + 2));
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pcVar3 = (char *)FUN_10274170(pcVar6 + 1);
  if (pcVar3 != (char *)0x0) {
    local_c = 0;
    pcVar4 = pcVar3;
    do {
      *pcVar4 = ':';
      pcVar8 = pcVar4 + 1;
      iVar9 = FUN_102733f0(pcVar8,pcVar3 + (int)(pcVar6 + (1 - (int)pcVar8)),puVar2[-0xc]);
      if (iVar9 != 0) {
LAB_1025c191:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      pcVar5 = pcVar8;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + ((int)pcVar5 - (int)(pcVar4 + 2));
      *pcVar8 = ':';
      pcVar4 = pcVar8 + 1;
      iVar9 = FUN_102733f0(pcVar4,pcVar3 + (int)(pcVar6 + (1 - (int)pcVar4)),*puVar2);
      if (iVar9 != 0) goto LAB_1025c191;
      pcVar5 = pcVar4;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + ((int)pcVar5 - (int)(pcVar8 + 2));
      local_c = local_c + 1;
      puVar2 = puVar2 + 1;
    } while (local_c < 0xc);
    *pcVar4 = '\0';
  }
  FUN_10274120(0);
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return pcVar3;
}

