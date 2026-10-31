/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046df4f */

int __cdecl FUN_0046df4f(int param_1,short param_2,undefined4 *param_3)

{
  int *piVar1;
  short *psVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  code *pcVar11;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  iVar8 = *(int *)(param_1 + 100);
  local_18 = 0;
  if ((int *)(uint)*(ushort *)(param_1 + 0x154) == (int *)0x0) {
    uVar10 = 0;
    goto LAB_0046e166;
  }
  local_28 = *(int *)(param_1 + 0x164);
  psVar2 = (short *)(local_28 + 8);
  piVar5 = (int *)0xffffffff;
  piVar9 = (int *)0x0;
  local_20 = 0;
  local_30 = (int *)0xffffffff;
  local_1c = (int *)0xffffffff;
  piVar6 = piVar5;
  do {
    piVar1 = local_1c;
    if ((psVar2[-1] == param_2) && (*psVar2 != 0)) {
      switch(psVar2[-4]) {
      case 0:
      case 2:
        piVar6 = piVar9;
        break;
      case 1:
        piVar1 = piVar9;
        if ((psVar2[-2] != 0) && (piVar1 = local_1c, psVar2[-3] == 0)) {
          piVar5 = piVar9;
        }
        break;
      case 3:
        if ((((local_30 == (int *)0xffffffff) || ((psVar2[-2] & 0x3ffU) == 9)) &&
            ((ushort)psVar2[-3] < 0xb)) &&
           (local_24 = piVar6, (0x403U >> ((ushort)psVar2[-3] & 0x1f) & 1) != 0)) {
          local_20 = CONCAT31((int3)(((ushort)psVar2[-2] & 0x3ff) >> 8),
                              (short)((ushort)psVar2[-2] & 0x3ff) == 9);
          local_30 = piVar9;
        }
      }
    }
    local_1c = piVar1;
    piVar9 = (int *)((int)piVar9 + 1);
    psVar2 = psVar2 + 10;
  } while ((int *)(uint)*(ushort *)(param_1 + 0x154) != piVar9);
  if (-1 < (int)local_1c) {
    piVar5 = local_1c;
  }
  local_2c = iVar8;
  if ((int)local_30 < 0) {
    pcVar11 = FUN_00471469;
    if ((-1 < (int)piVar5) || (pcVar11 = FUN_004713cd, piVar5 = piVar6, -1 < (int)piVar6)) {
LAB_0046e0b3:
      if (local_28 != 0) goto LAB_0046e0bd;
    }
    uVar10 = 0;
    goto LAB_0046e166;
  }
  if (-1 < (int)piVar5) {
    pcVar11 = FUN_00471469;
    if ((char)local_20 == '\0') goto LAB_0046e0b3;
  }
  uVar4 = (uint)*(ushort *)(local_28 + 2 + (int)local_30 * 0x14);
  uVar10 = 0;
  if ((10 < uVar4) || ((0x403U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_0046e166;
  pcVar11 = FUN_004713cd;
  piVar5 = local_30;
LAB_0046e0bd:
  iVar7 = local_28 + (int)piVar5 * 0x14;
  if (*(int *)(iVar7 + 0x10) == 0) {
    local_30 = *(int **)(param_1 + 0x170);
    uVar10 = 0;
    puVar3 = (uint *)FUN_0041efcd(iVar8,1,0,(uint)*(ushort *)(iVar7 + 8),0,&local_18);
    piVar5 = local_30;
    *(uint **)(iVar7 + 0x10) = puVar3;
    if (local_18 == 0) {
      local_18 = FUN_00420696((int)local_30,*(uint *)(iVar7 + 0xc));
      puVar3 = *(uint **)(iVar7 + 0x10);
      iVar8 = local_2c;
      if (local_18 == 0) {
        local_18 = FUN_004206d1(piVar5,puVar3,(uint)*(ushort *)(iVar7 + 8));
        if (local_18 == 0) goto LAB_0046e0c7;
        puVar3 = *(uint **)(iVar7 + 0x10);
        iVar8 = local_2c;
      }
    }
    FUN_0041c607(iVar8,(int)puVar3);
    *(undefined4 *)(iVar7 + 0x10) = 0;
    *(undefined2 *)(iVar7 + 8) = 0;
  }
  else {
LAB_0046e0c7:
    uVar10 = (*pcVar11)(iVar7,local_2c);
  }
LAB_0046e166:
  *param_3 = uVar10;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_30);
  }
  return local_18;
}

