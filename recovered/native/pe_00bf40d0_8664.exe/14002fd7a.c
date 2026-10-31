/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002fd7a */

undefined8 FUN_14002fd7a(longlong *param_1,undefined2 *param_2,longlong param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  byte bVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  undefined4 uVar13;
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
  
  local_60 = DAT_14012ea80 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  uVar4 = 6;
  if (param_3 == 0 || (param_2 == (undefined2 *)0x0 || param_1 == (longlong *)0x0))
  goto LAB_1400302e4;
  uVar4 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x88))(param_1[3]);
  puVar8 = (&PTR_DAT_1400f41b0)[*(int *)(param_2 + 8)];
  local_88 = 3;
  local_d8 = (undefined *)0x0;
  uStack_d0 = 0;
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xb0))
            (*(undefined4 *)
              ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
              (longlong)*(int *)(param_2 + 4) * 4),0,&local_88,&local_84);
  uVar2 = 0;
  if (local_88 != 0) {
    uVar2 = local_84;
  }
  iVar3 = 0;
  if (1 < local_88) {
    iVar3 = local_80;
  }
  local_78 = CONCAT44(iVar3,uVar2);
  uVar13 = 0;
  if (2 < local_88) {
    uVar13 = local_7c;
  }
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar13);
  if (param_4 == '\0') {
    if (uVar2 != 0x44464c54) goto LAB_14002fecc;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    if (uVar2 == 0) {
      local_78 = CONCAT44(iVar3,0x44464c54);
    }
    else if (iVar3 != 0x44464c54) {
      if (iVar3 == 0) {
        local_78 = CONCAT44(0x44464c54,uVar2);
      }
      else {
        uStack_70 = CONCAT44(uStack_70._4_4_,0x44464c54);
      }
    }
LAB_14002fecc:
    uVar5 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 200))();
    local_d8 = puVar8;
    uStack_d0 = uVar5;
    (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x98))(uVar4,0x47535542,&local_78,0);
    iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xe8))(uVar5);
    if (iVar3 == 0) {
      local_a8 = param_3;
      uVar6 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 200))();
      local_84 = 0xffffffff;
      iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar5);
      if (iVar3 != 0) {
        do {
          local_d8 = (undefined *)0x0;
          uStack_d0 = 0;
          local_c8 = uVar6;
          (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xa0))(uVar4,0x47535542,local_84,0);
          iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar5,&local_84);
        } while (iVar3 != 0);
      }
      uVar7 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 200))();
      local_d8 = puVar8;
      uStack_d0 = uVar7;
      (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x98))(uVar4,0x47504f53,&local_78,0);
      puVar8 = (undefined *)(**(code **)(*(longlong *)(param_1[99] + 0x48) + 200))();
      local_84 = 0xffffffff;
      iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar7);
      if (iVar3 != 0) {
        do {
          uStack_d0 = 0;
          local_c8 = 0;
          local_d8 = puVar8;
          (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xa0))(uVar4,0x47504f53,local_84,0);
          iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar7,&local_84);
        } while (iVar3 != 0);
      }
      lVar12 = local_a8;
      local_b8 = puVar8;
      if (*(int *)(param_2 + 8) == 10) {
LAB_140030095:
        local_84 = 0xffffffff;
        iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar6);
        puVar8 = local_b8;
        if (iVar3 != 0) {
          do {
            if ((local_84 < *(uint *)(param_1 + 1)) &&
               (*(short *)(lVar12 + (ulonglong)local_84 * 2) == 0x1fff)) {
              *(undefined2 *)(lVar12 + (ulonglong)local_84 * 2) = *param_2;
            }
            iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar6,&local_84);
          } while (iVar3 != 0);
        }
      }
      else {
        iVar3 = *(int *)(&DAT_1400ef420 + (longlong)*(int *)(param_2 + 6) * 8);
        if (iVar3 != 0x159b) {
          puVar8 = &DAT_1400ef420 + (longlong)*(int *)(param_2 + 6) * 8;
          bVar1 = false;
          local_b0 = uVar7;
          local_a0 = param_2;
          local_98 = uVar6;
          do {
            bVar9 = (&DAT_1400ede80)[iVar3];
            local_90 = puVar8;
            if (bVar9 != 0) {
              pbVar11 = &DAT_1400ede80 + iVar3;
              do {
                if ((char)bVar9 < '\0') {
                  uVar10 = (ulonglong)(bVar9 < 0xf0 ^ 3);
                  if (bVar9 < 0xe0) {
                    uVar10 = 1;
                  }
                  iVar3 = 0;
                  do {
                    iVar3 = iVar3 + 1;
                  } while ((int)uVar10 != iVar3);
                  pbVar11 = pbVar11 + uVar10;
                }
                pbVar11 = pbVar11 + 1;
                local_84 = 0xffffffff;
                do {
                  iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf0))(uVar5,&local_84);
                  if (iVar3 == 0) goto LAB_14003021e;
                  local_88 = FUN_14001e059(*param_1);
                  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,1);
                  iVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xa8))
                                    (uVar4,local_84,&local_88,1);
                } while (iVar3 == 0);
                bVar1 = true;
LAB_14003021e:
                bVar9 = *pbVar11;
              } while (bVar9 != 0);
            }
            uVar6 = local_98;
            param_2 = local_a0;
            lVar12 = local_a8;
            uVar7 = local_b0;
            iVar3 = *(int *)(local_90 + 8);
            puVar8 = local_90 + 8;
          } while (iVar3 != 0x159b);
          puVar8 = local_b8;
          if (bVar1) {
            if (*(int *)(local_a0 + 8) != 10) {
              (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xf8))(local_98,local_b8);
            }
            goto LAB_140030095;
          }
        }
      }
    }
    else {
      uVar6 = 0;
      uVar7 = 0;
      puVar8 = (undefined *)0x0;
    }
  }
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xd0))(uVar5);
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xd0))(uVar6);
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xd0))(uVar7);
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0xd0))(puVar8);
  uVar4 = 0;
LAB_1400302e4:
  if (DAT_14012ea80 == (local_60 ^ (ulonglong)auStack_f8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_60 ^ (ulonglong)auStack_f8);
}

