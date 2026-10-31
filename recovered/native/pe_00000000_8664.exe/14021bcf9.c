/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021bcf9 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c1b14) overlaps instruction at (ram,0x0001404c1b13)
    */
/* WARNING: Switch with 1 destination removed at 0x00014021bd23 : 14 cases all go to same
   destination */

void FUN_14021bcf9(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  uint3 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  char *pcVar11;
  byte *unaff_RDI;
  uint *puVar10;
  
  if (0xd < (ulonglong)*param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar8 = *(int *)(&DAT_1404c1ab8 + (ulonglong)*param_2 * 4);
  piVar9 = (int *)(&DAT_1404c1ab8 + iVar8);
  cVar6 = (char)piVar9;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  iVar5 = *piVar9;
  *(char *)piVar9 = (char)*piVar9 + cVar6;
  if (SCARRY1((char)iVar5,cVar6)) {
    *piVar9 = *piVar9 + (int)piVar9;
  }
  iVar8 = (int)piVar9 - *(int *)(&UNK_1404c1ab9 + iVar8);
  uVar3 = (uint3)((uint)iVar8 >> 8);
  bVar7 = (byte)iVar8 ^ (byte)((ulonglong)param_2 >> 8);
  puVar10 = (uint *)(ulonglong)CONCAT31(uVar3,bVar7);
  *(int *)((longlong)puVar10 + 1) = *(int *)((longlong)puVar10 + 1) + CONCAT31(uVar3,bVar7);
  *unaff_RDI = bVar7;
  bVar1 = (byte)param_2 & 0x1f;
  *puVar10 = *puVar10 << bVar1 | *puVar10 >> 0x20 - bVar1;
  *param_2 = *param_2;
  *(byte *)puVar10 = (char)*puVar10 + bVar7;
  pcVar11 = (char *)(CONCAT71((uint7)uVar3,0xd3) + 1);
  *pcVar11 = *pcVar11 + -0x2d;
  uVar4 = CONCAT31(uVar3,0xc3);
  pcVar11 = (char *)(ulonglong)uVar4;
  *(uint *)(pcVar11 + 1) = *(int *)(pcVar11 + 1) + uVar4;
  out(0xc3,0xc3);
  *(uint *)(pcVar11 + 1) = *(int *)(pcVar11 + 1) + uVar4;
  *pcVar11 = *pcVar11 + -0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
  *param_2 = *param_2 - 0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
  *pcVar11 = *pcVar11 + -0x3d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

