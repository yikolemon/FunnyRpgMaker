/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021b794 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c1b14) overlaps instruction at (ram,0x0001404c1b13)
    */

void FUN_14021b794(longlong *param_1,byte param_2)

{
  byte bVar1;
  uint3 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  byte *unaff_RDI;
  undefined7 uVar10;
  undefined8 uVar11;
  
  if ((char)param_2 < '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c(" of this for std::string.");
  }
  uVar5 = (uint)param_2;
  uVar6 = (uint)param_2;
  uVar10 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (param_2 < 0x50) {
    if (param_2 < 0x45) {
      if (uVar6 == 0) {
        uVar11 = 1;
        unaff_RDI = (byte *)0x0;
        goto LAB_14021b8df;
      }
      if (param_2 != 0x41) {
        if (uVar6 != 0x42) goto LAB_14021b9d8;
        goto LAB_14021b853;
      }
    }
    else if (2 < uVar6 - 0x45) goto LAB_14021b9d8;
    uVar11 = 0;
    unaff_RDI = (byte *)CONCAT71(uVar10,1);
    uVar5 = 2;
  }
  else {
    puVar8 = &switchD_14021b7ca::caseD_61;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2) {
    case 0x61:
    case 0x62:
      switchD_14021b7ca::caseD_61 =
           CONCAT31(switchD_14021b7ca::caseD_61._1_3_,(char)switchD_14021b7ca::caseD_61 + -0x60);
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      switchD_14021b7ca::caseD_61 =
           CONCAT31(switchD_14021b7ca::caseD_61._1_3_,(char)switchD_14021b7ca::caseD_61 + 'x');
      *(char *)param_1 = (char)*param_1 + '(';
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      iVar7 = switchD_14021b7ca::caseD_61 + 0x404c1a28;
      switchD_14021b7ca::caseD_61._0_1_ = (char)iVar7;
      switchD_14021b7ca::caseD_61._1_3_ = (undefined3)((uint)iVar7 >> 8);
      switchD_14021b7ca::caseD_61 =
           CONCAT31(switchD_14021b7ca::caseD_61._1_3_,(char)switchD_14021b7ca::caseD_61 + '(');
      *(char *)param_1 = (char)*param_1 + '(';
      *(char *)param_1 = (char)*param_1 + '(';
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      *(int *)param_1 = (int)*param_1 + 0x404c1a28;
      iVar7 = switchD_14021b7ca::caseD_61 + 0x404c1a28;
      switchD_14021b7ca::caseD_61._0_1_ = (char)iVar7;
      switchD_14021b7ca::caseD_61._1_3_ = (undefined3)((uint)iVar7 >> 8);
      switchD_14021b7ca::caseD_61 =
           CONCAT31(switchD_14021b7ca::caseD_61._1_3_,(char)switchD_14021b7ca::caseD_61 + -0x10);
code_r0x0001404c1a88:
      cVar3 = (char)puVar8;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      uVar6 = *puVar8;
      *(char *)puVar8 = (char)*puVar8 + cVar3;
      if (SCARRY1((char)uVar6,cVar3)) {
        *puVar8 = *puVar8 + (int)puVar8;
      }
      iVar7 = (int)puVar8 - *(int *)((longlong)puVar8 + 1);
      uVar2 = (uint3)((uint)iVar7 >> 8);
      bVar4 = (byte)iVar7 ^ (byte)((ulonglong)param_1 >> 8);
      puVar8 = (uint *)(ulonglong)CONCAT31(uVar2,bVar4);
      *(int *)((longlong)puVar8 + 1) = *(int *)((longlong)puVar8 + 1) + CONCAT31(uVar2,bVar4);
      *unaff_RDI = bVar4;
      bVar1 = (byte)param_1 & 0x1f;
      *puVar8 = *puVar8 << bVar1 | *puVar8 >> 0x20 - bVar1;
      *(char *)param_1 = (char)*param_1;
      *(byte *)puVar8 = (char)*puVar8 + bVar4;
      pcVar9 = (char *)(CONCAT71((uint7)uVar2,0xd3) + 1);
      *pcVar9 = *pcVar9 + -0x2d;
      uVar6 = CONCAT31(uVar2,0xc3);
      pcVar9 = (char *)(ulonglong)uVar6;
      *(uint *)(pcVar9 + 1) = *(int *)(pcVar9 + 1) + uVar6;
      out(0xc3,0xc3);
      *(uint *)(pcVar9 + 1) = *(int *)(pcVar9 + 1) + uVar6;
      *pcVar9 = *pcVar9 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
      *(char *)param_1 = (char)*param_1 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
      *pcVar9 = *pcVar9 + -0x3d;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar6 == 0x50) {
      uVar11 = 0;
      unaff_RDI = (byte *)CONCAT71(uVar10,1);
      uVar5 = 4;
      goto LAB_14021b8df;
    }
    if (param_2 != 0x58) {
LAB_14021b9d8:
                    /* WARNING: Subroutine does not return */
      FUN_14021738c("itmap");
    }
LAB_14021b853:
    uVar11 = 0;
    unaff_RDI = (byte *)0x0;
    uVar5 = 1;
  }
LAB_14021b8df:
  puVar8 = &switchD_14021b8ff::caseD_1;
  switch((char)param_1[3]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
    goto code_r0x0001404c1a88;
  default:
    if ((uVar5 - 3 < 0xfffffffe) && (*(char *)((longlong)param_1 + 0x19) != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_14021738c("CodeTree",param_2,uVar5 - 3,uVar11);
    }
    if (((*(char *)((longlong)param_1 + 0x1a) == '\x01') && (1 < uVar5 - 1)) && (uVar5 != 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_14021738c("ThreeThreeThree",param_2,uVar5 - 1,uVar11);
    }
    *(byte *)(*param_1 + 8) = param_2;
    return;
  }
}

