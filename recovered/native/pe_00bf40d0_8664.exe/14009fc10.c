/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009fc10 */

void FUN_14009fc10(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,byte param_6)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  PVOID pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_138 [32];
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar17;
  ULONG_PTR local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  int local_bc;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint *local_a0;
  ulonglong local_98;
  longlong *local_90;
  uint local_88;
  uint local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_14012ea80 ^ (ulonglong)auStackY_138;
  local_b8 = param_2;
  iVar5 = FUN_14009d7f0((longlong)param_5,param_4);
  FUN_14008cf70(param_2,param_4,(longlong)param_5,(longlong *)&local_c8);
  iVar6 = GetUnwindTryBlock(param_2,param_4,(longlong)param_5);
  if (iVar6 < iVar5) {
    FUN_14009d960((longlong *)&local_c8,param_4,(longlong)param_5,iVar5);
    SetUnwindTryBlock(param_2,param_4,(longlong)param_5,iVar5);
  }
  else {
    iVar5 = GetUnwindTryBlock(param_2,param_4,(longlong)param_5);
  }
  if ((-2 < iVar5) && (iVar5 < (int)param_5[1])) {
    local_d0 = param_3;
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0xc) == 0))
       )) {
      pvVar7 = FUN_14009d690();
      if (*(longlong *)((longlong)pvVar7 + 0x20) == 0) goto LAB_1400a0138;
      pvVar7 = FUN_14009d690();
      param_1 = *(int **)((longlong)pvVar7 + 0x20);
      pvVar7 = FUN_14009d690();
      local_d0 = *(ULONG_PTR *)((longlong)pvVar7 + 0x28);
      FUN_14008d6b0(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_1400a01b1;
      pvVar7 = FUN_14009d690();
      if (*(longlong *)((longlong)pvVar7 + 0x38) != 0) {
        pvVar7 = FUN_14009d690();
        piVar13 = *(int **)((longlong)pvVar7 + 0x38);
        pvVar7 = FUN_14009d690();
        *(undefined8 *)((longlong)pvVar7 + 0x38) = 0;
        cVar3 = FUN_14009edc0((longlong)param_1,piVar13);
        if (cVar3 == '\0') {
          uVar8 = FUN_14009eed0(piVar13);
          if ((char)uVar8 != '\0') {
            __DestructExceptionObject(param_1);
            FUN_14009ec90(&local_70);
                    /* WARNING: Subroutine does not return */
            FUN_14008c800(&local_70,&DAT_14012d620);
          }
                    /* WARNING: Subroutine does not return */
          FUN_14009ca6c();
        }
      }
    }
    uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
    local_98 = param_4[1];
    local_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        FUN_14008d1a0(&local_90,&local_a0,iVar5,param_4,(longlong)param_5);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
        local_c8 = local_90;
        uVar15 = local_88;
        if (local_88 < local_78) {
          do {
            lVar12 = local_90[1];
            lVar9 = (longlong)*(int *)(*local_90 + 0x10) + (ulonglong)uVar15 * 0x14;
            local_bc = *(int *)(lVar9 + lVar12);
            if ((local_bc <= iVar5) && (iVar5 <= *(int *)(lVar9 + 4 + lVar12))) {
              local_c0 = *(undefined4 *)(lVar9 + 8 + lVar12);
              uVar8 = 0;
              uVar1 = *(uint *)(lVar9 + 0xc + lVar12);
              local_b0 = (longlong)*(int *)(lVar9 + 0x10 + lVar12) + param_4[1];
              param_2 = local_b8;
              if (uVar1 != 0) {
                do {
                  plVar11 = (longlong *)(local_b0 + uVar8 * 0x14);
                  local_70 = *plVar11;
                  uStack_68 = plVar11[1];
                  local_60 = *(undefined4 *)(local_b0 + 0x10 + uVar8 * 0x14);
                  iVar6 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar9 = FUN_14008d690();
                  piVar13 = (int *)((longlong)iVar6 + lVar9 + 4);
                  iVar6 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar9 = FUN_14008d690();
                  local_90 = local_c8;
                  param_2 = local_b8;
                  for (iVar6 = *(int *)(lVar9 + iVar6); local_c8 = local_90, local_b8 = param_2,
                      0 < iVar6; iVar6 = iVar6 + -1) {
                    iVar2 = *piVar13;
                    lVar9 = FUN_14008d690();
                    pbVar14 = (byte *)(iVar2 + lVar9);
                    uVar10 = FUN_14009efd0((byte *)&local_70,pbVar14,*(uint **)(param_1 + 0xc));
                    param_2 = local_b8;
                    uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
                    if ((int)uVar10 != 0) {
                      plVar11 = FUN_14008cf70(local_b8,param_4,(longlong)param_5,&local_a8);
                      if (pbVar14 != (byte *)0x0) {
                        FUN_14009f600((longlong)param_1,plVar11,(uint *)&local_70,pbVar14);
                      }
                      lVar12 = (longlong)uStack_68._4_4_;
                      lVar9 = FUN_14008d650();
                      in_stack_ffffffffffffff00 = CONCAT44(uVar17,local_c0);
                      FUN_14008d070(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar11,
                                    lVar9 + lVar12,(ULONG_PTR)param_5,local_bc,
                                    in_stack_ffffffffffffff00,&local_70,param_4,param_6);
                      local_90 = local_c8;
                      goto LAB_1400a0006;
                    }
                    piVar13 = piVar13 + 1;
                    local_90 = local_c8;
                  }
                  uVar16 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar16;
                } while (uVar16 != uVar1);
              }
            }
LAB_1400a0006:
            uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
            uVar15 = uVar15 + 1;
          } while (uVar15 < local_78);
        }
      }
      piVar13 = (int *)0x0;
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVar15 = param_5[8], uVar15 != 0 && (lVar9 = FUN_14008d650(), lVar9 + (int)uVar15 != 0))
          || (((param_5[9] & 4) != 0 && (bVar4 = FUN_14008cdd0(param_4,(longlong)param_5), !bVar4)))
          ))) {
        if ((param_5[9] & 4) != 0) {
          pvVar7 = FUN_14009d690();
          *(int **)((longlong)pvVar7 + 0x20) = param_1;
          pvVar7 = FUN_14009d690();
          *(ULONG_PTR *)((longlong)pvVar7 + 0x28) = local_d0;
                    /* WARNING: Subroutine does not return */
          FUN_14009ca6c();
        }
        uVar15 = param_5[8];
        if (uVar15 != 0) {
          lVar9 = FUN_14008d650();
          piVar13 = (int *)((int)uVar15 + lVar9);
        }
        cVar3 = FUN_14009edc0((longlong)param_1,piVar13);
        if (cVar3 == '\0') {
          plVar11 = FUN_14008cf70(param_2,param_4,(longlong)param_5,&local_a8);
          FUN_14008d070(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar11,0,(ULONG_PTR)param_5,
                        -1,CONCAT44(uVar17,0xffffffff),0,param_4,param_6);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != 0) goto LAB_1400a01b1;
      FUN_1400a0770(param_1,param_2,local_d0,param_4,(ULONG_PTR)param_5,iVar5);
    }
    pvVar7 = FUN_14009d690();
    if (*(longlong *)((longlong)pvVar7 + 0x38) == 0) {
LAB_1400a0138:
                    /* WARNING: Subroutine does not return */
      FUN_140086440(local_58 ^ (ulonglong)auStackY_138);
    }
  }
LAB_1400a01b1:
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

