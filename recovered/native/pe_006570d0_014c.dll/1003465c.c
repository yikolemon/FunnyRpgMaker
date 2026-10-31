/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003465c */

void __thiscall FUN_1003465c(int param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 ***pppuVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  ushort uVar9;
  byte *pbVar10;
  int *piVar11;
  bool bVar12;
  undefined4 **local_68;
  undefined8 uStack_64;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  byte *local_30;
  undefined4 *local_2c;
  byte *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_68;
  local_18 = &LAB_10059b50;
  local_1c = ExceptionList;
  uVar7 = *(uint *)(param_2 + 0x14);
  pbVar6 = *(byte **)param_2;
  local_28 = param_2;
  if (0xf < uVar7) {
    local_28 = pbVar6;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  local_14 = 0;
  local_38 = (undefined4 *)0x0;
  piVar11 = *(int **)(param_1 + 0x68);
  piVar2 = *(int **)(param_1 + 0x6c);
  ExceptionList = &local_1c;
  local_34 = param_1;
  pppuVar3 = &local_68;
  if (piVar11 != piVar2) {
    do {
      local_20 = (undefined1 *)pppuVar3;
      if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
        local_68 = (undefined4 **)0x1;
        (*(code *)**(undefined4 **)*piVar11)();
      }
      piVar11 = piVar11 + 1;
      pppuVar3 = (undefined4 ***)local_20;
    } while (piVar11 != piVar2);
    *(undefined4 *)(local_34 + 0x6c) = *(undefined4 *)(local_34 + 0x68);
    pbVar6 = *(byte **)param_2;
    uVar7 = *(uint *)(param_2 + 0x14);
  }
  local_28 = local_28 + iVar1;
  if (0xf < uVar7) {
    param_2 = pbVar6;
  }
  local_40 = local_34 + 0x68;
  local_2c = (undefined4 *)0x0;
  puVar8 = (undefined4 *)0x0;
  do {
    if (param_2 == local_28) {
LAB_10034952:
      if (local_2c != (undefined4 *)0x0) {
        local_38 = (undefined4 *)0x0;
        local_24 = local_2c;
        local_14 = 2;
        local_68 = &local_24;
        FUN_1002349a();
        local_14 = 0xffffffff;
        if (local_24 != (undefined4 *)0x0) {
          local_68 = (undefined4 **)0x1;
          (**(code **)*local_24)();
        }
      }
      ExceptionList = local_1c;
      return;
    }
    bVar4 = *param_2;
    local_30 = param_2;
    if (bVar4 == 0x25) {
      if (puVar8 != (undefined4 *)0x0) {
        local_38 = (undefined4 *)0x0;
        local_14 = 3;
        local_68 = &local_24;
        local_24 = puVar8;
        FUN_1002349a();
        local_14 = 0xffffffff;
        if (local_24 != (undefined4 *)0x0) {
          local_68 = (undefined4 **)0x1;
          (**(code **)*local_24)();
        }
        local_2c = (undefined4 *)0x0;
      }
      pbVar6 = local_30 + 1;
      if (pbVar6 != local_28) {
        uVar5 = 1;
        if (*pbVar6 == 0x2d) {
LAB_10034790:
          pbVar6 = local_30 + 2;
        }
        else {
          uVar5 = 0;
          if (*pbVar6 == 0x3d) {
            uVar5 = 2;
            goto LAB_10034790;
          }
        }
        if ((pbVar6 != local_28) && ((byte)(*pbVar6 - 0x30) < 10)) {
          uVar7 = *pbVar6 - 0x30;
          pbVar10 = pbVar6 + 1;
          if (pbVar10 == local_28) {
            bVar12 = false;
          }
          else {
            bVar4 = *pbVar10;
            uVar9 = CONCAT11(bVar4 - 0x30,bVar4);
            if ((byte)(bVar4 - 0x30) < 10) {
              pbVar6 = pbVar6 + 2;
              do {
                pbVar10 = pbVar6;
                uVar7 = ((uVar9 & 0xff) + uVar7 * 10) - 0x30;
                if (pbVar10 == local_28) {
                  bVar12 = false;
                  pbVar10 = local_28;
                  goto LAB_100348f9;
                }
                bVar4 = *pbVar10;
                uVar9 = CONCAT11(bVar4 - 0x30,bVar4);
                pbVar6 = pbVar10 + 1;
              } while ((byte)(bVar4 - 0x30) < 10);
              pbVar6 = pbVar10 + -1;
            }
            bVar12 = bVar4 == 0x21;
            if (bVar12) {
              pbVar10 = pbVar6 + 2;
            }
          }
LAB_100348f9:
          if (pbVar10 != local_28) {
            if (0x3f < uVar7) {
              uVar7 = 0x40;
            }
            local_44 = (uint)CONCAT11(1,bVar12);
            local_68 = (undefined4 **)(int)(char)*pbVar10;
            local_14 = 0;
            local_3c = (undefined4 *)0x0;
            uStack_5c = local_44;
            uStack_64 = CONCAT44(uVar5,uVar7);
            local_4c = uVar7;
            uStack_48 = uVar5;
            local_30 = pbVar10;
            FUN_10034a48();
            goto LAB_100348d2;
          }
          goto LAB_10034952;
        }
      }
      if (pbVar6 == local_28) goto LAB_10034952;
      local_50 = 0;
      local_58 = 0;
      local_68 = (undefined4 **)(int)(char)*pbVar6;
      local_3c = (undefined4 *)0x0;
      local_14 = 0;
      uStack_5c = 0;
      uStack_64 = 0;
      local_30 = pbVar6;
      FUN_100367f8();
    }
    else {
      local_14 = 0;
      if (puVar8 == (undefined4 *)0x0) {
        local_68 = (undefined4 **)0x28;
        local_2c = (undefined4 *)FUN_10228350();
        local_14 = 1;
        *(undefined8 *)(local_2c + 8) = 0;
        local_2c[4] = 0;
        local_2c[5] = 0;
        local_2c[6] = 0;
        local_2c[7] = 0;
        *local_2c = 0;
        local_2c[1] = 0;
        local_2c[2] = 0;
        local_2c[3] = 0;
        FUN_10040c88();
        local_24 = (undefined4 *)0x0;
        local_38 = local_2c;
        bVar4 = *local_30;
        puVar8 = local_2c;
      }
      local_14 = 0;
      local_68 = (undefined4 **)(int)(char)bVar4;
      local_3c = puVar8;
      FUN_10003d9a();
    }
LAB_100348d2:
    param_2 = local_30 + 1;
    puVar8 = local_3c;
  } while( true );
}

