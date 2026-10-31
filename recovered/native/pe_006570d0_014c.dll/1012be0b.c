/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012be0b */

void FUN_1012be0b(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  int local_58 [3];
  int local_4c;
  int *local_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_1012ca20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10100196();
  local_14 = 0;
  FUN_1012c1c6(*(undefined4 *)(local_28 + 0x26b4));
  iVar7 = 0;
  while (iVar7 < *(int *)(local_28 + 0x26b4)) {
    puVar1 = (undefined4 *)(*(int *)(local_28 + 0x26bc) + iVar7 * 0x24);
    uVar2 = *puVar1;
    local_30 = iVar7;
    iVar4 = FUN_100fb06c(uVar2,0xffffffff);
    iVar7 = local_4c;
    if ((iVar4 == -1) || (local_4c == 0)) {
      if (puVar1[1] == 0) {
        iVar7 = 0;
      }
      else {
        iVar4 = FUN_100fb06c(puVar1[1],0xffffffff);
        iVar7 = iVar7 + iVar4 * 0x10;
        if (iVar4 == -1) {
          iVar7 = 0;
        }
      }
      puVar5 = (undefined4 *)(iVar7 + 0xc);
      if (iVar7 == 0) {
        puVar5 = puVar1;
      }
      local_24 = *puVar5;
      local_14 = 0;
      local_2c = puVar1;
      iVar7 = FUN_1012c252(uVar2);
      *(int *)(iVar7 + 0xc) = local_24;
      if (local_2c[1] != 0) {
        iVar7 = FUN_1012c252(local_2c[1]);
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
    }
    else {
      *puVar1 = 0;
    }
    iVar7 = local_30 + 1;
  }
  iVar7 = 0;
  local_24 = *(int *)(local_28 + 0x26b4);
  while (iVar7 < local_24) {
    iVar4 = *(int *)(*(int *)(local_28 + 0x26bc) + 8 + iVar7 * 0x24);
    local_30 = iVar7;
    if ((((iVar4 != 0) && (iVar7 = FUN_10118aeb(iVar4), iVar7 != 0)) &&
        (*(int *)(iVar7 + 0x14) != 0)) &&
       ((iVar7 = FUN_100fb06c(*(int *)(iVar7 + 0x14),0xffffffff), iVar7 != -1 && (local_4c != 0))))
    {
      piVar8 = (int *)(local_4c + 8 + iVar7 * 0x10);
      *piVar8 = *piVar8 + 1;
      local_24 = *(int *)(local_28 + 0x26b4);
    }
    iVar7 = local_30 + 1;
  }
  if (*(int *)(local_28 + 0x26f0) != 0) {
    iVar7 = *(int *)(local_28 + 0x26f0) + 4;
    do {
      iVar4 = *(int *)(iVar7 + 0x14);
      if (((iVar4 != 0) && (iVar6 = FUN_100fb06c(iVar4,0xffffffff), iVar6 != -1)) && (local_4c != 0)
         ) {
        iVar6 = iVar6 * 0x10;
        *(int *)(local_4c + iVar6) = *(int *)(local_4c + iVar6) + 1;
        iVar3 = *(int *)(local_4c + 0xc + iVar6);
        if (iVar3 != iVar4) {
          iVar6 = FUN_100fb06c(iVar3,0xffffffff);
          if ((iVar6 == -1) || (local_4c == 0)) goto code_r0x1012bfdd;
          iVar6 = iVar6 << 4;
        }
        piVar8 = (int *)(local_4c + iVar6 + 4);
        *piVar8 = *piVar8 + 1;
      }
code_r0x1012bfdd:
      iVar7 = iVar7 + *(int *)(iVar7 + -4);
    } while (iVar7 != *(int *)(local_28 + 0x26e8) + *(int *)(local_28 + 0x26f0) + 4);
  }
  iVar7 = 0;
  do {
    if (*(int *)(local_28 + 0x26b4) <= iVar7) {
      local_14 = 0xffffffff;
      FUN_101007e8();
      ExceptionList = local_1c;
      return;
    }
    iVar4 = *(int *)(local_28 + 0x26bc);
    local_2c = (undefined4 *)(iVar7 * 9);
    local_24 = *(int *)(iVar4 + iVar7 * 0x24);
    local_30 = iVar7;
    iVar6 = FUN_100fb06c(local_24,0xffffffff);
    iVar7 = local_4c;
    if ((iVar6 != -1) && (local_4c != 0)) {
      piVar8 = (int *)(iVar6 * 0x10 + local_4c);
      local_58[0] = *piVar8;
      if (local_58[0] < 2) {
        local_34 = piVar8;
        if (local_24 != piVar8[3]) {
          iVar6 = FUN_100fb06c(piVar8[3],0xffffffff);
          local_34 = (int *)(iVar6 * 0x10 + iVar7);
          if (iVar6 == -1) {
            local_34 = (int *)0x0;
          }
        }
        local_2c = (undefined4 *)(iVar4 + (int)local_2c * 4);
        iVar4 = local_2c[1];
        if (iVar4 == 0) {
          iVar7 = 0;
          if (local_58[0] == 0) {
            bVar10 = piVar8[2] == 0;
          }
          else {
            bVar10 = false;
            if (local_58[0] == 1) {
              iVar7 = 0;
              if (piVar8[2] == 0) {
                bVar10 = (*(byte *)((int)local_2c + 0x15) & 8) == 0;
              }
              else {
                bVar10 = false;
              }
            }
          }
        }
        else {
          iVar6 = FUN_100fb06c(iVar4,0xffffffff);
          iVar7 = iVar7 + iVar6 * 0x10;
          bVar10 = false;
          if (iVar6 == -1) {
            iVar7 = 0;
          }
        }
        bVar9 = true;
        if (local_34 != (int *)0x0) {
          bVar9 = local_34[1] == 0;
        }
        if (bVar10 || bVar9) {
          if ((*(byte *)(local_28 + 0x27b5) & 4) != 0) {
            local_14 = 0;
            FUN_100f99e6("[docking] DockContextPruneUnusedSettingsNodes: Prune 0x%08X\n",local_24);
          }
          FUN_1012c286();
        }
        else {
          if ((iVar7 == 0) || (*(int *)(iVar7 + 8) != 1)) goto LAB_1012c0ff;
          local_14 = 0;
          if ((*(uint *)(local_28 + 0x27b4) >> 10 & 1) != 0) {
            FUN_100f99e6("[docking] DockContextPruneUnusedSettingsNodes: Merge 0x%08X->0X%08X\n",
                         local_24,iVar4);
          }
          FUN_1011ba73();
        }
        *local_2c = 0;
      }
    }
LAB_1012c0ff:
    iVar7 = local_30 + 1;
  } while( true );
}

