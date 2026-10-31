/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007130c */

int FUN_14007130c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ushort *puVar12;
  int iVar13;
  undefined1 auStackY_98 [32];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  lVar1 = param_2[6];
  *(longlong **)(param_1 + 0x200) = param_2;
  local_4c = (**(code **)(param_1 + 0x2a0))(param_1,0x6e616d65,param_2,&local_50);
  if (local_4c == 0) {
    iVar3 = FUN_140020f72((longlong)param_2);
    local_4c = FUN_1400214cf(param_2,0x140109f60,param_1 + 0x1d8);
    if (local_4c == 0) {
      uVar8 = *(uint *)(param_1 + 0x1dc);
      uVar9 = iVar3 + uVar8 * 0xc + 6;
      uVar10 = local_50 + iVar3;
      if (uVar10 < uVar9) {
        local_4c = 0x91;
      }
      else if (*(short *)(param_1 + 0x1d8) == 1) {
        uVar5 = FUN_140020a41((longlong)param_2,uVar9);
        local_4c = (int)uVar5;
        if (local_4c == 0) {
          uVar2 = FUN_140020aa5(param_2,&local_4c);
          *(uint *)(param_1 + 0x1f0) = (uint)uVar2;
          if (local_4c == 0) {
            lVar7 = 0;
            puVar6 = (ushort *)FUN_14001f231(lVar1,0x10,0,(uint)uVar2,0,&local_4c);
            if (local_4c != 0) goto LAB_1400715d3;
            local_4c = FUN_140021063(param_2,*(int *)(param_1 + 0x1f0) << 2);
            if (local_4c != 0) {
              lVar7 = 0;
              goto LAB_1400715d3;
            }
            uVar9 = uVar9 + (uint)uVar2 * 4 + 2;
            local_4c = 0;
            if ((puVar6 != (ushort *)0x0) &&
               (uVar8 = *(uint *)(param_1 + 0x1f0), (ulonglong)uVar8 != 0)) {
              local_4c = 0;
              puVar12 = puVar6;
              do {
                local_4c = FUN_1400214cf(param_2,0x140109f9c,(longlong)puVar12);
                uVar4 = *(int *)(param_1 + 0x1e0) + iVar3 + *(int *)(puVar12 + 2);
                *(uint *)(puVar12 + 2) = uVar4;
                if ((uVar4 < uVar9) || (uVar10 < uVar4 + *puVar12)) {
                  *puVar12 = 0;
                }
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                puVar12 = puVar12 + 8;
              } while (puVar12 < puVar6 + (ulonglong)uVar8 * 8);
            }
            *(ushort **)(param_1 + 0x1f8) = puVar6;
            FUN_140021187(param_2);
            uVar5 = FUN_140020a41((longlong)param_2,iVar3 + 6);
            local_4c = (int)uVar5;
            uVar8 = *(uint *)(param_1 + 0x1dc);
            goto LAB_14007145f;
          }
        }
      }
      else {
LAB_14007145f:
        puVar6 = (ushort *)0x0;
        lVar7 = FUN_14001f231(lVar1,0x18,0,uVar8,0,&local_4c);
        if (local_4c != 0) goto LAB_1400715d3;
        local_4c = FUN_140021063(param_2,*(int *)(param_1 + 0x1dc) * 0xc);
        uVar8 = 0;
        puVar6 = (ushort *)0x0;
        if (local_4c != 0) goto LAB_1400715d3;
        iVar13 = *(int *)(param_1 + 0x1dc);
        uVar4 = 0;
        if (iVar13 != 0) {
          uVar4 = 0;
          local_4c = 0;
          lVar11 = lVar7;
          do {
            local_4c = FUN_1400214cf(param_2,0x140109f80,lVar11);
            if ((local_4c == 0) && (*(ushort *)(lVar11 + 8) != 0)) {
              uVar8 = *(int *)(param_1 + 0x1e0) + iVar3 + *(int *)(lVar11 + 0xc);
              *(uint *)(lVar11 + 0xc) = uVar8;
              if ((uVar8 + *(ushort *)(lVar11 + 8) <= uVar10 && uVar9 <= uVar8) &&
                 (((*(short *)(param_1 + 0x1d8) != 1 || (-1 < (short)*(ushort *)(lVar11 + 4))) ||
                  ((uVar8 = *(ushort *)(lVar11 + 4) - 0x8000, uVar8 < *(uint *)(param_1 + 0x1f0) &&
                   (*(short *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)uVar8 * 0x10) != 0))))))
              {
                *(undefined8 *)(lVar11 + 0x10) = 0;
                uVar4 = uVar4 + 1;
                lVar11 = lVar11 + 0x18;
              }
            }
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          uVar8 = *(uint *)(param_1 + 0x1dc);
        }
        lVar7 = FUN_14001f231(lVar1,0x18,uVar8,uVar4,lVar7,&local_4c);
        *(longlong *)(param_1 + 0x1e8) = lVar7;
        *(uint *)(param_1 + 0x1dc) = uVar4;
        FUN_140021187(param_2);
        *(undefined2 *)(param_1 + 0x1d0) = *(undefined2 *)(param_1 + 0x1dc);
      }
    }
  }
  lVar7 = 0;
  puVar6 = (ushort *)0x0;
LAB_1400715d3:
  FUN_14001c53d(lVar1,lVar7);
  FUN_14001c53d(lVar1,(longlong)puVar6);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return local_4c;
}

