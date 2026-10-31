/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a97a */

int __thiscall FUN_1009a97a(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int *local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3c90;
  local_1c = ExceptionList;
  iVar7 = *param_1;
  local_38 = (param_1[1] - iVar7 >> 3) * -0x55555555 + 1;
  uVar6 = (param_1[2] - iVar7 >> 3) * -0x55555555;
  uVar9 = 0xaaaaaaa - (uVar6 >> 1);
  uVar10 = (uVar6 >> 1) + uVar6;
  if (uVar10 <= local_38) {
    uVar10 = local_38;
  }
  if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
    uVar10 = 0xaaaaaaa;
  }
  ExceptionList = &local_1c;
  if (0xaaaaaaa < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_4c;
  local_48 = FUN_10001426(uVar10 * 0x18);
  local_40 = (int)param_2 + (local_48 - iVar7) + 0x18;
  local_14 = 0;
  local_28 = (int)param_2 + (local_48 - iVar7);
  local_4c = param_1;
  local_44 = uVar10;
  local_3c = local_40;
  local_34 = uVar10;
  local_30 = local_48;
  local_2c = local_40;
  local_24 = param_1;
  FUN_10003728(param_3);
  local_40 = local_28;
  puVar2 = (undefined4 *)*local_24;
  puVar8 = (undefined4 *)local_24[1];
  if (param_2 == puVar8) {
    if (puVar2 != param_2) {
      iVar7 = 0;
      do {
        *(undefined8 *)(local_30 + 0x10 + iVar7) = 0;
        puVar8 = (undefined4 *)(local_30 + iVar7);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8 = (undefined4 *)((int)puVar2 + iVar7);
        *(undefined8 *)(local_30 + 0x10 + iVar7) = *(undefined8 *)(puVar8 + 4);
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        puVar1 = (undefined4 *)(local_30 + iVar7);
        *puVar1 = *puVar8;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar8[4] = 0;
        puVar8[5] = 7;
        *(undefined2 *)puVar8 = 0;
        iVar7 = iVar7 + 0x18;
      } while (puVar8 + 6 != param_2);
    }
  }
  else {
    if (puVar2 != param_2) {
      iVar7 = 0;
      do {
        *(undefined8 *)(local_30 + 0x10 + iVar7) = 0;
        puVar8 = (undefined4 *)(local_30 + iVar7);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8 = (undefined4 *)((int)puVar2 + iVar7);
        *(undefined8 *)(local_30 + 0x10 + iVar7) = *(undefined8 *)(puVar8 + 4);
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        puVar1 = (undefined4 *)(local_30 + iVar7);
        *puVar1 = *puVar8;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar8[4] = 0;
        puVar8[5] = 7;
        *(undefined2 *)puVar8 = 0;
        iVar7 = iVar7 + 0x18;
      } while (puVar8 + 6 != param_2);
      puVar8 = (undefined4 *)local_24[1];
    }
    local_40 = local_30;
    if (param_2 != puVar8) {
      iVar7 = 0;
      do {
        *(undefined8 *)(local_2c + 0x10 + iVar7) = 0;
        puVar2 = (undefined4 *)(local_2c + iVar7);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = (undefined4 *)((int)param_2 + iVar7);
        *(undefined8 *)(local_2c + 0x10 + iVar7) = *(undefined8 *)(puVar2 + 4);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar1 = (undefined4 *)(local_2c + iVar7);
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar2[4] = 0;
        puVar2[5] = 7;
        *(undefined2 *)puVar2 = 0;
        iVar7 = iVar7 + 0x18;
      } while (puVar2 + 6 != puVar8);
    }
  }
  local_14 = 0xffffffff;
  local_48 = 0;
  FUN_1008b344(local_30,local_38,local_34);
  iVar7 = local_28;
  local_14 = 0xffffffff;
  FUN_1008b3b6();
  ExceptionList = local_1c;
  return iVar7;
}

