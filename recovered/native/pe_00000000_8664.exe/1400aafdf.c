/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400aafdf */

void FUN_1400aafdf(longlong param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_80 [8];
  longlong local_78;
  undefined1 local_70 [24];
  int *local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_14007e00e(local_80);
  FUN_1400ab3d0(local_80,*(undefined4 *)(param_1 + 0x2950));
  for (uVar11 = 0; iVar5 = *(int *)(param_1 + 0x2950), (int)uVar11 < iVar5; uVar11 = uVar11 + 1) {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x2958) + (ulonglong)uVar11 * 0x24);
    uVar3 = *puVar1;
    iVar5 = FUN_1400789d0(local_70,uVar3,0xffffffff);
    lVar7 = local_78;
    if ((iVar5 == -1) || (local_78 == 0)) {
      if (puVar1[1] == 0) {
        lVar8 = 0;
      }
      else {
        iVar5 = FUN_1400789d0(local_70,puVar1[1],0xffffffff);
        lVar8 = 0;
        if (iVar5 != -1) {
          lVar8 = lVar7 + (longlong)iVar5 * 0x10;
        }
      }
      puVar9 = (undefined4 *)(lVar8 + 0xc);
      if (lVar8 == 0) {
        puVar9 = puVar1;
      }
      uVar4 = *puVar9;
      lVar7 = FUN_1400ab464(local_80,uVar3);
      *(undefined4 *)(lVar7 + 0xc) = uVar4;
      if (puVar1[1] != 0) {
        lVar7 = FUN_1400ab464(local_80);
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      }
    }
    else {
      *puVar1 = 0;
    }
  }
  for (uVar11 = 0; (int)uVar11 < iVar5; uVar11 = uVar11 + 1) {
    if ((((*(int *)(*(longlong *)(param_1 + 0x2958) + 8 + (ulonglong)uVar11 * 0x24) != 0) &&
         (lVar7 = FUN_140096dc1(), lVar7 != 0)) && (*(int *)(lVar7 + 0x14) != 0)) &&
       ((iVar6 = FUN_1400789d0(local_70,*(int *)(lVar7 + 0x14),0xffffffff), iVar6 != -1 &&
        (local_78 != 0)))) {
      piVar10 = (int *)(local_78 + 8 + (longlong)iVar6 * 0x10);
      *piVar10 = *piVar10 + 1;
      iVar5 = *(int *)(param_1 + 0x2950);
    }
  }
  if (*(longlong *)(param_1 + 0x29a0) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x29a0) + 4;
    do {
      iVar5 = *(int *)(lVar7 + 0x14);
      if (((iVar5 != 0) && (iVar6 = FUN_1400789d0(local_70,iVar5,0xffffffff), iVar6 != -1)) &&
         (local_78 != 0)) {
        lVar8 = (longlong)iVar6 * 0x10;
        *(int *)(local_78 + lVar8) = *(int *)(local_78 + lVar8) + 1;
        iVar6 = *(int *)(local_78 + 0xc + lVar8);
        if (iVar6 != iVar5) {
          iVar5 = FUN_1400789d0(local_70,iVar6,0xffffffff);
          if ((iVar5 == -1) || (local_78 == 0)) goto code_r0x0001400ab1bd;
          lVar8 = (longlong)iVar5 << 4;
        }
        piVar10 = (int *)(local_78 + lVar8 + 4);
        *piVar10 = *piVar10 + 1;
      }
code_r0x0001400ab1bd:
      lVar7 = lVar7 + *(int *)(lVar7 + -4);
    } while (lVar7 != *(longlong *)(param_1 + 0x29a0) + (longlong)*(int *)(param_1 + 0x2998) + 4);
  }
  uVar11 = 0;
  do {
    if (*(int *)(param_1 + 0x2950) <= (int)uVar11) {
      FUN_14007e5ac(local_80);
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x2958);
    local_4c = *(int *)(lVar7 + (ulonglong)uVar11 * 0x24);
    iVar5 = FUN_1400789d0(local_70,local_4c,0xffffffff);
    lVar8 = local_78;
    if ((iVar5 != -1) && (local_78 != 0)) {
      piVar10 = (int *)((longlong)iVar5 * 0x10 + local_78);
      iVar5 = *piVar10;
      if (iVar5 < 2) {
        local_58 = piVar10;
        if (local_4c != piVar10[3]) {
          iVar6 = FUN_1400789d0(local_70,piVar10[3],0xffffffff);
          if (iVar6 == -1) {
            local_58 = (int *)0x0;
          }
          else {
            local_58 = (int *)((longlong)iVar6 * 0x10 + lVar8);
          }
        }
        piVar2 = (int *)(lVar7 + (ulonglong)uVar11 * 0x24);
        iVar6 = piVar2[1];
        if (iVar6 == 0) {
          if (iVar5 == 0) {
            bVar12 = piVar10[2] == 0;
          }
          else {
            if ((iVar5 != 1) || (piVar10[2] != 0)) {
              bVar12 = false;
              lVar7 = 0;
              goto LAB_1400ab2e9;
            }
            bVar12 = (*(byte *)((longlong)piVar2 + 0x15) & 8) == 0;
          }
          lVar7 = 0;
        }
        else {
          iVar5 = FUN_1400789d0(local_70,iVar6,0xffffffff);
          bVar12 = false;
          lVar7 = 0;
          if (iVar5 != -1) {
            lVar7 = lVar8 + (longlong)iVar5 * 0x10;
          }
        }
LAB_1400ab2e9:
        if (local_58 == (int *)0x0) {
          bVar13 = true;
        }
        else {
          bVar13 = local_58[1] == 0;
        }
        if (bVar12 || bVar13) {
          if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
            FUN_1400772a6("[docking] DockContextPruneUnusedSettingsNodes: Prune 0x%08X\n",local_4c);
          }
          FUN_1400ab4a7(piVar2);
        }
        else {
          if ((lVar7 == 0) || (*(int *)(lVar7 + 8) != 1)) goto LAB_1400ab336;
          iVar5 = local_4c;
          if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
            FUN_1400772a6("[docking] DockContextPruneUnusedSettingsNodes: Merge 0x%08X->0X%08X\n",
                          local_4c,iVar6);
            iVar6 = piVar2[1];
            iVar5 = *piVar2;
          }
          FUN_14009a17d(iVar5,iVar6);
        }
        *piVar2 = 0;
      }
    }
LAB_1400ab336:
    uVar11 = uVar11 + 1;
  } while( true );
}

