/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a01c0 */

void FUN_1400a01c0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,byte *param_5
                  ,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  PVOID pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  undefined1 auStackY_1a8 [32];
  ULONG_PTR local_140;
  longlong local_118;
  uint local_110;
  uint local_100;
  longlong local_f8;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined4 local_80;
  uint local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_14012ea80 ^ (ulonglong)auStackY_1a8;
  iVar7 = FUN_14009e960(param_2,param_4,(longlong)param_5);
  if (-2 < iVar7) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar13 = 0;
    }
    else {
      pbVar20 = (byte *)(param_4[1] + (longlong)*(int *)(param_5 + 8));
      uVar13 = *pbVar20 & 0xf;
      uVar13 = *(uint *)(pbVar20 + (-4 - (longlong)(char)(&DAT_14010b650)[uVar13])) >>
               ((&DAT_14010b660)[uVar13] & 0x1f);
    }
    if ((int)uVar13 <= iVar7) goto LAB_1400a076a;
    local_140 = param_3;
    if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(param_1 + 0xc) == 0)) {
      pvVar8 = FUN_14009d690();
      if (*(longlong *)((longlong)pvVar8 + 0x20) == 0) goto LAB_1400a0703;
      pvVar8 = FUN_14009d690();
      param_1 = *(int **)((longlong)pvVar8 + 0x20);
      pvVar8 = FUN_14009d690();
      local_140 = *(ULONG_PTR *)((longlong)pvVar8 + 0x28);
      FUN_14008d6b0(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_1400a076a;
      pvVar8 = FUN_14009d690();
      if (*(longlong *)((longlong)pvVar8 + 0x38) != 0) {
        pvVar8 = FUN_14009d690();
        piVar18 = *(int **)((longlong)pvVar8 + 0x38);
        pvVar8 = FUN_14009d690();
        *(undefined8 *)((longlong)pvVar8 + 0x38) = 0;
        cVar5 = FUN_14009edc0((longlong)param_1,piVar18);
        if (cVar5 == '\0') {
          uVar9 = FUN_14009eed0(piVar18);
          if ((char)uVar9 != '\0') {
            __DestructExceptionObject(param_1);
            FUN_14009ec90(&local_118);
                    /* WARNING: Subroutine does not return */
            FUN_14008c800(&local_118,&DAT_14012d620);
          }
                    /* WARNING: Subroutine does not return */
          FUN_14009ca6c();
        }
      }
    }
    FUN_14009dd50(local_78,(longlong)param_5,param_4[1]);
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if ((local_78[0] != 0) &&
         (FUN_14008d4d0(&local_118,(int *)local_78,iVar7), uVar13 = local_110, local_110 < local_100
         )) {
        do {
          iVar1 = *(int *)(local_118 + 0x18);
          if ((iVar1 <= iVar7) && (iVar7 <= *(int *)(local_118 + 0x1c))) {
            iVar2 = *(int *)(local_118 + 0x20);
            uVar21 = 0;
            iVar16 = *(int *)(local_118 + 0x24);
            local_88 = param_4[1];
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_80 = *(undefined4 *)param_4[2];
            local_ac = 0;
            local_a4 = 0;
            local_98 = 0;
            uStack_90 = 0;
            if (iVar16 == 0) {
              local_c8[0] = 0;
            }
            else {
              uVar19 = *(byte *)(local_88 + (longlong)iVar16) & 0xf;
              local_c0 = (local_88 - (longlong)(char)(&DAT_14010b650)[uVar19]) + (longlong)iVar16;
              local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_14010b660)[uVar19] & 0x1f);
              local_b8 = local_c0;
              FUN_14009e030((longlong)local_c8);
            }
            uVar19 = local_c8[0];
            if (local_c8[0] != 0) {
              do {
                local_f0 = local_b0;
                local_ef = local_af;
                local_ed = local_ad;
                local_ec = (undefined4)local_ac;
                local_e8 = local_ac._4_4_;
                local_e4 = (undefined4)local_a4;
                local_e0 = local_a4._4_4_;
                local_dc = local_9c;
                local_d8 = local_98;
                local_d0 = uStack_90;
                iVar16 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                lVar10 = FUN_14008d690();
                piVar18 = (int *)((longlong)iVar16 + lVar10 + 4);
                iVar16 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                lVar10 = FUN_14008d690();
                for (iVar16 = *(int *)(lVar10 + iVar16); 0 < iVar16; iVar16 = iVar16 + -1) {
                  iVar3 = *piVar18;
                  lVar10 = FUN_14008d690();
                  pbVar20 = (byte *)(iVar3 + lVar10);
                  uVar11 = FUN_14009f100((longlong)&local_f0,pbVar20,*(uint **)(param_1 + 0xc));
                  if ((int)uVar11 != 0) {
                    plVar12 = FUN_14008d4a0(param_2,param_4,param_5,&local_f8);
                    if (pbVar20 != (byte *)0x0) {
                      FUN_14009f6c0((longlong)param_1,plVar12,(longlong)&local_f0,pbVar20);
                    }
                    lVar17 = (longlong)local_e0;
                    lVar10 = FUN_14008d650();
                    FUN_14008d320(param_2,(ULONG_PTR)param_1,local_140,(ULONG_PTR)plVar12,
                                  lVar10 + lVar17,param_5,iVar1,iVar2,(longlong)&local_f0,param_4,
                                  param_6);
                    goto LAB_1400a055a;
                  }
                  piVar18 = piVar18 + 1;
                }
                FUN_14009e030((longlong)local_c8);
                uVar21 = uVar21 + 1;
              } while (uVar21 != uVar19);
            }
          }
LAB_1400a055a:
          pbVar20 = *(byte **)(local_118 + 8);
          uVar13 = uVar13 + 1;
          lVar10 = (longlong)(char)(&DAT_14010b650)[*pbVar20 & 0xf];
          bVar6 = (&DAT_14010b660)[*pbVar20 & 0xf];
          pbVar14 = pbVar20 + -lVar10;
          uVar21 = *(uint *)(pbVar14 + -4);
          *(byte **)(local_118 + 8) = pbVar14;
          *(uint *)(local_118 + 0x18) = uVar21 >> (bVar6 & 0x1f);
          cVar5 = (&DAT_14010b650)[*pbVar14 & 0xf];
          pbVar15 = pbVar20 + (-lVar10 - (longlong)cVar5);
          *(uint *)(local_118 + 0x1c) =
               *(uint *)(pbVar15 + -4) >> ((&DAT_14010b660)[*pbVar14 & 0xf] & 0x1f);
          *(byte **)(local_118 + 8) = pbVar15;
          pbVar20 = pbVar20 + ((-(longlong)cVar5 - (longlong)(char)(&DAT_14010b650)[*pbVar15 & 0xf])
                              - lVar10);
          *(uint *)(local_118 + 0x20) =
               *(uint *)(pbVar20 + -4) >> ((&DAT_14010b660)[*pbVar15 & 0xf] & 0x1f);
          *(byte **)(local_118 + 8) = pbVar20;
          uVar4 = *(undefined4 *)pbVar20;
          *(byte **)(local_118 + 8) = pbVar20 + 4;
          *(undefined4 *)(local_118 + 0x24) = uVar4;
        } while (uVar13 < local_100);
      }
      if (((*param_5 & 0x40) != 0) && (bVar6 = FUN_14008d2d0(param_4,param_5), bVar6 == 0)) {
        pvVar8 = FUN_14009d690();
        *(int **)((longlong)pvVar8 + 0x20) = param_1;
        pvVar8 = FUN_14009d690();
        *(ULONG_PTR *)((longlong)pvVar8 + 0x28) = local_140;
                    /* WARNING: Subroutine does not return */
        FUN_14009ca6c();
      }
    }
    else if (local_78[0] != 0) {
      if (param_6 != 0) goto LAB_1400a076a;
      FUN_1400a09d0(param_1,param_2,local_140,param_4,param_5,iVar7);
    }
    pvVar8 = FUN_14009d690();
    if (*(longlong *)((longlong)pvVar8 + 0x38) == 0) {
LAB_1400a0703:
                    /* WARNING: Subroutine does not return */
      FUN_140086440(local_50 ^ (ulonglong)auStackY_1a8);
    }
  }
LAB_1400a076a:
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

