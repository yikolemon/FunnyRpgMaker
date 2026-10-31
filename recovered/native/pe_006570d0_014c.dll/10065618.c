/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10065618 */

void FUN_10065618(undefined4 *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  puVar7 = param_3;
  do {
    puVar9 = puVar7;
    if (puVar9 <= param_2) break;
    uVar2 = puVar9[-3];
    uVar8 = puVar9[-2] - uVar2;
    uVar3 = *puVar9;
    uVar10 = puVar9[1] - uVar3;
    bVar4 = uVar10 < uVar8;
    if (uVar8 == uVar10) {
      bVar4 = uVar2 < uVar3;
    }
    if (bVar4) break;
    bVar4 = uVar8 < uVar10;
    if (uVar8 == uVar10) {
      bVar4 = uVar3 < uVar2;
    }
    puVar7 = puVar9 + -3;
  } while (!bVar4);
  do {
    local_24 = param_3 + 3;
    local_30 = local_24;
    local_2c = puVar9;
    if (param_4 <= local_24) break;
    uVar2 = *local_24;
    uVar8 = param_3[4] - uVar2;
    uVar3 = *puVar9;
    uVar10 = puVar9[1] - uVar3;
    bVar4 = uVar10 < uVar8;
    if (uVar8 == uVar10) {
      bVar4 = uVar2 < uVar3;
    }
    if (bVar4) break;
    bVar4 = uVar8 < uVar10;
    if (uVar8 == uVar10) {
      bVar4 = uVar3 < uVar2;
    }
    param_3 = local_24;
  } while (!bVar4);
joined_r0x100656ea:
  do {
    puVar7 = local_2c;
    if (param_4 <= local_24) {
joined_r0x1006579e:
      while (puVar6 = puVar9, puVar5 = local_2c, local_2c = puVar7, puVar9 = puVar6,
            param_2 < puVar5) {
        uVar2 = puVar5[-3];
        uVar8 = puVar5[-2] - uVar2;
        uVar3 = *puVar6;
        uVar10 = puVar6[1] - uVar3;
        bVar4 = uVar10 < uVar8;
        if (uVar8 == uVar10) {
          bVar4 = uVar2 < uVar3;
        }
        local_2c = puVar5 + -3;
        local_28 = puVar6;
        if (!bVar4) {
          bVar4 = uVar8 < uVar10;
          if (uVar8 == uVar10) {
            bVar4 = uVar3 < uVar2;
          }
          if (bVar4) break;
          puVar9 = puVar6 + -3;
          puVar7 = local_2c;
          if (puVar5 != puVar6) {
            local_18 = puVar6[-1];
            local_20 = *(undefined8 *)puVar9;
            puVar6[-1] = puVar5[-1];
            *(undefined8 *)puVar9 = *(undefined8 *)local_2c;
            puVar5[-1] = local_18;
            *(undefined8 *)local_2c = local_20;
          }
        }
      }
      if (local_24 == param_4 && puVar5 == param_2) {
        *param_1 = puVar6;
        param_1[1] = local_30;
        if (DAT_10388d00 == (local_14 ^ (uint)&local_30)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      if (puVar5 == param_2) {
        if (local_30 != local_24) {
          uVar2 = puVar6[2];
          uVar1 = *(undefined8 *)puVar6;
          puVar6[2] = local_30[2];
          *(undefined8 *)puVar6 = *(undefined8 *)local_30;
          local_30[2] = uVar2;
          *(undefined8 *)local_30 = uVar1;
        }
        local_30 = local_30 + 3;
        local_18 = puVar6[2];
        local_20 = *(undefined8 *)puVar6;
        puVar6[2] = local_24[2];
        *(undefined8 *)puVar6 = *(undefined8 *)local_24;
        local_24[2] = local_18;
        *(undefined8 *)local_24 = local_20;
        puVar9 = puVar6 + 3;
        local_24 = local_24 + 3;
        local_2c = puVar5;
      }
      else {
        local_2c = puVar5 + -3;
        if (local_24 == param_4) {
          puVar9 = puVar6 + -3;
          if (puVar5 != puVar6) {
            uVar2 = puVar5[-1];
            uVar1 = *(undefined8 *)local_2c;
            puVar5[-1] = puVar6[-1];
            *(undefined8 *)local_2c = *(undefined8 *)puVar9;
            puVar6[-1] = uVar2;
            *(undefined8 *)puVar9 = uVar1;
          }
          local_18 = puVar6[-1];
          local_20 = *(undefined8 *)puVar9;
          puVar6[-1] = local_30[-1];
          *(undefined8 *)puVar9 = *(undefined8 *)(local_30 + -3);
          local_30[-1] = local_18;
          *(undefined8 *)(local_30 + -3) = local_20;
          local_30 = local_30 + -3;
        }
        else {
          local_18 = local_24[2];
          local_20 = *(undefined8 *)local_24;
          local_24[2] = puVar5[-1];
          *(undefined8 *)local_24 = *(undefined8 *)local_2c;
          puVar5[-1] = local_18;
          *(undefined8 *)local_2c = local_20;
          local_24 = local_24 + 3;
        }
      }
      goto joined_r0x100656ea;
    }
    uVar2 = *puVar9;
    uVar8 = puVar9[1] - uVar2;
    uVar3 = *local_24;
    uVar10 = local_24[1] - uVar3;
    bVar4 = uVar10 < uVar8;
    if (uVar8 == uVar10) {
      bVar4 = uVar2 < uVar3;
    }
    local_28 = puVar9;
    if (!bVar4) {
      bVar4 = uVar8 < uVar10;
      if (uVar8 == uVar10) {
        bVar4 = uVar3 < uVar2;
      }
      if (bVar4) goto joined_r0x1006579e;
      if (local_24 != local_30) {
        local_18 = local_30[2];
        local_20 = *(undefined8 *)local_30;
        local_30[2] = local_24[2];
        *(undefined8 *)local_30 = *(undefined8 *)local_24;
        local_24[2] = local_18;
        *(undefined8 *)local_24 = local_20;
      }
      local_30 = local_30 + 3;
    }
    local_24 = local_24 + 3;
  } while( true );
}

