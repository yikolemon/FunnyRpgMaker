/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101963a0 */

int __thiscall FUN_101963a0(int *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  byte bVar10;
  byte *unaff_EBX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int unaff_EDI;
  undefined4 in_stack_ffffffdc;
  undefined *puVar14;
  undefined4 in_stack_ffffffe0;
  
  uVar1 = *param_2;
  uVar2 = uVar1 >> 8 & 0xf;
  uVar12 = uVar1 & 0xf;
  if ((uVar1 >> 0x11 & 1) == 0) {
    if (param_1[4] == 0 && param_1[3] == 0) {
      iVar8 = *param_1;
      goto LAB_101963d9;
    }
  }
  else {
    iVar8 = param_1[1];
LAB_101963d9:
    if (iVar8 != 0) {
      uVar12 = uVar1 >> 4 & 0xf;
    }
  }
  uVar13 = uVar1 >> 0xc & 0xf;
  uVar11 = uVar12;
  if (uVar2 == 0) goto LAB_1019643a;
  uVar11 = ((byte)(&DAT_103a60b0)[*(byte *)(param_4 + uVar2)] & 0xf) + uVar12;
  if (((&DAT_103a60b0)[*(byte *)(param_4 + uVar2)] & 0x10) == 0) goto LAB_1019643a;
  uVar12 = uVar11;
  if ((*(byte *)(param_4 + 1 + uVar2) & 7) != 5) goto switchD_10196427_caseD_3;
  bVar10 = *(byte *)(param_4 + uVar2) >> 6;
  puVar9 = (undefined4 *)(uint)bVar10;
  pbVar6 = (byte *)0x5;
  pbVar7 = (byte *)0x5;
  pbVar5 = (byte *)0x5;
  pbVar4 = (byte *)0x5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar10) {
  default:
    uVar12 = uVar11 + 4;
  case 3:
switchD_10196427_caseD_3:
    uVar11 = uVar12;
LAB_1019643a:
    FUN_1025b2d0(param_3,param_4,uVar11);
    if (uVar13 != 0) {
      uVar3 = FUN_10196498(param_3,param_4,uVar11,uVar13,uVar12 - uVar13);
      *(undefined4 *)param_1[8] = uVar3;
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      *(int *)param_1[9] = -*(int *)param_1[9];
    }
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined4 *)param_1[8] = 0xffffffff;
    }
    return param_4 + uVar11;
  case 1:
    uVar12 = uVar11 + 1;
    goto switchD_10196427_caseD_3;
  case 4:
    break;
  case 5:
    *puVar9 = 1;
    break;
  case 6:
    puVar9[6] = 1;
    break;
  case 7:
    puVar9[5] = 1;
    break;
  case 8:
  case 0xc:
    goto switchD_10196427_caseD_8;
  case 9:
  case 0xd:
    goto switchD_10196427_caseD_9;
  case 10:
    goto switchD_10196427_caseD_a;
  case 0xb:
    goto switchD_10196427_caseD_b;
  }
  bVar10 = (byte)param_4;
  uVar1 = (uint)param_4 >> 8;
  pbVar6 = unaff_EBX;
  pbVar7 = unaff_EBX;
  pbVar5 = unaff_EBX;
  pbVar4 = unaff_EBX;
  param_4 = unaff_EDI;
  switch(bVar10 | (byte)uVar1) {
  case 1:
  case 5:
switchD_10196427_caseD_8:
    puVar14 = &DAT_103a69b0 + (uint)*pbVar4 * 8;
    pbVar6 = pbVar4;
    break;
  case 2:
  case 6:
switchD_10196427_caseD_9:
    puVar14 = &DAT_103a6068;
    pbVar7 = pbVar5;
    goto LAB_1019686a;
  case 3:
switchD_10196427_caseD_a:
    puVar14 = &DAT_103a6070;
LAB_1019686a:
    iVar8 = FUN_101963a0(puVar14,param_4,pbVar7);
    return iVar8;
  case 4:
switchD_10196427_caseD_b:
    puVar14 = &DAT_103a61b0 + (uint)*pbVar6 * 8;
    break;
  default:
    iVar8 = FUN_101965d8(in_stack_ffffffdc,in_stack_ffffffe0,unaff_EBX);
    return iVar8;
  }
  iVar8 = (**(code **)(puVar14 + 4))(puVar14,param_4,pbVar6);
  return iVar8;
}

