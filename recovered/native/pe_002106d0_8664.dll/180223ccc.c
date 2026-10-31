/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180223ccc */

int FUN_180223ccc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ushort *puVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  int *local_70;
  uint local_5c;
  ulonglong local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x200) = param_2;
  local_4c = (**(code **)(param_1 + 0x2a0))(param_1,0x6e616d65,param_2,&local_50);
  if (local_4c == 0) {
    iVar4 = FUN_1801ceb6f(param_2);
    local_4c = FUN_1801cf0cc(param_2,&DAT_18034ce30,(short *)(param_1 + 0x1d8));
    if (local_4c == 0) {
      iVar15 = *(int *)(param_1 + 0x1dc);
      uVar9 = iVar4 + iVar15 * 0xc + 6;
      uVar12 = local_50 + iVar4;
      if (uVar12 < uVar9) {
        local_4c = 0x91;
      }
      else {
        uVar2 = (ulonglong)uVar9;
        if (*(short *)(param_1 + 0x1d8) == 1) {
          local_4c = FUN_1801ce63e(param_2,uVar9);
          if (local_4c == 0) {
            uVar3 = FUN_1801ce6a2(param_2,&local_4c);
            *(uint *)(param_1 + 0x1f0) = (uint)uVar3;
            if (local_4c == 0) {
              local_78 = 0;
              lVar7 = 0;
              local_70 = &local_4c;
              local_58 = (ulonglong)uVar9;
              puVar6 = (ushort *)FUN_1801cc8d6(uVar1,0x10,0,(uint)uVar3);
              if (local_4c != 0) goto LAB_180223f93;
              local_4c = FUN_1801cec60(param_2,*(int *)(param_1 + 0x1f0) << 2);
              if (local_4c != 0) {
                lVar7 = 0;
                goto LAB_180223f93;
              }
              local_5c = iVar4 + 6;
              local_58 = (ulonglong)((int)local_58 + (uint)uVar3 * 4 + 2);
              local_4c = 0;
              if ((puVar6 != (ushort *)0x0) &&
                 (uVar9 = *(uint *)(param_1 + 0x1f0), (ulonglong)uVar9 != 0)) {
                local_4c = 0;
                puVar14 = puVar6;
                do {
                  local_4c = FUN_1801cf0cc(param_2,&DAT_18034ce6c,puVar14);
                  uVar5 = *(int *)(param_1 + 0x1e0) + iVar4 + *(int *)(puVar14 + 2);
                  *(uint *)(puVar14 + 2) = uVar5;
                  if ((uVar5 < (uint)local_58) || (uVar12 < uVar5 + *puVar14)) {
                    *puVar14 = 0;
                  }
                  puVar14[4] = 0;
                  puVar14[5] = 0;
                  puVar14[6] = 0;
                  puVar14[7] = 0;
                  puVar14 = puVar14 + 8;
                } while (puVar14 < puVar6 + (ulonglong)uVar9 * 8);
              }
              *(ushort **)(param_1 + 0x1f8) = puVar6;
              FUN_1801ced84(param_2);
              local_4c = FUN_1801ce63e(param_2,local_5c);
              iVar15 = *(int *)(param_1 + 0x1dc);
              uVar2 = local_58;
              goto LAB_180223e1f;
            }
          }
        }
        else {
LAB_180223e1f:
          local_58 = uVar2;
          local_70 = &local_4c;
          local_78 = 0;
          puVar6 = (ushort *)0x0;
          lVar7 = FUN_1801cc8d6(uVar1,0x18,0,iVar15);
          if (local_4c != 0) goto LAB_180223f93;
          local_4c = FUN_1801cec60(param_2,*(int *)(param_1 + 0x1dc) * 0xc);
          uVar10 = 0;
          puVar6 = (ushort *)0x0;
          if (local_4c != 0) goto LAB_180223f93;
          iVar15 = *(int *)(param_1 + 0x1dc);
          iVar11 = 0;
          if (iVar15 != 0) {
            iVar11 = 0;
            local_4c = 0;
            lVar13 = lVar7;
            local_5c = uVar12;
            do {
              local_4c = FUN_1801cf0cc(param_2,&DAT_18034ce50,lVar13);
              if ((local_4c == 0) && (*(ushort *)(lVar13 + 8) != 0)) {
                uVar9 = *(int *)(param_1 + 0x1e0) + iVar4 + *(int *)(lVar13 + 0xc);
                *(uint *)(lVar13 + 0xc) = uVar9;
                if ((uVar9 + *(ushort *)(lVar13 + 8) <= local_5c && (uint)local_58 <= uVar9) &&
                   (((*(short *)(param_1 + 0x1d8) != 1 || (-1 < (short)*(ushort *)(lVar13 + 4))) ||
                    ((uVar9 = *(ushort *)(lVar13 + 4) - 0x8000, uVar9 < *(uint *)(param_1 + 0x1f0)
                     && (*(short *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)uVar9 * 0x10) != 0))
                    )))) {
                  *(undefined8 *)(lVar13 + 0x10) = 0;
                  iVar11 = iVar11 + 1;
                  lVar13 = lVar13 + 0x18;
                }
              }
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            uVar10 = *(undefined4 *)(param_1 + 0x1dc);
          }
          local_70 = &local_4c;
          local_78 = lVar7;
          uVar8 = FUN_1801cc8d6(uVar1,0x18,uVar10);
          *(undefined8 *)(param_1 + 0x1e8) = uVar8;
          *(int *)(param_1 + 0x1dc) = iVar11;
          FUN_1801ced84(param_2);
          *(undefined2 *)(param_1 + 0x1d0) = *(undefined2 *)(param_1 + 0x1dc);
        }
      }
    }
  }
  lVar7 = 0;
  puVar6 = (ushort *)0x0;
LAB_180223f93:
  FUN_1801c9b65(uVar1,lVar7);
  FUN_1801c9b65(uVar1,puVar6);
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return local_4c;
}

