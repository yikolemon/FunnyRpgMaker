/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00451d16 */

int __cdecl FUN_00451d16(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint *local_554;
  int local_550;
  int *local_54c;
  int local_548;
  int iStack_544;
  uint uStack_540;
  int local_53c;
  int local_538;
  uint local_534;
  uint *puStack_530;
  uint local_52c [162];
  uint *local_2a4;
  uint uStack_2a0;
  int iStack_29c;
  int iStack_298;
  uint *puStack_8c;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_554;
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar2 + 0x148);
  local_538 = 0;
  iVar13 = *(int *)(iVar2 + 100);
  local_548 = *(int *)(iVar2 + 0x88);
  piVar4 = *(int **)(*(int *)(iVar2 + 0x80) + 0x34);
  if (piVar4 == (int *)0x0) {
    local_550 = iVar13;
    local_54c = piVar4;
    local_538 = FUN_00450b14(iVar2,param_2,&local_534,(uint *)&local_2a4,local_52c);
    puVar10 = (uint *)0x0;
    if ((local_538 == 0) && (uVar12 = local_52c[0] - (int)local_2a4, uVar12 != 0)) {
      local_554 = local_2a4;
      puVar10 = (uint *)FUN_0041e773(local_550,uVar12,&local_538);
      if ((local_538 == 0) &&
         (uVar9 = (int)local_554 + *(int *)(iVar2 + 0x134), local_554 = puVar10,
         local_538 = FUN_00420b08(piVar3,uVar9,puVar10,uVar12), puVar10 = local_554, local_538 == 0)
         ) {
        local_538 = 0;
        uVar9 = local_534;
LAB_00451f20:
        iVar13 = *(int *)(iVar2 + 0x13c);
        *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(iVar13 + uVar9 * 8);
        *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(iVar13 + 4 + uVar9 * 8);
        *(undefined4 *)(param_1 + 0x55c) = 0;
        *(undefined4 *)(param_1 + 0x560) = 0;
        local_53c = *(int *)(iVar2 + 0x130);
        iVar13 = uVar9 * 0xfc;
        puVar1 = (undefined4 *)(local_53c + 0xd8 + iVar13);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *(undefined4 *)(param_1 + 0x564) = *puVar1;
        *(undefined4 *)(param_1 + 0x568) = uVar5;
        *(undefined4 *)(param_1 + 0x56c) = uVar6;
        *(undefined4 *)(param_1 + 0x570) = uVar7;
        *(undefined8 *)(param_1 + 0x574) = *(undefined8 *)(local_53c + 0xe8 + iVar13);
        uVar9 = *(uint *)(local_53c + 4 + iVar13);
        *(uint *)(param_1 + 0x550) = uVar9;
        uVar11 = 0;
        if (-1 < (int)uVar9) {
          uVar11 = uVar9;
        }
        if (uVar12 < uVar11) {
          local_538 = 9;
          bVar14 = false;
          puVar10 = local_554;
          iVar13 = local_550;
        }
        else {
          iStack_544 = uVar12 - uVar11;
          uStack_540 = uVar11;
          if (-1 < (int)uVar9) {
            (**(code **)(local_548 + 0x10))(local_554,uVar12,0x10ea);
          }
          iVar8 = local_548;
          if (*(char *)(param_1 + 0x46) == '\0') {
            iVar13 = local_53c + iVar13;
            (**(code **)(local_548 + 0x18))(&local_2a4,param_1,1);
            (**(code **)(iVar8 + 0x1c))(iVar2,iVar13,local_52c);
            iVar2 = iStack_544;
            puStack_8c = local_52c;
            iVar13 = uStack_540 + (int)local_554;
            local_538 = (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(&local_2a4,iVar13,iStack_544);
            bVar14 = (char)local_538 == -0x5c;
            if (bVar14) {
              *(undefined1 *)(*(int *)(param_1 + 8) + 0xa0) = 0;
              local_538 = (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(&local_2a4,iVar13,iVar2);
            }
          }
          else {
            local_538 = (**(code **)(*(int *)(local_548 + 0xc) + 8))
                                  (param_1,uStack_540 + (int)local_554,iStack_544);
            bVar14 = false;
          }
          piVar3 = local_54c;
          iVar2 = local_550;
          puVar10 = local_554;
          iVar13 = local_550;
          if (((local_54c != (int *)0x0) && (local_538 == 0)) && (*(int *)(*local_54c + 8) != 0)) {
            uVar9 = FUN_00421311(*(int *)(param_1 + 0x20));
            local_2a4 = (uint *)((int)uVar9 >> 0x10);
            uStack_2a0 = 0;
            local_550 = iVar2;
            uVar9 = FUN_00421311(*(int *)(param_1 + 0x28));
            iStack_29c = (int)uVar9 >> 0x10;
            uVar9 = FUN_00421311(*(int *)(param_1 + 0x2c));
            iVar13 = local_550;
            iStack_298 = (int)uVar9 >> 0x10;
            local_538 = (**(code **)(*piVar3 + 8))(piVar3[1],param_2,0,&local_2a4);
            *(int *)(param_1 + 0x20) = (int)local_2a4 << 0x10;
            *(ulonglong *)(param_1 + 0x28) = CONCAT44(iStack_298 << 0x10,iStack_29c << 0x10);
            puVar10 = local_554;
          }
        }
        goto LAB_00451ee3;
      }
    }
    bVar14 = false;
    iVar13 = local_550;
  }
  else {
    local_538 = (**(code **)*piVar4)(piVar4[1],param_2,&local_2a4);
    puVar10 = (uint *)0x0;
    if (local_538 == 0) {
      uVar9 = *(uint *)(iVar2 + 0x120);
      uVar12 = uStack_2a0 - uVar9;
      local_550 = iVar13;
      local_54c = piVar4;
      if (uVar9 <= uStack_2a0) {
        puStack_530 = local_2a4;
        uVar9 = FUN_00450c1d((int *)&puStack_530,uVar9);
        local_534 = uVar9;
        if (uVar9 < *(uint *)(iVar2 + 300)) {
          local_554 = (uint *)FUN_0041e773(local_550,uVar12,&local_538);
          if (local_538 == 0) {
            FUN_004878c0(local_554,(uint *)((int)local_2a4 + *(int *)(iVar2 + 0x120)),uVar12);
          }
          (**(code **)(*local_54c + 4))(local_54c[1],&local_2a4);
          puVar10 = local_554;
          iVar13 = local_550;
          if (local_538 == 0) goto LAB_00451f20;
        }
        else {
          local_538 = 9;
          puVar10 = (uint *)0x0;
          iVar13 = local_550;
        }
      }
    }
    bVar14 = false;
  }
LAB_00451ee3:
  FUN_0041c607(iVar13,(int)puVar10);
  *(bool *)(*(int *)(param_1 + 8) + 0xa1) = bVar14;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_554)) {
    return local_538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_554);
}

