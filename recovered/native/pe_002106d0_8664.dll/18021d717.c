/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021d717 */

int FUN_18021d717(uint *param_1,ushort *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int *local_a0;
  int local_90;
  int local_8c;
  undefined8 *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ushort *local_60;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_c8;
  FUN_1802a89a0(param_1,0);
  uVar4 = *param_4;
  *(undefined8 *)(param_1 + 6) = uVar4;
  local_a8 = 0;
  local_a0 = &local_4c;
  uVar8 = FUN_1801cc8d6(uVar4,0x40,0,param_2[1]);
  *(undefined8 *)(param_1 + 2) = uVar8;
  iVar7 = local_4c;
  if (local_4c == 0) {
    local_a8 = 0;
    local_a0 = &local_4c;
    puVar9 = (undefined8 *)FUN_1801cc8d6(uVar4,0x10);
    *(undefined8 **)(param_1 + 4) = puVar9;
    iVar7 = local_4c;
    if (local_4c == 0) {
      uVar11 = (uint)param_2[1];
      *param_1 = (uint)param_2[1];
      uVar3 = *param_2;
      param_1[1] = (uint)uVar3;
      if (uVar3 != 0) {
        lVar5 = *(longlong *)(param_1 + 2);
        uVar18 = 0;
        uVar11 = 0;
        do {
          uVar19 = *(ushort *)(*(longlong *)(param_2 + 0xc) + uVar18 * 2) + 1;
          plVar1 = (longlong *)(lVar5 + (ulonglong)uVar11 * 0x40);
          uVar13 = uVar19 - uVar11;
          *puVar9 = plVar1;
          *(uint *)(puVar9 + 1) = uVar13;
          if (uVar13 != 0) {
            *plVar1 = (ulonglong)(uVar19 * 0x40) + lVar5 + -0x40;
            plVar1[2] = (longlong)puVar9;
            plVar16 = plVar1;
            if (uVar13 != 1) {
              plVar6 = (longlong *)((ulonglong)uVar11 * 0x40 + lVar5 + 0x40);
              do {
                plVar16 = plVar6;
                plVar16[-7] = (longlong)plVar16;
                *plVar16 = (longlong)(plVar16 + -8);
                plVar16[2] = (longlong)puVar9;
                uVar13 = uVar13 - 1;
                plVar6 = plVar16 + 8;
              } while (1 < uVar13);
            }
            plVar16[1] = (longlong)plVar1;
          }
          puVar9 = puVar9 + 2;
          uVar18 = uVar18 + 1;
          uVar11 = uVar19;
        } while (uVar18 < param_1[1]);
        uVar11 = *param_1;
      }
      local_88 = param_4;
      local_80 = uVar4;
      local_78 = param_3;
      if (uVar11 != 0) {
        local_68 = *(longlong *)(param_2 + 4);
        local_70 = *(longlong *)(param_1 + 2);
        piVar17 = (int *)(local_70 + 0x24);
        uVar18 = 0;
        local_60 = param_2;
        local_58 = param_1;
        do {
          lVar5 = local_68;
          uVar15 = *(longlong *)(piVar17 + -7) - local_70;
          piVar17[-3] = 0;
          bVar2 = *(byte *)(*(longlong *)(local_60 + 8) + uVar18);
          uVar11 = bVar2 & 1 ^ 1;
          piVar17[-3] = uVar11;
          lVar10 = (longlong)(int)((ulonglong)(*(longlong *)(piVar17 + -9) - local_70) >> 6);
          iVar12 = *(int *)(local_68 + uVar18 * 8) - *(int *)(local_68 + lVar10 * 8);
          local_90 = *(int *)(local_68 + 4 + uVar18 * 8) - *(int *)(local_68 + 4 + lVar10 * 8);
          local_8c = FUN_18021e4cf(iVar12);
          piVar17[-1] = local_8c;
          lVar10 = (longlong)(int)(uVar15 >> 6);
          iVar20 = *(int *)(lVar5 + lVar10 * 8) - *(int *)(lVar5 + uVar18 * 8);
          iVar14 = *(int *)(lVar5 + 4 + lVar10 * 8) - *(int *)(lVar5 + 4 + uVar18 * 8);
          iVar7 = FUN_18021e4cf(iVar20,iVar14);
          *piVar17 = iVar7;
          if ((bVar2 & 1) == 0) {
            uVar11 = 3;
LAB_18021d95d:
            piVar17[-3] = uVar11;
          }
          else if (local_8c == iVar7) {
            if (local_8c == 0) {
              iVar7 = FUN_1801cf921(iVar12,local_90,iVar20,iVar14);
              if (iVar7 == 0) goto LAB_18021d960;
              uVar11 = piVar17[-3];
            }
            uVar11 = uVar11 | 2;
            goto LAB_18021d95d;
          }
LAB_18021d960:
          uVar18 = uVar18 + 1;
          piVar17 = piVar17 + 0x10;
          param_1 = local_58;
          param_2 = local_60;
        } while (uVar18 < *local_58);
      }
      lVar5 = local_78;
      uVar4 = local_80;
      *(ushort **)(param_1 + 8) = param_2;
      *(undefined8 **)(param_1 + 10) = local_88;
      iVar7 = FUN_18021e513(param_1 + 0xc,local_78 + 0x18,local_78 + 0x28,local_80);
      local_4c = iVar7;
      if (iVar7 == 0) {
        iVar7 = FUN_18021e513(param_1 + 0x1e,lVar5 + 0x48,lVar5 + 0x58,uVar4);
      }
    }
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_c8);
  }
  return iVar7;
}

