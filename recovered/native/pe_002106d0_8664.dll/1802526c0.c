/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802526c0 */

longlong *
FUN_1802526c0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,longlong param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong in_stack_ffffffffffffff68;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar4 = param_5;
  lVar10 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  uStack_70 = lVar10;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10);
  uVar9 = FUN_180093388(&local_78);
  if ((lVar10 != 0) &&
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10), lVar10 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10,1);
  }
  puVar5 = param_6;
  param_5._0_4_ = 0;
  *param_6 = 0;
  switch(param_8) {
  case 0x25:
    cVar6 = FUN_18025d210(param_3,param_4);
    if (cVar6 == '\0') {
      if ((char)param_3[1] == '\0') {
        FUN_18024d310(param_3);
      }
      cVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                        (uVar9,*(undefined2 *)((longlong)param_3 + 10),0);
      if (cVar6 == '%') {
        FUN_18024d290(param_3);
        break;
      }
    }
LAB_180252a19:
    *puVar5 = *puVar5 | 2;
    break;
  default:
    *param_6 = 2;
    break;
  case 0x41:
  case 0x61:
    local_78 = (undefined4)*param_4;
    uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_70 = param_4[1];
    local_68 = (undefined4)*param_3;
    uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_60 = (undefined4)param_3[1];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR__guard_dispatch_icall_18038bc80)
              (param_1,&local_58,&local_68,&local_78,lVar4,param_6,param_7);
    *(undefined4 *)param_3 = local_58;
    *(undefined4 *)((longlong)param_3 + 4) = uStack_54;
    *(undefined4 *)(param_3 + 1) = uStack_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_4c;
    break;
  case 0x42:
  case 0x62:
  case 0x68:
    local_58 = (undefined4)*param_4;
    uStack_54 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_50 = (undefined4)param_4[1];
    uStack_4c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_68 = (undefined4)*param_3;
    uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_60 = (undefined4)param_3[1];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR__guard_dispatch_icall_18038bc80)
              (param_1,&local_78,&local_68,&local_58,lVar4,param_6,param_7);
    *(undefined4 *)param_3 = local_78;
    *(undefined4 *)((longlong)param_3 + 4) = uStack_74;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_70._4_4_;
    break;
  case 0x43:
    uVar7 = FUN_18025d270(param_3,param_4,0,99,&param_5,&param_8,uVar9);
    *puVar5 = *puVar5 | uVar7;
    if ((*puVar5 & 2) == 0) {
      *(int *)(param_7 + 0x14) = ((int)param_5 + -0x13) * 100;
    }
    break;
  case 0x44:
  case 0x78:
    pcVar12 = "%m / %d / %y";
    goto LAB_180252812;
  case 0x48:
    uVar7 = FUN_18025d270(param_3,param_4,0,0x17,param_7 + 8,&param_8,uVar9);
    *puVar5 = *puVar5 | uVar7;
    break;
  case 0x49:
    uVar7 = FUN_18025d270(param_3,param_4,1,0xc,&param_5,&param_8,uVar9);
    *puVar5 = *puVar5 | uVar7;
    if ((*puVar5 & 2) == 0) {
      iVar8 = (int)param_5;
      if ((int)param_5 == 0xc) {
        iVar8 = 0;
      }
      *(int *)(param_7 + 8) = iVar8;
    }
    break;
  case 0x4d:
    lVar10 = param_7 + 4;
    uVar14 = 0x3b;
    uVar13 = 0;
    goto LAB_1802528ca;
  case 0x52:
    pcVar12 = "%H : %M";
    goto LAB_180252812;
  case 0x53:
    uVar14 = 0x3c;
    uVar13 = 0;
    lVar10 = param_7;
    goto LAB_1802528ca;
  case 0x54:
  case 0x58:
    pcVar12 = "%H : %M : %S";
    goto LAB_180252812;
  case 0x55:
  case 0x57:
    lVar10 = param_7 + 0x1c;
    uVar14 = 0x35;
    uVar13 = 0;
    goto LAB_1802528ca;
  case 0x59:
    uVar7 = FUN_18025d270(param_3,param_4,0,9999,&param_5,&param_8,uVar9);
    *puVar5 = *puVar5 | uVar7;
    if ((*puVar5 & 2) == 0) {
      *(int *)(param_7 + 0x14) = (int)param_5 + -0x76c;
    }
    break;
  case 99:
    pcVar12 = "%a %b %e %T %Y";
    goto LAB_180252812;
  case 100:
  case 0x65:
    lVar10 = param_7 + 0xc;
    uVar14 = 0x1f;
    goto LAB_1802528b3;
  case 0x6a:
    lVar10 = param_7 + 0x1c;
    uVar14 = 0x16e;
LAB_1802528b3:
    uVar13 = 1;
    goto LAB_1802528ca;
  case 0x6d:
    uVar7 = FUN_18025d270(param_3,param_4,1,0xc,&param_5,&param_8,uVar9);
    *puVar5 = *puVar5 | uVar7;
    if ((*puVar5 & 2) == 0) {
      *(int *)(param_7 + 0x10) = (int)param_5 + -1;
    }
    break;
  case 0x6e:
  case 0x74:
    pcVar12 = " ";
    goto LAB_180252812;
  case 0x70:
    iVar8 = FUN_18025cdb0(param_3,param_4,0,&DAT_180387e78,
                          in_stack_ffffffffffffff68 & 0xffffffffffffff00);
    if (iVar8 < 0) goto LAB_180252a19;
    if (1 < iVar8) {
      *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 0xc;
    }
    break;
  case 0x72:
    pcVar12 = "%I : %M : %S %p";
LAB_180252812:
    local_68 = (undefined4)*param_3;
    uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_60 = (undefined4)param_3[1];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_58 = (undefined4)*param_4;
    uStack_54 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_50 = (undefined4)param_4[1];
    uStack_4c = *(undefined4 *)((longlong)param_4 + 0xc);
    puVar11 = (undefined4 *)
              FUN_180252ca0(param_1,&local_78,&local_68,&local_58,lVar4,param_6,param_7,pcVar12);
    uVar1 = puVar11[1];
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    *(undefined4 *)param_3 = *puVar11;
    *(undefined4 *)((longlong)param_3 + 4) = uVar1;
    *(undefined4 *)(param_3 + 1) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
    break;
  case 0x77:
    lVar10 = param_7 + 0x18;
    uVar14 = 6;
    uVar13 = 0;
LAB_1802528ca:
    uVar7 = FUN_18025d270(param_3,param_4,uVar13,uVar14,lVar10,&param_8,uVar9);
    *puVar5 = *puVar5 | uVar7;
    break;
  case 0x79:
    uVar7 = FUN_18025d270(param_3,param_4,0,99,&param_5,&param_8,uVar9);
    *puVar5 = *puVar5 | uVar7;
    if ((*puVar5 & 2) == 0) {
      iVar8 = (int)param_5;
      if ((int)param_5 < 0x45) {
        iVar8 = (int)param_5 + 100;
      }
      *(int *)(param_7 + 0x14) = iVar8;
    }
  }
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_18024d310(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_180252bc4;
  }
  else if (*param_4 == 0) goto LAB_180252bc4;
  *puVar5 = *puVar5 | 1;
LAB_180252bc4:
  lVar10 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar10;
  return param_2;
}

