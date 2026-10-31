/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009b266 */

void __thiscall FUN_1009b266(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  iVar12 = *param_1;
  puVar9 = (undefined4 *)param_1[1];
  uVar6 = ((int)puVar9 - iVar12 >> 3) * -0x55555555;
  if (param_2 < uVar6) {
    puVar1 = (undefined4 *)(iVar12 + param_2 * 0x18);
    for (puVar11 = puVar1; puVar11 != puVar9; puVar11 = puVar11 + 6) {
      local_14 = 0x1009b29a;
      FUN_10001134();
    }
    param_1[1] = (int)puVar1;
  }
  else if (uVar6 < param_2) {
    if ((uint)((param_1[2] - iVar12 >> 3) * -0x55555555) < param_2) {
      local_20 = (undefined1 *)&local_38;
      local_14 = 0xffffffff;
      local_18 = &LAB_100c3d10;
      local_1c = ExceptionList;
      ExceptionList = &local_1c;
      if (0xaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      uVar10 = (param_1[2] - *param_1 >> 3) * -0x55555555;
      uVar8 = 0xaaaaaaa - (uVar10 >> 1);
      uVar6 = (uVar10 >> 1) + uVar10;
      if (uVar6 <= param_2) {
        uVar6 = param_2;
      }
      if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
        uVar6 = 0xaaaaaaa;
      }
      local_24 = param_1;
      if (uVar6 < 0xaaaaaab) {
        iVar12 = param_1[1] - *param_1;
        local_20 = (undefined1 *)&local_38;
        iVar7 = FUN_10001426(uVar6 * 0x18);
        local_2c = (undefined4 *)(iVar7 + iVar12);
        local_28 = local_2c;
        for (iVar12 = (iVar12 >> 3) * 0x55555555 + param_2; iVar12 != 0; iVar12 = iVar12 + -1) {
          *local_28 = 0;
          local_28[1] = 0;
          local_28[2] = 0;
          local_28[3] = 0;
          local_28[4] = 0;
          local_28[5] = 7;
          local_28 = local_28 + 6;
        }
        local_14 = 0xffffffff;
        puVar9 = (undefined4 *)*local_24;
        puVar1 = (undefined4 *)local_24[1];
        if (puVar9 != puVar1) {
          iVar12 = 0;
          do {
            *(undefined8 *)(iVar7 + 0x10 + iVar12) = 0;
            puVar11 = (undefined4 *)(iVar7 + iVar12);
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11 = (undefined4 *)((int)puVar9 + iVar12);
            *(undefined8 *)(iVar7 + 0x10 + iVar12) = *(undefined8 *)(puVar11 + 4);
            uVar3 = puVar11[1];
            uVar4 = puVar11[2];
            uVar5 = puVar11[3];
            puVar2 = (undefined4 *)(iVar7 + iVar12);
            *puVar2 = *puVar11;
            puVar2[1] = uVar3;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
            puVar11[4] = 0;
            puVar11[5] = 7;
            *(undefined2 *)puVar11 = 0;
            iVar12 = iVar12 + 0x18;
          } while (puVar11 + 6 != puVar1);
        }
        local_34 = 0;
        local_38 = param_1;
        local_30 = uVar6;
        FUN_1008b344(iVar7,param_2,uVar6);
        local_14 = 0xffffffff;
        FUN_1008b3b6();
        ExceptionList = local_1c;
        return;
      }
      local_20 = (undefined1 *)&local_38;
                    /* WARNING: Subroutine does not return */
      FUN_1000146d();
    }
    if (param_2 != uVar6) {
      iVar12 = uVar6 - param_2;
      do {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 7;
        puVar9 = puVar9 + 6;
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0);
    }
    param_1[1] = (int)puVar9;
  }
  return;
}

