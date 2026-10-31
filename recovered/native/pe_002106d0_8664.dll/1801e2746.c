/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e2746 */

undefined8 FUN_1801e2746(undefined8 *param_1,undefined2 *param_2,longlong param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined2 *local_a0;
  undefined8 local_98;
  undefined *local_90;
  uint local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  uVar3 = 6;
  if (param_3 == 0 || (param_2 == (undefined2 *)0x0 || param_1 == (undefined8 *)0x0))
  goto LAB_1801e2cb0;
  uVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x88))(param_1[3]);
  puVar7 = (&PTR_DAT_180337090)[*(int *)(param_2 + 8)];
  local_88 = 3;
  local_d8 = (undefined *)0x0;
  uStack_d0 = 0;
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xb0))
            (*(undefined4 *)
              ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
              (longlong)*(int *)(param_2 + 4) * 4),0,&local_88,&local_84);
  uVar10 = 0;
  if (local_88 != 0) {
    uVar10 = local_84;
  }
  iVar2 = 0;
  if (1 < local_88) {
    iVar2 = local_80;
  }
  local_78 = CONCAT44(iVar2,uVar10);
  uVar14 = 0;
  if (2 < local_88) {
    uVar14 = local_7c;
  }
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar14);
  if (param_4 == '\0') {
    if (uVar10 != 0x44464c54) goto LAB_1801e2898;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    if (uVar10 == 0) {
      local_78 = CONCAT44(iVar2,0x44464c54);
    }
    else if (iVar2 != 0x44464c54) {
      if (iVar2 == 0) {
        local_78 = CONCAT44(0x44464c54,uVar10);
      }
      else {
        uStack_70 = CONCAT44(uStack_70._4_4_,0x44464c54);
      }
    }
LAB_1801e2898:
    uVar4 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 200))();
    local_d8 = puVar7;
    uStack_d0 = uVar4;
    (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x98))(uVar3,0x47535542,&local_78,0);
    iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xe8))(uVar4);
    if (iVar2 == 0) {
      local_a8 = param_3;
      uVar5 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 200))();
      local_84 = 0xffffffff;
      iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar4);
      if (iVar2 != 0) {
        do {
          local_d8 = (undefined *)0x0;
          uStack_d0 = 0;
          local_c8 = uVar5;
          (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xa0))(uVar3,0x47535542,local_84,0);
          iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar4,&local_84);
        } while (iVar2 != 0);
      }
      uVar6 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 200))();
      local_d8 = puVar7;
      uStack_d0 = uVar6;
      (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x98))(uVar3,0x47504f53,&local_78,0);
      puVar7 = (undefined *)(**(code **)(*(longlong *)(param_1[99] + 0x48) + 200))();
      local_84 = 0xffffffff;
      iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar6);
      if (iVar2 != 0) {
        do {
          uStack_d0 = 0;
          local_c8 = 0;
          local_d8 = puVar7;
          (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xa0))(uVar3,0x47504f53,local_84,0);
          iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar6,&local_84);
        } while (iVar2 != 0);
      }
      lVar11 = local_a8;
      local_b8 = puVar7;
      if (*(int *)(param_2 + 8) == 10) {
LAB_1801e2a61:
        local_84 = 0xffffffff;
        iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar5);
        puVar7 = local_b8;
        if (iVar2 != 0) {
          do {
            if ((local_84 < *(uint *)(param_1 + 1)) &&
               (*(short *)(lVar11 + (ulonglong)local_84 * 2) == 0x1fff)) {
              *(undefined2 *)(lVar11 + (ulonglong)local_84 * 2) = *param_2;
            }
            iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar5,&local_84);
          } while (iVar2 != 0);
        }
      }
      else {
        iVar2 = *(int *)(&DAT_180332300 + (longlong)*(int *)(param_2 + 6) * 8);
        if (iVar2 != 0x159b) {
          puVar7 = &DAT_180332300 + (longlong)*(int *)(param_2 + 6) * 8;
          bVar1 = false;
          local_b0 = uVar6;
          local_a0 = param_2;
          local_98 = uVar5;
          do {
            bVar8 = (&DAT_180330d60)[iVar2];
            local_90 = puVar7;
            if (bVar8 != 0) {
              pbVar12 = &DAT_180330d60 + iVar2;
              do {
                pbVar13 = pbVar12 + 1;
                uVar10 = (uint)bVar8;
                if ((char)bVar8 < '\0') {
                  uVar10 = (uint)(bVar8 < 0xf0) * 8 + 7;
                  if (bVar8 < 0xe0) {
                    uVar10 = 0x1f;
                  }
                  uVar9 = (ulonglong)(bVar8 < 0xf0 ^ 3);
                  if (bVar8 < 0xe0) {
                    uVar9 = 1;
                  }
                  uVar10 = bVar8 & uVar10;
                  lVar11 = 0;
                  do {
                    uVar10 = pbVar13[lVar11] & 0x3f | uVar10 << 6;
                    lVar11 = lVar11 + 1;
                  } while ((int)uVar9 != (int)lVar11);
                  pbVar13 = pbVar12 + uVar9 + 1;
                }
                local_84 = 0xffffffff;
                do {
                  iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar4,&local_84);
                  if (iVar2 == 0) goto LAB_1801e2bea;
                  local_88 = FUN_1801cb681(*param_1,uVar10);
                  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,1);
                  iVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xa8))
                                    (uVar3,local_84,&local_88,1);
                } while (iVar2 == 0);
                bVar1 = true;
LAB_1801e2bea:
                bVar8 = *pbVar13;
                pbVar12 = pbVar13;
              } while (bVar8 != 0);
            }
            uVar5 = local_98;
            param_2 = local_a0;
            lVar11 = local_a8;
            uVar6 = local_b0;
            iVar2 = *(int *)(local_90 + 8);
            puVar7 = local_90 + 8;
          } while (iVar2 != 0x159b);
          puVar7 = local_b8;
          if (bVar1) {
            if (*(int *)(local_a0 + 8) != 10) {
              (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf8))(local_98,local_b8);
            }
            goto LAB_1801e2a61;
          }
        }
      }
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      puVar7 = (undefined *)0x0;
    }
  }
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xd0))(uVar4);
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xd0))(uVar5);
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xd0))(uVar6);
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xd0))(puVar7);
  uVar3 = 0;
LAB_1801e2cb0:
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_f8);
  }
  return uVar3;
}

