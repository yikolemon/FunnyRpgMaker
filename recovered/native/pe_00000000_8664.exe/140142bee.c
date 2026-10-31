/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140142bee */

void FUN_140142bee(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ushort *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_64;
  int local_60;
  int local_5c;
  longlong *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  lVar11 = *(longlong *)(param_1 + 0x408);
  *(undefined1 *)(lVar11 + 0x30) = 1;
  iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x61766172,lVar1,&local_50);
  if (iVar5 != 0) goto LAB_140142e96;
  iVar5 = FUN_14012db43(lVar1);
  local_4c = FUN_14012dc34(lVar1,local_50);
  if (local_4c != 0) goto LAB_140142e96;
  iVar6 = FUN_14012dddf(lVar1);
  iVar7 = FUN_14012dddf(lVar1);
  if (((iVar6 == 0x20000) || (iVar6 == 0x10000)) && (iVar7 == **(int **)(lVar11 + 0x18))) {
    local_64 = iVar7;
    plVar8 = (longlong *)FUN_140128a1f(uVar2,0x40,&local_4c);
    *(longlong **)(lVar11 + 0x38) = plVar8;
    if (local_4c == 0) {
      local_78 = 0;
      local_70 = &local_4c;
      puVar9 = (ushort *)FUN_14012b8aa(uVar2,0x10,0,local_64);
      *plVar8 = (longlong)puVar9;
      if (local_4c == 0) {
        local_60 = iVar6;
        local_5c = iVar5;
        local_58 = plVar8;
        if (0 < local_64) {
          iVar5 = 0;
          lVar12 = 1;
          lVar11 = -8;
          do {
            uVar3 = FUN_14012dd9f(lVar1);
            *puVar9 = uVar3;
            if (local_50 < (uint)uVar3 * 4) {
LAB_140142e22:
              plVar8 = local_58;
              if (iVar5 != 0) {
                do {
                  FUN_140128b39(uVar2,*(undefined8 *)(*plVar8 + lVar11));
                  *(undefined8 *)(*plVar8 + lVar11) = 0;
                  lVar12 = lVar12 + -1;
                  lVar11 = lVar11 + -0x10;
                } while (1 < lVar12);
              }
              FUN_140128b39(uVar2,*plVar8);
              *plVar8 = 0;
              goto LAB_140142e8e;
            }
            local_70 = &local_4c;
            local_78 = 0;
            uVar10 = FUN_14012b8aa(uVar2,8,0);
            *(undefined8 *)(puVar9 + 4) = uVar10;
            if (local_4c != 0) goto LAB_140142e22;
            if (*puVar9 != 0) {
              uVar13 = 0;
              do {
                sVar4 = FUN_14012dd9f(lVar1);
                *(int *)(*(longlong *)(puVar9 + 4) + uVar13 * 8) = (int)sVar4 << 2;
                sVar4 = FUN_14012dd9f(lVar1);
                *(int *)(*(longlong *)(puVar9 + 4) + 4 + uVar13 * 8) = (int)sVar4 << 2;
                uVar13 = uVar13 + 1;
              } while (uVar13 < *puVar9);
            }
            iVar5 = iVar5 + 1;
            puVar9 = puVar9 + 8;
            lVar12 = lVar12 + 1;
            lVar11 = lVar11 + 0x10;
          } while (iVar5 != local_64);
        }
        plVar8 = local_58;
        iVar5 = local_5c;
        if (0x1ffff < local_60) {
          iVar6 = FUN_14012dddf(lVar1);
          iVar7 = FUN_14012dddf(lVar1);
          if (iVar7 == 0) {
            if (iVar6 != 0) goto LAB_140142e6b;
          }
          else {
            local_4c = FUN_140140d27(param_1,iVar7 + iVar5,plVar8 + 1);
            if (local_4c == 0 && iVar6 != 0) {
LAB_140142e6b:
              local_78 = CONCAT44(local_78._4_4_,local_50);
              local_4c = FUN_140140ad0(param_1,iVar6 + iVar5,plVar8 + 5,plVar8 + 1);
            }
          }
        }
      }
    }
  }
LAB_140142e8e:
  FUN_14012dd58(lVar1);
LAB_140142e96:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

