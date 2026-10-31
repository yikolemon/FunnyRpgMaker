/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a09d0 */

void FUN_1400a09d0(int *param_1,longlong *param_2,ULONG_PTR param_3,undefined8 *param_4,
                  byte *param_5,int param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  PVOID pvVar7;
  PVOID pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong lVar15;
  byte *pbVar16;
  undefined1 auStackY_178 [32];
  uint local_118;
  longlong local_f0;
  uint local_e8;
  uint local_d8;
  longlong local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  uint local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_14012ea80 ^ (ulonglong)auStackY_178;
  if (*param_1 != -0x7ffffffd) {
    pvVar7 = FUN_14009d690();
    if (*(longlong *)((longlong)pvVar7 + 0x10) != 0) {
      pvVar7 = FUN_14009d690();
      pvVar7 = *(PVOID *)((longlong)pvVar7 + 0x10);
      pvVar8 = EncodePointer((PVOID)0x0);
      if ((((pvVar7 != pvVar8) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (iVar6 = FUN_14008d8b0(param_1,param_2,param_3), iVar6 != 0)) goto LAB_1400a0d19;
    }
    FUN_14009dd50(local_78,(longlong)param_5,param_4[1]);
    if (local_78[0] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140096cf8();
    }
    FUN_14008d4d0(&local_f0,(int *)local_78,param_6);
    local_118 = local_e8;
    if (local_e8 < local_d8) {
      do {
        lVar10 = 0;
        iVar6 = *(int *)(local_f0 + 0x18);
        if ((iVar6 <= param_6) && (param_6 <= *(int *)(local_f0 + 0x1c))) {
          iVar3 = *(int *)(local_f0 + 0x20);
          iVar4 = *(int *)(local_f0 + 0x24);
          local_88 = param_4[1];
          local_80 = *(undefined4 *)param_4[2];
          local_c0 = 0;
          local_b8 = 0;
          local_b0[0] = 0;
          local_ac = 0;
          local_a4 = 0;
          local_98 = 0;
          uStack_90 = 0;
          if (iVar4 == 0) {
            local_c8[0] = 0;
          }
          else {
            uVar12 = *(byte *)(iVar4 + local_88) & 0xf;
            local_c0 = ((longlong)iVar4 - (longlong)(char)(&DAT_14010b650)[uVar12]) + local_88;
            local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_14010b660)[uVar12] & 0x1f);
            local_b8 = local_c0;
            FUN_14009e030((longlong)local_c8);
          }
          FUN_14009de40((longlong)local_c8,0);
          FUN_14009de40((longlong)local_c8,local_c8[0] - 1);
          lVar15 = (longlong)local_ac._4_4_;
          if ((local_ac._4_4_ != 0) && (lVar9 = FUN_14008d650(), lVar9 + lVar15 != 0)) {
            lVar15 = (longlong)local_ac._4_4_;
            if (local_ac._4_4_ != 0) {
              lVar10 = FUN_14008d650();
              lVar10 = lVar10 + lVar15;
            }
            if (*(char *)(lVar10 + 0x10) != '\0') goto LAB_1400a0c56;
          }
          if ((local_ac & 0x40) == 0) {
            plVar11 = FUN_14008d4a0(param_2,param_4,param_5,&local_d0);
            lVar15 = (longlong)local_a4._4_4_;
            lVar10 = FUN_14008d650();
            FUN_14008d320(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar11,lVar10 + lVar15,
                          param_5,iVar6,iVar3,(longlong)local_b0,param_4,0);
          }
        }
LAB_1400a0c56:
        pbVar16 = *(byte **)(local_f0 + 8);
        lVar10 = (longlong)(char)(&DAT_14010b650)[*pbVar16 & 0xf];
        bVar1 = (&DAT_14010b660)[*pbVar16 & 0xf];
        pbVar13 = pbVar16 + -lVar10;
        uVar12 = *(uint *)(pbVar13 + -4);
        *(byte **)(local_f0 + 8) = pbVar13;
        *(uint *)(local_f0 + 0x18) = uVar12 >> (bVar1 & 0x1f);
        cVar2 = (&DAT_14010b650)[*pbVar13 & 0xf];
        pbVar14 = pbVar16 + (-lVar10 - (longlong)cVar2);
        *(uint *)(local_f0 + 0x1c) =
             *(uint *)(pbVar14 + -4) >> ((&DAT_14010b660)[*pbVar13 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar14;
        pbVar16 = pbVar16 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_14010b650)[*pbVar14 & 0xf]) -
                            lVar10);
        *(uint *)(local_f0 + 0x20) =
             *(uint *)(pbVar16 + -4) >> ((&DAT_14010b660)[*pbVar14 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar16;
        uVar5 = *(undefined4 *)pbVar16;
        *(byte **)(local_f0 + 8) = pbVar16 + 4;
        local_118 = local_118 + 1;
        *(undefined4 *)(local_f0 + 0x24) = uVar5;
      } while (local_118 < local_d8);
    }
  }
LAB_1400a0d19:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_50 ^ (ulonglong)auStackY_178);
}

