/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009b484 */

void __thiscall FUN_1009b484(int *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  void *pvVar13;
  void *pvVar14;
  int *local_3c;
  undefined8 *local_38;
  uint local_34;
  void *local_30;
  void *local_2c;
  undefined8 *local_28;
  int *local_24;
  undefined1 *local_20;
  void *pvVar15;
  
  iVar11 = *param_1;
  pvVar14 = (void *)param_1[1];
  iVar6 = (int)pvVar14 - iVar11 >> 2;
  iVar7 = param_2 + iVar6 * 0x55555555;
  if (param_2 < (uint)(iVar6 * -0x55555555)) {
    pvVar15 = (void *)(iVar11 + param_2 * 0xc);
    for (pvVar13 = pvVar15; pvVar13 != pvVar14; pvVar13 = (void *)((int)pvVar13 + 0xc)) {
      FUN_1006dc58();
    }
    param_1[1] = (int)pvVar15;
  }
  else if (iVar7 != 0) {
    if ((uint)((param_1[2] - iVar11 >> 2) * -0x55555555) < param_2) {
      local_20 = (undefined1 *)&local_3c;
      if (0x15555555 < param_2) {
        ExceptionList = &stack0xffffffe4;
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      uVar10 = (param_1[2] - *param_1 >> 2) * -0x55555555;
      uVar8 = 0x15555555 - (uVar10 >> 1);
      uVar9 = (uVar10 >> 1) + uVar10;
      if (uVar9 <= param_2) {
        uVar9 = param_2;
      }
      if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
        uVar9 = 0x15555555;
      }
      local_24 = param_1;
      if (uVar9 < 0x15555556) {
        iVar11 = param_1[1] - *param_1;
        pvVar15 = ExceptionList;
        ExceptionList = &stack0xffffffe4;
        local_20 = (undefined1 *)&local_3c;
        local_38 = (undefined8 *)FUN_10001426(uVar9 * 0xc);
        pvVar14 = (void *)((int)local_38 + iVar11);
        iVar11 = (iVar11 >> 2) * 0x55555555 + param_2;
        local_3c = param_1;
        local_34 = uVar9;
        local_30 = pvVar14;
        local_28 = local_38;
        if (iVar11 != 0) {
          sVar4 = iVar11 * 0xc;
          local_2c = pvVar14;
          _memset(pvVar14,0,sVar4);
          pvVar14 = (void *)((int)pvVar14 + sVar4);
        }
        puVar2 = (undefined8 *)local_24[1];
        puVar12 = local_28;
        for (puVar5 = (undefined8 *)*local_24; puVar5 != puVar2;
            puVar5 = (undefined8 *)((int)puVar5 + 0xc)) {
          uVar3 = *(undefined4 *)(puVar5 + 1);
          *(undefined4 *)(puVar5 + 1) = 0;
          uVar1 = *puVar5;
          *(undefined4 *)((int)puVar5 + 4) = 0;
          *(undefined4 *)puVar5 = 0;
          *puVar12 = uVar1;
          *(undefined4 *)(puVar12 + 1) = uVar3;
          puVar12 = (undefined8 *)((int)puVar12 + 0xc);
        }
        local_38 = (undefined8 *)0x0;
        local_2c = pvVar14;
        FUN_1009b66e(local_28,param_2,uVar9);
        FUN_1009b6e0();
        ExceptionList = pvVar15;
        return;
      }
      ExceptionList = &stack0xffffffe4;
      local_20 = (undefined1 *)&local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_1000146d();
    }
    sVar4 = iVar7 * 0xc;
    local_20 = (undefined1 *)0x1009b4f7;
    _memset(pvVar14,0,sVar4);
    param_1[1] = (int)((int)pvVar14 + sVar4);
  }
  return;
}

