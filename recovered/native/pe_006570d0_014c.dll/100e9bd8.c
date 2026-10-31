/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e9bd8 */

undefined1 * __thiscall FUN_100e9bd8(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int *local_4c;
  undefined1 *local_48;
  uint local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eae30;
  local_1c = ExceptionList;
  iVar8 = *param_1;
  local_38 = (param_1[1] - iVar8 >> 3) * -0x55555555 + 1;
  uVar7 = (param_1[2] - iVar8 >> 3) * -0x55555555;
  uVar10 = 0xaaaaaaa - (uVar7 >> 1);
  uVar11 = (uVar7 >> 1) + uVar7;
  if (uVar11 <= local_38) {
    uVar11 = local_38;
  }
  if (uVar10 <= uVar7 && uVar7 - uVar10 != 0) {
    uVar11 = 0xaaaaaaa;
  }
  ExceptionList = &local_1c;
  if (0xaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_4c;
  local_48 = (undefined1 *)FUN_10001426(uVar11 * 0x18);
  local_40 = (undefined1 *)((int)param_2 + (int)(local_48 + (0x18 - iVar8)));
  local_14 = 0;
  local_28 = (undefined1 *)((int)param_2 + ((int)local_48 - iVar8));
  local_4c = param_1;
  local_44 = uVar11;
  local_3c = local_40;
  local_34 = uVar11;
  local_30 = local_48;
  local_2c = local_40;
  local_24 = param_1;
  FUN_1000334a(param_3);
  local_40 = local_28;
  puVar2 = (undefined4 *)*local_24;
  puVar9 = (undefined4 *)local_24[1];
  if (param_2 == puVar9) {
    if (puVar2 != param_2) {
      iVar8 = 0;
      do {
        *(undefined8 *)(local_30 + iVar8 + 0x10) = 0;
        puVar9 = (undefined4 *)(local_30 + iVar8);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9 = (undefined4 *)((int)puVar2 + iVar8);
        *(undefined8 *)(local_30 + iVar8 + 0x10) = *(undefined8 *)(puVar9 + 4);
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        puVar1 = (undefined4 *)(local_30 + iVar8);
        *puVar1 = *puVar9;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar9[4] = 0;
        puVar9[5] = 0xf;
        *(undefined1 *)puVar9 = 0;
        iVar8 = iVar8 + 0x18;
      } while (puVar9 + 6 != param_2);
    }
  }
  else {
    if (puVar2 != param_2) {
      iVar8 = 0;
      do {
        *(undefined8 *)(local_30 + iVar8 + 0x10) = 0;
        puVar9 = (undefined4 *)(local_30 + iVar8);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9 = (undefined4 *)((int)puVar2 + iVar8);
        *(undefined8 *)(local_30 + iVar8 + 0x10) = *(undefined8 *)(puVar9 + 4);
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        puVar1 = (undefined4 *)(local_30 + iVar8);
        *puVar1 = *puVar9;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar9[4] = 0;
        puVar9[5] = 0xf;
        *(undefined1 *)puVar9 = 0;
        iVar8 = iVar8 + 0x18;
      } while (puVar9 + 6 != param_2);
      puVar9 = (undefined4 *)local_24[1];
    }
    local_40 = local_30;
    if (param_2 != puVar9) {
      iVar8 = 0;
      do {
        *(undefined8 *)(local_2c + iVar8 + 0x10) = 0;
        puVar2 = (undefined4 *)(local_2c + iVar8);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = (undefined4 *)((int)param_2 + iVar8);
        *(undefined8 *)(local_2c + iVar8 + 0x10) = *(undefined8 *)(puVar2 + 4);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar1 = (undefined4 *)(local_2c + iVar8);
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar2[4] = 0;
        puVar2[5] = 0xf;
        *(undefined1 *)puVar2 = 0;
        iVar8 = iVar8 + 0x18;
      } while (puVar2 + 6 != puVar9);
    }
  }
  local_14 = 0xffffffff;
  local_48 = (undefined1 *)0x0;
  FUN_100ab1a2(local_30,local_38,local_34);
  puVar6 = local_28;
  local_14 = 0xffffffff;
  FUN_100ab214();
  ExceptionList = local_1c;
  return puVar6;
}

