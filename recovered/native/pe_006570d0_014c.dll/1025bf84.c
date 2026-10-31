/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025bf84 */

char * FUN_1025bf84(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int local_1c;
  int local_18;
  char local_10;
  
  FUN_1025be8b(param_1);
  pcVar7 = (char *)0x0;
  uVar8 = 0;
  iVar2 = *(int *)(local_18 + 0x9c);
  do {
    pcVar6 = *(char **)(iVar2 + uVar8 * 4);
    pcVar3 = pcVar6 + 1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar5 = *(char **)(iVar2 + 0x1c + uVar8 * 4);
    pcVar9 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + (int)(pcVar5 + (int)(pcVar7 + (-(int)pcVar9 - (int)pcVar3) + 2));
    uVar8 = uVar8 + 1;
  } while (uVar8 < 7);
  pcVar3 = (char *)FUN_10274170(pcVar7 + 1);
  if (pcVar3 != (char *)0x0) {
    uVar8 = 0;
    pcVar6 = pcVar3;
    do {
      *pcVar6 = ':';
      pcVar9 = pcVar6 + 1;
      iVar4 = FUN_102733f0(pcVar9,pcVar3 + (int)(pcVar7 + (1 - (int)pcVar9)),
                           *(undefined4 *)(iVar2 + uVar8 * 4));
      if (iVar4 != 0) {
LAB_1025c07d:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      pcVar5 = pcVar9;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + ((int)pcVar5 - (int)(pcVar6 + 2));
      *pcVar9 = ':';
      pcVar6 = pcVar9 + 1;
      iVar4 = FUN_102733f0(pcVar6,pcVar3 + (int)(pcVar7 + (1 - (int)pcVar6)),
                           *(undefined4 *)(iVar2 + 0x1c + uVar8 * 4));
      if (iVar4 != 0) goto LAB_1025c07d;
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + ((int)pcVar5 - (int)(pcVar9 + 2));
      uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
    *pcVar6 = '\0';
  }
  FUN_10274120(0);
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return pcVar3;
}

