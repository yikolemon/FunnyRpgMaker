/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10261ccf */

uint __thiscall FUN_10261ccf(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  ushort *puVar3;
  byte *pbVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_c;
  
  uVar5 = __crt_stdio_output::to_integer_size(*(length_modifier *)(param_1 + 0x28));
  if (uVar5 == 1) {
    uVar8 = *(uint *)(param_1 + 0x1c);
    pbVar4 = *(byte **)(param_1 + 0x10);
    *(byte **)(param_1 + 0x10) = pbVar4 + 4;
    if ((uVar8 >> 4 & 1) == 0) {
      uVar7 = (uint)*pbVar4;
    }
    else {
      uVar7 = (uint)(char)*pbVar4;
    }
  }
  else if (uVar5 == 2) {
    uVar8 = *(uint *)(param_1 + 0x1c);
    puVar3 = *(ushort **)(param_1 + 0x10);
    *(ushort **)(param_1 + 0x10) = puVar3 + 2;
    if ((uVar8 >> 4 & 1) == 0) {
      uVar7 = (uint)*puVar3;
    }
    else {
      uVar7 = (uint)(short)*puVar3;
    }
  }
  else {
    if (uVar5 != 4) {
      if (uVar5 != 8) {
        iVar1 = *(int *)(param_1 + 8);
        *(undefined1 *)(iVar1 + 0x1c) = 1;
        *(undefined4 *)(iVar1 + 0x18) = 0x16;
        uVar5 = FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
        return uVar5 & 0xffffff00;
      }
      puVar2 = *(uint **)(param_1 + 0x10);
      uVar8 = *(uint *)(param_1 + 0x1c);
      *(uint **)(param_1 + 0x10) = puVar2 + 2;
      uVar7 = *puVar2;
      local_c = puVar2[1];
      goto LAB_10261db0;
    }
    uVar8 = *(uint *)(param_1 + 0x1c);
    if ((uVar8 >> 4 & 1) == 0) {
      puVar2 = *(uint **)(param_1 + 0x10);
      local_c = 0;
      *(uint **)(param_1 + 0x10) = puVar2 + 1;
      uVar7 = *puVar2;
      goto LAB_10261db0;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    *(uint **)(param_1 + 0x10) = puVar2 + 1;
    uVar7 = *puVar2;
  }
  local_c = (int)uVar7 >> 0x1f;
LAB_10261db0:
  if ((((uVar8 >> 4 & 1) != 0) && ((int)local_c < 1)) && ((int)local_c < 0)) {
    bVar9 = uVar7 != 0;
    uVar7 = -uVar7;
    local_c = -(local_c + bVar9);
    uVar8 = uVar8 | 0x40;
    *(uint *)(param_1 + 0x1c) = uVar8;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar8 & 0xfffffff7;
    FUN_1026309e(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 8));
  }
  if (uVar7 == 0 && local_c == 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (uVar5 == 8) {
    FUN_1026323c(uVar7,local_c,param_2);
  }
  else {
    FUN_102632bc(uVar7,param_2);
  }
  psVar6 = (short *)(*(uint *)(param_1 + 0x1c) >> 7);
  if ((((uint)psVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x34) == 0 || (psVar6 = *(short **)(param_1 + 0x30), *psVar6 != 0x30)))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -2;
    **(undefined2 **)(param_1 + 0x30) = 0x30;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return CONCAT31((int3)((uint)psVar6 >> 8),1);
}

