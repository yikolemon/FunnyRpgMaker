/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140098dfe */

void FUN_140098dfe(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar4 = *(longlong *)(param_2 + 0x18);
  lVar13 = *(longlong *)(param_2 + 8);
  puVar6 = *(undefined4 **)(param_2 + 0x10);
  if (lVar4 == 0) {
    if ((*(uint *)(param_1 + 0x2acc) >> 10 & 1) != 0) {
      iVar12 = 0;
      uVar7 = 0;
      if (puVar6 != (undefined4 *)0x0) {
        uVar7 = *puVar6;
      }
      FUN_1400772a6("[docking] DockContextProcessDock node 0x%08X, split_dir %d\n",uVar7,
                    *(undefined4 *)(param_2 + 0x20));
      goto LAB_140098ed3;
    }
    puVar10 = (undefined4 *)0x0;
    iVar12 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x2acc) >> 10 & 1) != 0) {
      if (lVar13 == 0) {
        pcVar11 = "NULL";
      }
      else {
        pcVar11 = *(char **)(lVar13 + 8);
      }
      if (puVar6 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar6;
      }
      FUN_1400772a6("[docking] DockContextProcessDock node 0x%08X target \'%s\' dock window \'%s\', split_dir %d\n"
                    ,uVar7,pcVar11,*(undefined8 *)(lVar4 + 8),*(undefined4 *)(param_2 + 0x20));
    }
    puVar10 = *(undefined4 **)(lVar4 + 0x4c8);
    *(undefined8 *)(lVar4 + 0x4c8) = 0;
    if (puVar10 == (undefined4 *)0x0) {
      iVar12 = *(int *)(lVar4 + 200);
LAB_140098ed3:
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar12 = 0;
      if (*(longlong *)(puVar10 + 8) == 0) {
        iVar12 = *(int *)(*(longlong *)(puVar10 + 0x10) + 0x24);
        if (iVar12 == 0) {
          iVar12 = *(int *)(*(longlong *)(puVar10 + 0x10) + 0x20);
        }
      }
    }
  }
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_14009a039(param_1,0);
    *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(lVar13 + 0x60);
    *(undefined8 *)(puVar6 + 0x14) = *(undefined8 *)(lVar13 + 0x68);
    if (*(longlong *)(lVar13 + 0x4c8) == 0) {
      FUN_1400a88d1(puVar6,lVar13,1);
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar6 + 0x10) + 0x10) + 4);
      *puVar1 = *puVar1 & 0xff7fffff;
      *(byte *)(lVar13 + 0x495) = *(byte *)(lVar13 + 0x495) | 1;
    }
  }
  uVar8 = *(uint *)(param_2 + 0x20);
  if (uVar8 != 0xffffffff) {
    bVar14 = (uVar8 & 0xfffffffd) == 0;
    FUN_1400a8ba0(param_1,puVar6,1 < uVar8,bVar14,*(undefined4 *)(param_2 + 0x24),puVar10);
    puVar2 = (undefined8 *)(puVar6 + 0x24);
    puVar6 = *(undefined4 **)(puVar6 + (ulonglong)(bVar14 ^ 1) * 2 + 8);
    *(undefined8 *)(puVar6 + 0x24) = *puVar2;
  }
  uVar8 = puVar6[2];
  puVar6[2] = uVar8 & 0xffffdfff;
  puVar6[4] = puVar6[1] | puVar6[3] | uVar8 & 0xffffdfff;
  if (puVar6 == puVar10) {
    *(byte *)((longlong)puVar6 + 0xd5) = *(byte *)((longlong)puVar6 + 0xd5) | 2;
    goto LAB_1400990ec;
  }
  if ((int)puVar6[0xc] < 1) {
LAB_140098fec:
    bVar14 = false;
  }
  else {
    bVar14 = true;
    if (*(longlong *)(puVar6 + 0x10) == 0) {
      FUN_1400a8afb(puVar6);
      if ((int)puVar6[0xc] < 1) goto LAB_140098fec;
      lVar13 = 0;
      do {
        FUN_1400cc7b8(*(undefined8 *)(puVar6 + 0x10),0,
                      *(undefined8 *)(*(longlong *)(puVar6 + 0xe) + lVar13 * 8));
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)puVar6[0xc]);
      bVar14 = 0 < (int)puVar6[0xc];
    }
  }
  if (puVar10 == (undefined4 *)0x0) {
    if (lVar4 != 0) {
      iVar3 = *(int *)(lVar4 + 0x4d0);
      *(longlong *)(puVar6 + 0x26) = lVar4;
      FUN_1400a88d1(puVar6,lVar4,1);
      if (iVar3 != 0) {
        FUN_14009a17d(iVar3,*puVar6);
      }
    }
  }
  else {
    if (*(longlong *)(puVar10 + 8) == 0) {
      uVar7 = *puVar10;
      FUN_14009a0a2(puVar6,puVar10);
      FUN_14009a17d(uVar7,*puVar6);
    }
    else {
      if (bVar14) {
        puVar5 = *(undefined4 **)(puVar10 + 0x2a);
        FUN_14009a0a2(puVar6,puVar5);
        FUN_14009a0a2(puVar5,puVar6);
        FUN_14009a17d(*puVar6,*puVar5);
      }
      if ((*(byte *)((longlong)puVar6 + 0x11) & 8) != 0) {
        lVar13 = FUN_140099b24(param_1,puVar10[0x30]);
        lVar4 = lVar13;
        do {
          lVar9 = lVar4;
          lVar4 = *(longlong *)(lVar9 + 0x18);
        } while (lVar4 != 0);
        uVar8 = *(uint *)(lVar13 + 8) | 0x800;
        *(uint *)(lVar13 + 8) = uVar8;
        *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 4) | *(uint *)(lVar13 + 0xc) | uVar8;
        uVar8 = puVar6[2];
        puVar6[2] = uVar8 & 0xfffff7ff;
        puVar6[4] = puVar6[1] | puVar6[3] | uVar8 & 0xfffff7ff;
        *(longlong *)(lVar9 + 0xa0) = lVar13;
      }
      FUN_1400a8d9a(puVar6,puVar10);
    }
    FUN_14009af77(param_1,puVar10,1);
  }
LAB_1400990ec:
  if (*(longlong *)(puVar6 + 0x10) != 0) {
    *(int *)(*(longlong *)(puVar6 + 0x10) + 0x24) = iVar12;
  }
  FUN_14009678b();
  return;
}

