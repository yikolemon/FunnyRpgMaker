/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011a8cd */

void __fastcall FUN_1011a8cd(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int local_1c;
  
  iVar3 = *(int *)(param_2 + 0xc);
  iVar6 = *(int *)(param_2 + 4);
  puVar5 = *(undefined4 **)(param_2 + 8);
  if (iVar3 == 0) {
    puVar11 = (undefined4 *)0x0;
    local_1c = 0;
    if ((*(uint *)(param_1 + 0x27b4) >> 10 & 1) == 0) goto LAB_1011a9a6;
    local_1c = 0;
    uVar10 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      uVar10 = *puVar5;
    }
    FUN_100f99e6("[docking] DockContextProcessDock node 0x%08X, split_dir %d\n",uVar10,
                 *(undefined4 *)(param_2 + 0x10));
  }
  else {
    if ((*(uint *)(param_1 + 0x27b4) >> 10 & 1) != 0) {
      if (iVar6 == 0) {
        pcVar4 = "NULL";
      }
      else {
        pcVar4 = *(char **)(iVar6 + 4);
      }
      if (puVar5 == (undefined4 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *puVar5;
      }
      FUN_100f99e6("[docking] DockContextProcessDock node 0x%08X target \'%s\' dock window \'%s\', split_dir %d\n"
                   ,uVar10,pcVar4,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(param_2 + 0x10));
    }
    puVar11 = *(undefined4 **)(iVar3 + 0x434);
    *(undefined4 *)(iVar3 + 0x434) = 0;
    if (puVar11 != (undefined4 *)0x0) {
      local_1c = 0;
      if (puVar11[7] == 0) {
        local_1c = *(int *)(puVar11[0xc] + 0x1c);
        if (local_1c == 0) {
          local_1c = *(int *)(puVar11[0xc] + 0x18);
        }
      }
      goto LAB_1011a9a6;
    }
    local_1c = *(int *)(iVar3 + 0xb8);
  }
  puVar11 = (undefined4 *)0x0;
LAB_1011a9a6:
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_1011b94c();
    *(undefined8 *)(puVar5 + 0xd) = *(undefined8 *)(iVar6 + 0x50);
    *(undefined8 *)(puVar5 + 0xf) = *(undefined8 *)(iVar6 + 0x58);
    if (*(int *)(iVar6 + 0x434) == 0) {
      FUN_10129877(1);
      puVar1 = (uint *)(*(int *)(puVar5[0xc] + 0xc) + 4);
      *puVar1 = *puVar1 & 0xff7fffff;
      *(byte *)(iVar6 + 0x409) = *(byte *)(iVar6 + 0x409) | 1;
    }
  }
  uVar9 = *(uint *)(param_2 + 0x10);
  if (uVar9 != 0xffffffff) {
    uVar8 = (uint)((uVar9 & 0xfffffffd) == 0);
    FUN_10129af5(1 < uVar9,uVar8,puVar11);
    puVar2 = puVar5 + 0x1e;
    puVar5 = (undefined4 *)puVar5[(uVar8 ^ 1) + 7];
    puVar5[0x1e] = *puVar2;
  }
  uVar9 = puVar5[2];
  puVar5[2] = uVar9 & 0xffffdfff;
  puVar5[4] = puVar5[1] | puVar5[3] | uVar9 & 0xffffdfff;
  if (puVar5 == puVar11) {
    *(byte *)((int)puVar5 + 0xad) = *(byte *)((int)puVar5 + 0xad) | 2;
  }
  else {
    if ((int)puVar5[9] < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
      if (puVar5[0xc] == 0) {
        FUN_10129a64();
        uVar9 = 0;
        if (0 < (int)puVar5[9]) {
          do {
            FUN_1014f6d0(puVar5[0xc],0,*(undefined4 *)(puVar5[0xb] + uVar9 * 4));
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)puVar5[9]);
          uVar9 = (uint)(0 < (int)puVar5[9]);
        }
      }
    }
    if (puVar11 == (undefined4 *)0x0) {
      if (iVar3 != 0) {
        iVar6 = *(int *)(iVar3 + 0x438);
        puVar5[0x1f] = iVar3;
        FUN_10129877(1);
        if (iVar6 != 0) {
          FUN_1011ba73();
        }
      }
    }
    else {
      if (puVar11[7] == 0) {
        FUN_1011b9ab();
        FUN_1011ba73();
      }
      else {
        if ((char)uVar9 != '\0') {
          FUN_1011b9ab();
          FUN_1011b9ab();
          FUN_1011ba73();
        }
        if ((*(byte *)((int)puVar5 + 0x11) & 8) != 0) {
          iVar6 = FUN_1011b528(param_1,puVar11[0x26]);
          iVar3 = iVar6;
          do {
            iVar7 = iVar3;
            iVar3 = *(int *)(iVar7 + 0x18);
          } while (iVar3 != 0);
          uVar9 = *(uint *)(iVar6 + 8) | 0x800;
          *(uint *)(iVar6 + 8) = uVar9;
          *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 4) | *(uint *)(iVar6 + 0xc) | uVar9;
          uVar9 = puVar5[2];
          puVar5[2] = uVar9 & 0xfffff7ff;
          puVar5[4] = puVar5[1] | puVar5[3] | uVar9 & 0xfffff7ff;
          *(int *)(iVar7 + 0x80) = iVar6;
        }
        FUN_10129cd6();
      }
      FUN_1011ca07(1);
    }
  }
  if (puVar5[0xc] != 0) {
    *(int *)(puVar5[0xc] + 0x1c) = local_1c;
  }
  FUN_10118556();
  return;
}

