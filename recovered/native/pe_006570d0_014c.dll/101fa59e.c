/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fa59e */

int FUN_101fa59e(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  bool bVar12;
  int local_554;
  undefined4 local_550;
  int *local_54c;
  int local_548;
  int iStack_544;
  uint uStack_540;
  int local_53c;
  int local_538;
  uint local_534;
  int iStack_530;
  int local_52c [162];
  int local_2a4;
  uint uStack_2a0;
  int iStack_29c;
  int iStack_298;
  int *piStack_8c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_554;
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(iVar2 + 0x148);
  local_538 = 0;
  uVar11 = *(undefined4 *)(iVar2 + 100);
  local_548 = *(int *)(iVar2 + 0x88);
  piVar4 = *(int **)(*(int *)(iVar2 + 0x80) + 0x34);
  if (piVar4 == (int *)0x0) {
    local_550 = uVar11;
    local_54c = piVar4;
    local_538 = FUN_101f939c(&local_534,&local_2a4,local_52c);
    iVar8 = 0;
    if ((local_538 == 0) && (uVar10 = local_52c[0] - local_2a4, uVar10 != 0)) {
      local_554 = local_2a4;
      iVar8 = FUN_101c21f6(local_550,uVar10,&local_538);
      if ((local_538 == 0) &&
         (iVar6 = local_554 + *(int *)(iVar2 + 0x134), local_554 = iVar8,
         local_538 = FUN_101c4a90(uVar3,iVar6,iVar8,uVar10), iVar8 = local_554, local_538 == 0)) {
        local_538 = 0;
        uVar7 = local_534;
LAB_101fa7a8:
        iVar8 = *(int *)(iVar2 + 0x13c);
        *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(iVar8 + uVar7 * 8);
        *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(iVar8 + 4 + uVar7 * 8);
        *(undefined4 *)(param_1 + 0x55c) = 0;
        *(undefined4 *)(param_1 + 0x560) = 0;
        local_53c = *(int *)(iVar2 + 0x130);
        iVar8 = uVar7 * 0xfc;
        puVar1 = (undefined4 *)(local_53c + 0xd8 + iVar8);
        uVar3 = puVar1[1];
        uVar11 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(param_1 + 0x564) = *puVar1;
        *(undefined4 *)(param_1 + 0x568) = uVar3;
        *(undefined4 *)(param_1 + 0x56c) = uVar11;
        *(undefined4 *)(param_1 + 0x570) = uVar5;
        *(undefined8 *)(param_1 + 0x574) = *(undefined8 *)(local_53c + 0xe8 + iVar8);
        uVar7 = *(uint *)(local_53c + 4 + iVar8);
        *(uint *)(param_1 + 0x550) = uVar7;
        uVar9 = 0;
        if (-1 < (int)uVar7) {
          uVar9 = uVar7;
        }
        if (uVar10 < uVar9) {
          local_538 = 9;
          bVar12 = false;
          iVar8 = local_554;
          uVar11 = local_550;
        }
        else {
          iStack_544 = uVar10 - uVar9;
          uStack_540 = uVar9;
          if (-1 < (int)uVar7) {
            (**(code **)(local_548 + 0x10))(local_554,uVar10,0x10ea);
          }
          iVar6 = local_548;
          if (*(char *)(param_1 + 0x46) == '\0') {
            iVar8 = local_53c + iVar8;
            (**(code **)(local_548 + 0x18))(&local_2a4,param_1,1);
            (**(code **)(iVar6 + 0x1c))(iVar2,iVar8,local_52c);
            iVar2 = iStack_544;
            piStack_8c = local_52c;
            iVar8 = uStack_540 + local_554;
            local_538 = (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(&local_2a4,iVar8,iStack_544);
            bVar12 = (char)local_538 == -0x5c;
            if (bVar12) {
              *(undefined1 *)(*(int *)(param_1 + 8) + 0xa0) = 0;
              local_538 = (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(&local_2a4,iVar8,iVar2);
            }
          }
          else {
            local_538 = (**(code **)(*(int *)(local_548 + 0xc) + 8))
                                  (param_1,uStack_540 + local_554,iStack_544);
            bVar12 = false;
          }
          piVar4 = local_54c;
          uVar3 = local_550;
          iVar8 = local_554;
          uVar11 = local_550;
          if (((local_54c != (int *)0x0) && (local_538 == 0)) && (*(int *)(*local_54c + 8) != 0)) {
            local_2a4 = FUN_101c5299(*(undefined4 *)(param_1 + 0x20));
            local_2a4 = local_2a4 >> 0x10;
            uStack_2a0 = 0;
            local_550 = uVar3;
            iStack_29c = FUN_101c5299(*(undefined4 *)(param_1 + 0x28));
            iStack_29c = iStack_29c >> 0x10;
            iStack_298 = FUN_101c5299(*(undefined4 *)(param_1 + 0x2c));
            uVar11 = local_550;
            iStack_298 = iStack_298 >> 0x10;
            local_538 = (**(code **)(*piVar4 + 8))(piVar4[1],param_2,0,&local_2a4);
            *(int *)(param_1 + 0x20) = local_2a4 << 0x10;
            *(ulonglong *)(param_1 + 0x28) = CONCAT44(iStack_298 << 0x10,iStack_29c << 0x10);
            iVar8 = local_554;
          }
        }
        goto LAB_101fa76b;
      }
    }
    bVar12 = false;
    uVar11 = local_550;
  }
  else {
    local_538 = (**(code **)*piVar4)(piVar4[1],param_2,&local_2a4);
    iVar8 = 0;
    if ((local_538 == 0) &&
       (uVar10 = uStack_2a0 - *(uint *)(iVar2 + 0x120), local_550 = uVar11, local_54c = piVar4,
       *(uint *)(iVar2 + 0x120) <= uStack_2a0)) {
      iStack_530 = local_2a4;
      uVar7 = FUN_101f94a5();
      local_534 = uVar7;
      if (uVar7 < *(uint *)(iVar2 + 300)) {
        local_554 = FUN_101c21f6(local_550,uVar10,&local_538);
        if (local_538 == 0) {
          FUN_1025b2d0(local_554,local_2a4 + *(int *)(iVar2 + 0x120),uVar10);
        }
        (**(code **)(*local_54c + 4))(local_54c[1],&local_2a4);
        iVar8 = local_554;
        uVar11 = local_550;
        if (local_538 == 0) goto LAB_101fa7a8;
      }
      else {
        local_538 = 9;
        iVar8 = 0;
        uVar11 = local_550;
      }
    }
    bVar12 = false;
  }
LAB_101fa76b:
  FUN_101c0017(uVar11,iVar8);
  *(bool *)(*(int *)(param_1 + 8) + 0xa1) = bVar12;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_554)) {
    return local_538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

