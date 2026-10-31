/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10240170 */

void FUN_10240170(int *param_1,int param_2,int *param_3,int param_4,undefined4 param_5,int param_6,
                 uint *param_7,int param_8,undefined1 param_9)

{
  code *pcVar1;
  uint *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  int local_20;
  int *local_1c;
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289e6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar6 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piVar6 + 4);
  local_14 = piVar6;
  (*(code *)PTR_guard_check_icall_1035d810)(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  (*pcVar1)();
  local_8 = 0;
  piVar4 = (int *)FUN_10091ec2(local_18);
  local_8 = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar6 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar5 = (undefined4 *)(*pcVar1)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar5;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
    }
  }
  puVar2 = param_7;
  local_14 = (int *)0x0;
  *param_7 = 0;
  switch(param_9) {
  case 0x25:
    cVar3 = FUN_10249cb0(&param_2,&param_4);
    if (cVar3 == '\0') {
      if ((char)param_3 == '\0') {
        FUN_1023b0c0();
      }
      pcVar1 = *(code **)(*piVar4 + 0x38);
      (*(code *)PTR_guard_check_icall_1035d810)((uint)param_3 >> 0x10,0);
      cVar3 = (*pcVar1)();
      if (cVar3 == '%') {
        FUN_1023b050();
        break;
      }
    }
LAB_10240420:
    *puVar2 = *puVar2 | 2;
    break;
  default:
    *param_7 = 2;
    break;
  case 0x41:
  case 0x61:
    pcVar1 = *(code **)(*local_1c + 0x18);
    (*(code *)PTR_guard_check_icall_1035d810)
              (&local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    (*pcVar1)();
    param_2 = local_20;
    param_3 = local_1c;
    break;
  case 0x42:
  case 0x62:
  case 0x68:
    piVar6 = (int *)FUN_1023f0e0(local_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = *piVar6;
    param_3 = (int *)piVar6[1];
    break;
  case 0x43:
    uVar9 = FUN_10249cf0(&param_2,&param_4,0,99,&local_14,&local_1c,piVar4);
    uVar7 = *puVar2;
    *puVar2 = uVar7 | uVar9;
    if (((uVar7 | uVar9) & 2) == 0) {
      *(int *)(param_8 + 0x14) = ((int)local_14 + -0x13) * 100;
    }
    break;
  case 0x44:
  case 0x78:
    pcVar12 = "%m / %d / %y";
    goto LAB_1024029f;
  case 0x48:
    iVar8 = param_8 + 8;
    uVar11 = 0x17;
    uVar10 = 0;
    goto LAB_1024031e;
  case 0x49:
    uVar9 = FUN_10249cf0(&param_2,&param_4,1,0xc,&local_14,&local_1c,piVar4);
    uVar7 = *puVar2;
    *puVar2 = uVar7 | uVar9;
    if (((uVar7 | uVar9) & 2) == 0) {
      piVar6 = local_14;
      if (local_14 == (int *)0xc) {
        piVar6 = (int *)0x0;
      }
      *(int **)(param_8 + 8) = piVar6;
    }
    break;
  case 0x4d:
    iVar8 = param_8 + 4;
    uVar11 = 0x3b;
    uVar10 = 0;
    goto LAB_1024031e;
  case 0x52:
    pcVar12 = "%H : %M";
    goto LAB_1024029f;
  case 0x53:
    uVar11 = 0x3c;
    uVar10 = 0;
    iVar8 = param_8;
    goto LAB_1024031e;
  case 0x54:
  case 0x58:
    pcVar12 = "%H : %M : %S";
    goto LAB_1024029f;
  case 0x55:
  case 0x57:
    uVar11 = 0x35;
    uVar10 = 0;
    iVar8 = param_8 + 0x1c;
    goto LAB_1024031e;
  case 0x59:
    uVar9 = FUN_10249cf0(&param_2,&param_4,0,9999,&local_14,&local_1c,piVar4);
    uVar7 = *puVar2;
    *puVar2 = uVar7 | uVar9;
    if (((uVar7 | uVar9) & 2) == 0) {
      *(int **)(param_8 + 0x14) = local_14 + -0x1db;
    }
    break;
  case 99:
    pcVar12 = "%a %b %e %T %Y";
    goto LAB_1024029f;
  case 100:
  case 0x65:
    iVar8 = param_8 + 0xc;
    uVar11 = 0x1f;
    goto LAB_1024031c;
  case 0x6a:
    iVar8 = param_8 + 0x1c;
    uVar11 = 0x16e;
LAB_1024031c:
    uVar10 = 1;
    goto LAB_1024031e;
  case 0x6d:
    uVar9 = FUN_10249cf0(&param_2,&param_4,1,0xc,&local_14,&local_1c,piVar4);
    uVar7 = *puVar2;
    *puVar2 = uVar7 | uVar9;
    if (((uVar7 | uVar9) & 2) == 0) {
      *(int *)(param_8 + 0x10) = (int)local_14 + -1;
    }
    break;
  case 0x6e:
  case 0x74:
    pcVar12 = " ";
    goto LAB_1024029f;
  case 0x70:
    iVar8 = FUN_10249890(&param_2,&param_4,0,&DAT_10357880,0);
    if (iVar8 < 0) goto LAB_10240420;
    if (1 < iVar8) {
      *(int *)(param_8 + 8) = *(int *)(param_8 + 8) + 0xc;
    }
    break;
  case 0x72:
    pcVar12 = "%I : %M : %S %p";
LAB_1024029f:
    piVar6 = (int *)FUN_10240680(local_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 pcVar12);
    param_2 = *piVar6;
    param_3 = (int *)piVar6[1];
    break;
  case 0x77:
    uVar11 = 6;
    uVar10 = 0;
    iVar8 = param_8 + 0x18;
LAB_1024031e:
    uVar7 = FUN_10249cf0(&param_2,&param_4,uVar10,uVar11,iVar8,&local_1c,piVar4);
    *puVar2 = *puVar2 | uVar7;
    break;
  case 0x79:
    uVar9 = FUN_10249cf0(&param_2,&param_4,0,99,&local_14,&local_1c,piVar4);
    uVar7 = *puVar2;
    *puVar2 = uVar7 | uVar9;
    if (((uVar7 | uVar9) & 2) == 0) {
      piVar6 = local_14;
      if ((int)local_14 < 0x45) {
        piVar6 = local_14 + 0x19;
      }
      *(int **)(param_8 + 0x14) = piVar6;
    }
  }
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_1024059c;
  }
  else if (param_4 == 0) goto LAB_1024059c;
  *puVar2 = *puVar2 | 1;
LAB_1024059c:
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  ExceptionList = local_10;
  return;
}

