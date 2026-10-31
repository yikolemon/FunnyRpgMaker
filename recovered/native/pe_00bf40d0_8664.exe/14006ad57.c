/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006ad57 */

int FUN_14006ad57(undefined1 (*param_1) [32],ushort *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined7 extraout_var;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auStackY_c8 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  FUN_1400b3c00(param_1,0,200);
  lVar4 = *param_4;
  *(longlong *)(*param_1 + 0x18) = lVar4;
  lVar10 = FUN_14001f231(lVar4,0x40,0,(uint)param_2[1],0,&local_4c);
  *(longlong *)(*param_1 + 8) = lVar10;
  iVar8 = local_4c;
  if (local_4c == 0) {
    puVar11 = (undefined8 *)FUN_14001f231(lVar4,0x10,0,(uint)*param_2,0,&local_4c);
    *(undefined8 **)(*param_1 + 0x10) = puVar11;
    iVar8 = local_4c;
    if (local_4c == 0) {
      uVar14 = (uint)param_2[1];
      *(uint *)*param_1 = (uint)param_2[1];
      uVar3 = *param_2;
      *(uint *)(*param_1 + 4) = (uint)uVar3;
      if (uVar3 != 0) {
        lVar10 = *(longlong *)(*param_1 + 8);
        uVar20 = 0;
        uVar14 = 0;
        do {
          uVar15 = *(ushort *)(*(longlong *)(param_2 + 0xc) + uVar20 * 2) + 1;
          plVar1 = (longlong *)(lVar10 + (ulonglong)uVar14 * 0x40);
          uVar16 = uVar15 - uVar14;
          *puVar11 = plVar1;
          *(uint *)(puVar11 + 1) = uVar16;
          if (uVar16 != 0) {
            *plVar1 = (ulonglong)(uVar15 * 0x40) + lVar10 + -0x40;
            plVar1[2] = (longlong)puVar11;
            plVar18 = plVar1;
            if (uVar16 != 1) {
              plVar6 = (longlong *)((ulonglong)uVar14 * 0x40 + lVar10 + 0x40);
              do {
                plVar18 = plVar6;
                plVar18[-7] = (longlong)plVar18;
                *plVar18 = (longlong)(plVar18 + -8);
                plVar18[2] = (longlong)puVar11;
                uVar16 = uVar16 - 1;
                plVar6 = plVar18 + 8;
              } while (1 < uVar16);
            }
            plVar18[1] = (longlong)plVar1;
          }
          puVar11 = puVar11 + 2;
          uVar20 = uVar20 + 1;
          uVar14 = uVar15;
        } while (uVar20 < *(uint *)(*param_1 + 4));
        uVar14 = *(uint *)*param_1;
      }
      if (uVar14 != 0) {
        lVar10 = *(longlong *)(param_2 + 4);
        lVar5 = *(longlong *)(*param_1 + 8);
        piVar19 = (int *)(lVar5 + 0x24);
        uVar20 = 0;
        do {
          lVar13 = *(longlong *)(piVar19 + -7);
          piVar19[-3] = 0;
          bVar2 = *(byte *)(*(longlong *)(param_2 + 8) + uVar20);
          uVar14 = bVar2 & 1 ^ 1;
          piVar19[-3] = uVar14;
          lVar12 = (longlong)(int)((ulonglong)(*(longlong *)(piVar19 + -9) - lVar5) >> 6);
          uVar15 = *(int *)(lVar10 + uVar20 * 8) - *(int *)(lVar10 + lVar12 * 8);
          uVar16 = *(int *)(lVar10 + 4 + uVar20 * 8) - *(int *)(lVar10 + 4 + lVar12 * 8);
          iVar8 = FUN_14006bb0f(uVar15,uVar16);
          piVar19[-1] = iVar8;
          lVar13 = (longlong)(int)((ulonglong)(lVar13 - lVar5) >> 6);
          uVar21 = *(int *)(lVar10 + lVar13 * 8) - *(int *)(lVar10 + uVar20 * 8);
          uVar17 = *(int *)(lVar10 + 4 + lVar13 * 8) - *(int *)(lVar10 + 4 + uVar20 * 8);
          iVar9 = FUN_14006bb0f(uVar21,uVar17);
          *piVar19 = iVar9;
          if ((bVar2 & 1) == 0) {
            uVar14 = 3;
LAB_14006af9d:
            piVar19[-3] = uVar14;
          }
          else if (iVar8 == iVar9) {
            if (iVar8 == 0) {
              bVar7 = FUN_140021d24(uVar15,uVar16,uVar21,uVar17);
              if ((int)CONCAT71(extraout_var,bVar7) == 0) goto LAB_14006afa0;
              uVar14 = piVar19[-3];
            }
            uVar14 = uVar14 | 2;
            goto LAB_14006af9d;
          }
LAB_14006afa0:
          uVar20 = uVar20 + 1;
          piVar19 = piVar19 + 0x10;
        } while (uVar20 < *(uint *)*param_1);
      }
      *(ushort **)param_1[1] = param_2;
      *(longlong **)(param_1[1] + 8) = param_4;
      iVar8 = FUN_14006bb53((uint *)(param_1[1] + 0x10),(uint *)(param_3 + 0x18),
                            (int *)(param_3 + 0x28),lVar4);
      local_4c = iVar8;
      if (iVar8 == 0) {
        iVar8 = FUN_14006bb53((uint *)(param_1[3] + 0x18),(uint *)(param_3 + 0x48),
                              (int *)(param_3 + 0x58),lVar4);
      }
    }
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_c8);
  }
  return iVar8;
}

