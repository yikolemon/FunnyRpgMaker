/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f95a */

undefined8 FUN_14001f95a(ushort *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int *piVar16;
  byte *pbVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_d8 [40];
  ushort *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  if (param_1 == (ushort *)0x0) {
LAB_14001fcb7:
    uVar8 = 0x14;
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar8 = 6;
  }
  else {
    if (*param_1 != 0) {
      uVar3 = *(uint *)(param_2 + 4);
      iVar4 = *(int *)((longlong)param_2 + 0x24);
      uVar7 = 0xffffffff;
      uVar14 = 0;
      local_b0 = param_1;
LAB_14001f9d8:
      uVar2 = *(ushort *)(*(longlong *)(local_b0 + 0xc) + uVar14 * 2);
      uVar15 = (ulonglong)uVar2;
      if ((int)uVar7 < (int)(uint)uVar2) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        piVar16 = (int *)(*(longlong *)(local_b0 + 4) + uVar15 * 8);
        piVar12 = (int *)(*(longlong *)(local_b0 + 4) + uVar7 * 8);
        bVar9 = (byte)uVar3;
        iVar13 = ((int)*(undefined8 *)piVar12 << (bVar9 & 0x1f)) - iVar4;
        iVar10 = ((int)((ulonglong)*(undefined8 *)piVar12 >> 0x20) << (bVar9 & 0x1f)) - iVar4;
        local_80 = CONCAT44(iVar10,iVar13);
        local_78 = local_80;
        lVar5 = *(longlong *)(local_b0 + 8);
        pbVar17 = (byte *)(lVar5 + uVar7);
        if ((*(byte *)(lVar5 + uVar7) & 3) == 0) {
          iVar19 = ((int)*(undefined8 *)piVar16 << (ulonglong)uVar3) - iVar4;
          iVar20 = ((int)((ulonglong)*(undefined8 *)piVar16 >> 0x20) << (ulonglong)uVar3) - iVar4;
          local_80 = CONCAT44(iVar20,iVar19);
          if ((*(byte *)(lVar5 + uVar15) & 3) == 1) {
            piVar16 = piVar16 + -2;
          }
          else {
            local_80 = CONCAT44((iVar20 + iVar10) / 2,(iVar19 + iVar13) / 2);
          }
          piVar12 = piVar12 + -2;
          pbVar17 = pbVar17 + -1;
        }
        else if ((*(byte *)(lVar5 + uVar7) & 3) == 2) goto LAB_14001fcb7;
        local_a8 = uVar15;
        local_a0 = uVar14;
        uVar8 = (*(code *)*param_2)(&local_80,param_3);
        iVar10 = (int)uVar8;
        while (iVar10 == 0) {
          while( true ) {
            if (piVar16 <= piVar12) {
              uVar8 = (*(code *)param_2[1])(&local_80,param_3);
              goto LAB_14001fc7a;
            }
            piVar1 = piVar12 + 2;
            if ((pbVar17[1] & 3) == 0) break;
            if ((pbVar17[1] & 3) == 1) {
              local_88 = CONCAT44(((int)((ulonglong)*(undefined8 *)piVar1 >> 0x20) <<
                                  (ulonglong)uVar3) - iVar4,
                                  ((int)*(undefined8 *)piVar1 << (ulonglong)uVar3) - iVar4);
              uVar8 = (*(code *)param_2[1])(&local_88,param_3);
              if ((int)uVar8 != 0) goto LAB_14001fcc7;
              pbVar17 = pbVar17 + 1;
              piVar12 = piVar1;
            }
            else {
              if ((piVar16 < piVar12 + 4) || ((pbVar17[2] & 3) != 2)) goto LAB_14001fcb7;
              local_88 = CONCAT44(((int)((ulonglong)*(undefined8 *)(piVar12 + 2) >> 0x20) <<
                                  (ulonglong)uVar3) - iVar4,
                                  ((int)*(undefined8 *)(piVar12 + 2) << (ulonglong)uVar3) - iVar4);
              piVar1 = piVar12 + 4;
              piVar12 = piVar12 + 6;
              local_90 = CONCAT44(((int)((ulonglong)*(undefined8 *)piVar1 >> 0x20) <<
                                  (ulonglong)uVar3) - iVar4,
                                  ((int)*(undefined8 *)piVar1 << (ulonglong)uVar3) - iVar4);
              if (piVar16 < piVar12) {
                uVar8 = (*(code *)param_2[3])(&local_88,&local_90,&local_80,param_3);
                goto LAB_14001fc7a;
              }
              local_98 = CONCAT44(((int)((ulonglong)*(undefined8 *)piVar12 >> 0x20) <<
                                  (ulonglong)uVar3) - iVar4,
                                  ((int)*(undefined8 *)piVar12 << (ulonglong)uVar3) - iVar4);
              uVar8 = (*(code *)param_2[3])(&local_88,&local_90,&local_98,param_3);
              if ((int)uVar8 != 0) goto LAB_14001fcc7;
              pbVar17 = pbVar17 + 3;
            }
          }
          uVar6 = (piVar12[2] << (bVar9 & 0x1f)) - iVar4;
          uVar11 = (piVar12[3] << (bVar9 & 0x1f)) - iVar4;
          uVar7 = (ulonglong)uVar11;
          local_78 = CONCAT44(uVar11,uVar6);
          if (piVar16 <= piVar1) goto LAB_14001fc6a;
          pbVar17 = pbVar17 + 2;
          piVar12 = piVar12 + 4;
          uVar14 = (ulonglong)uVar6;
          while( true ) {
            iVar10 = (*piVar12 << (bVar9 & 0x1f)) - iVar4;
            iVar13 = (piVar12[1] << (bVar9 & 0x1f)) - iVar4;
            local_88 = CONCAT44(iVar13,iVar10);
            if ((*pbVar17 & 3) != 0) break;
            local_90 = CONCAT44(((int)uVar7 + iVar13) / 2,((int)uVar14 + iVar10) / 2);
            uVar8 = (*(code *)param_2[2])(&local_78,&local_90,param_3);
            if ((int)uVar8 != 0) goto LAB_14001fcc7;
            local_78 = local_88;
            uVar7 = local_88 >> 0x20;
            pbVar17 = pbVar17 + 1;
            bVar18 = piVar16 <= piVar12;
            piVar12 = piVar12 + 2;
            uVar14 = local_88;
            if (bVar18) goto LAB_14001fc6a;
          }
          if ((*pbVar17 & 3) != 1) goto LAB_14001fcb7;
          uVar8 = (*(code *)param_2[2])(&local_78,&local_88,param_3);
          iVar10 = (int)uVar8;
        }
        goto LAB_14001fcc7;
      }
      goto LAB_14001fcb7;
    }
LAB_14001fcc5:
    uVar8 = 0;
  }
LAB_14001fcc7:
  if (DAT_14012ea80 != (local_70 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_70 ^ (ulonglong)auStack_d8);
  }
  return uVar8;
LAB_14001fc6a:
  uVar8 = (*(code *)param_2[2])(&local_78,&local_80,param_3);
LAB_14001fc7a:
  if ((int)uVar8 != 0) goto LAB_14001fcc7;
  uVar14 = local_a0 + 1;
  uVar7 = local_a8 & 0xffffffff;
  if (*local_b0 <= uVar14) goto LAB_14001fcc5;
  goto LAB_14001f9d8;
}

