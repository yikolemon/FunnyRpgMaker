/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043ce01 */

int __cdecl FUN_0043ce01(int param_1,uint param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint *local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  local_18 = 0;
  iVar5 = *(int *)(param_1 + 100);
  iVar7 = *(int *)(param_1 + 0x2e0);
  if (iVar7 == 0) {
    local_18 = FUN_0043c724(param_1,(undefined4 *)0x0);
    puVar4 = (uint *)0x0;
    if (local_18 == 0) {
      iVar7 = *(int *)(param_1 + 0x2e0);
      goto LAB_0043ce2c;
    }
  }
  else {
LAB_0043ce2c:
    piVar3 = *(int **)(iVar7 + 4);
    local_24 = *(uint **)(iVar7 + 0xc);
    uVar6 = *local_24;
    if (uVar6 <= param_2) {
      param_2 = uVar6;
    }
    local_20 = iVar7;
    if (piVar3 == (int *)0x0) {
      puVar4 = (uint *)0x0;
      piVar3 = (int *)FUN_0041c6b3(iVar5,4,0,uVar6,0,&local_18);
      *(int **)(local_20 + 4) = piVar3;
      if (local_18 != 0) goto LAB_0043cfda;
    }
    uVar6 = 0;
    if (param_2 == 0) {
      bVar2 = false;
    }
    else {
      iVar7 = 0;
      bVar2 = false;
      do {
        iVar1 = *(int *)(param_3 + uVar6 * 4);
        if (piVar3[uVar6] != iVar1) {
          piVar3[uVar6] = iVar1;
          bVar2 = true;
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + -4;
      } while (param_2 != uVar6);
      piVar3 = (int *)((int)piVar3 - iVar7);
    }
    uVar6 = *local_24;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      if (param_2 < uVar6) {
        piVar8 = (int *)(local_24[3] + param_2 * 0x18 + 8);
        uVar9 = param_2;
        do {
          if (*piVar3 != *piVar8) {
            *piVar3 = *piVar8;
            uVar6 = *local_24;
            bVar2 = true;
          }
          uVar9 = uVar9 + 1;
          piVar3 = piVar3 + 1;
          piVar8 = piVar8 + 6;
        } while (uVar9 < uVar6);
      }
    }
    else if (param_2 < uVar6) {
      iVar7 = *(int *)((local_24[4] - 0xc) + (*(uint *)(param_1 + 4) >> 0x10) * 0xc);
      uVar9 = param_2;
      do {
        iVar1 = *(int *)(iVar7 + uVar9 * 4);
        if (*piVar3 != iVar1) {
          *piVar3 = iVar1;
          uVar6 = *local_24;
          bVar2 = true;
        }
        uVar9 = uVar9 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar9 < uVar6);
    }
    local_1c = iVar5;
    if ((*(int *)(local_20 + 8) != 0) && (!bVar2)) {
      iVar5 = -1;
      goto LAB_0043cfe8;
    }
    puVar4 = (uint *)FUN_0041c6b3(iVar5,4,0,uVar6,0,&local_18);
    if (local_18 == 0) {
      if (*(char *)(*(int *)(param_1 + 0x2e0) + 0x18) == '\0') {
        FUN_0043f049(param_1);
      }
      FUN_0043f2d5(param_1,param_2,*(int *)(local_20 + 4),(int)puVar4);
      local_18 = FUN_0043de5e(param_1,*local_24,puVar4,'\0');
      if (param_2 != 0 && local_18 == 0) {
        uVar6 = 0;
        do {
          if (puVar4[uVar6] != 0) {
            local_18 = -2;
            break;
          }
          uVar6 = uVar6 + 1;
        } while (param_2 != uVar6);
      }
    }
  }
LAB_0043cfda:
  FUN_0041c607(iVar5,(int)puVar4);
  iVar5 = local_18;
LAB_0043cfe8:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return iVar5;
}

