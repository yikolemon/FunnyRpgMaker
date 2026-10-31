/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402569ec */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7d07) overlaps instruction at (ram,0x0001404c7d06)
    */

void FUN_1402569ec(ulonglong *param_1,int *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint uVar8;
  
  if (param_3 < *param_1) {
    uVar1 = *(ulonglong *)(param_1[1] + param_3 * 8);
    uVar8 = (uint)(uVar1 >> 0x3c);
    uVar7 = uVar8 - 1;
    if (uVar7 < 0xd) {
      puVar6 = (undefined1 *)((uVar1 & 0xfffffffffffffff) + param_1[1] + *param_1 * 8);
      uVar7 = (&switchD_140256a2f::caseD_3)[uVar7];
      cVar4 = (char)param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar8) {
      case 1:
        *(char *)param_2 = (char)*param_2 + cVar4;
      case 2:
        *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
             *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar4;
        *(char *)param_2 = (char)*param_2 + cVar4;
        *(char *)param_2 = (char)*param_2 + cVar4;
        *(char *)param_2 = (char)*param_2 + cVar4;
        pcVar5 = (char *)((longlong)(int)uVar7 + 0x1404c7d3a + (longlong)param_2 * 8);
        *pcVar5 = *pcVar5 + unaff_BH;
        *puVar6 = *puVar6;
        break;
      case 3:
        *param_2 = *param_2 + (int)param_2;
        *(char *)param_2 = (char)*param_2 + cVar4;
        uVar7 = (int)param_2 + *param_2;
        param_2 = (int *)(ulonglong)uVar7;
        cVar4 = (char)uVar7;
        *(char *)param_2 = (char)*param_2 + cVar4;
        *(char *)param_2 = (char)*param_2 + cVar4;
        iVar3 = *param_2;
        *(char *)param_2 = (char)*param_2 + cVar4;
        if (SCARRY1((char)iVar3,cVar4) != (char)*param_2 < '\0') {
          *param_2 = *param_2 + uVar7;
          *(char *)param_2 = (char)*param_2 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *puVar6 = *puVar6;
      *(char *)param_2 = (char)*param_2 + (char)param_2;
      pcVar2 = (code *)swi(0x36);
      pcVar5 = (char *)(*pcVar2)();
      *puVar6 = *puVar6;
      *pcVar5 = *pcVar5 + (char)pcVar5;
      *puVar6 = *puVar6;
      *pcVar5 = *pcVar5 + (char)pcVar5;
      return;
    }
  }
  *(char *)param_2 = '\0';
  return;
}

