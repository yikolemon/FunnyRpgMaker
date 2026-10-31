/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d7570 */

void FUN_100d7570(undefined4 *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *local_1c;
  
  puVar7 = param_3;
  do {
    puVar9 = puVar7;
    if (puVar9 <= param_2) break;
    puVar7 = puVar9 + -2;
  } while (*puVar9 == puVar9[-2] && puVar9[1] == puVar9[-1]);
  do {
    puVar4 = param_3 + 2;
    local_1c = puVar4;
    puVar7 = puVar9;
    if (param_4 <= puVar4) break;
    puVar10 = param_3 + 3;
    param_3 = puVar4;
  } while (*puVar9 == *puVar4 && puVar9[1] == *puVar10);
LAB_100d75be:
  do {
    if (param_4 <= puVar4) {
joined_r0x100d7610:
      while (puVar5 = puVar7, puVar10 = puVar9, param_2 < puVar10) {
        uVar3 = puVar10[-2];
        uVar6 = puVar10[-1];
        uVar8 = puVar5[1];
        uVar2 = (uint)(uVar3 < *puVar5);
        puVar9 = puVar10 + -2;
        puVar7 = puVar5;
        if ((SBORROW4(uVar6,uVar8) != SBORROW4(uVar6 - uVar8,uVar2)) ==
            (int)((uVar6 - uVar8) - uVar2) < 0) {
          uVar2 = (uint)(*puVar5 < uVar3);
          if ((SBORROW4(uVar8,uVar6) != SBORROW4(uVar8 - uVar6,uVar2)) !=
              (int)((uVar8 - uVar6) - uVar2) < 0) break;
          puVar7 = puVar5 + -2;
          if (puVar10 != puVar5) {
            uVar1 = *(undefined8 *)puVar7;
            puVar5[-1] = uVar6;
            *puVar7 = uVar3;
            *(undefined8 *)puVar9 = uVar1;
          }
        }
      }
      if (puVar4 == param_4 && puVar10 == param_2) {
        *param_1 = puVar5;
        param_1[1] = local_1c;
        return;
      }
      if (puVar10 == param_2) {
        uVar3 = *puVar5;
        uVar6 = puVar5[1];
        if (local_1c != puVar4) {
          *(undefined8 *)puVar5 = *(undefined8 *)local_1c;
          local_1c[1] = uVar6;
          *local_1c = uVar3;
          uVar6 = puVar5[1];
          uVar3 = *puVar5;
        }
        local_1c = local_1c + 2;
        *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
        puVar4[1] = uVar6;
        *puVar4 = uVar3;
        puVar5 = puVar5 + 2;
      }
      else {
        puVar9 = puVar10 + -2;
        if (puVar4 == param_4) {
          puVar7 = puVar5 + -2;
          uVar3 = puVar5[-1];
          uVar6 = puVar5[-2];
          uVar8 = uVar3;
          if (puVar10 != puVar5) {
            uVar6 = *puVar9;
            uVar8 = puVar10[-1];
            *puVar9 = puVar5[-2];
            puVar10[-1] = uVar3;
            *puVar7 = uVar6;
            puVar5[-1] = uVar8;
          }
          *(undefined8 *)puVar7 = *(undefined8 *)(local_1c + -2);
          local_1c[-1] = uVar8;
          local_1c[-2] = uVar6;
          local_1c = local_1c + -2;
          goto LAB_100d75be;
        }
        uVar1 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar4 = *(undefined8 *)puVar9;
        *(undefined8 *)puVar9 = uVar1;
        puVar10 = puVar9;
      }
      puVar4 = puVar4 + 2;
      puVar9 = puVar10;
      puVar7 = puVar5;
      goto LAB_100d75be;
    }
    uVar3 = puVar7[1];
    uVar6 = *puVar4;
    uVar8 = puVar4[1];
    uVar2 = (uint)(*puVar7 < uVar6);
    if ((SBORROW4(uVar3,uVar8) != SBORROW4(uVar3 - uVar8,uVar2)) ==
        (int)((uVar3 - uVar8) - uVar2) < 0) {
      uVar2 = (uint)(uVar6 < *puVar7);
      if ((SBORROW4(uVar8,uVar3) != SBORROW4(uVar8 - uVar3,uVar2)) !=
          (int)((uVar8 - uVar3) - uVar2) < 0) goto joined_r0x100d7610;
      if (puVar4 != local_1c) {
        uVar1 = *(undefined8 *)local_1c;
        local_1c[1] = uVar8;
        *local_1c = uVar6;
        *(undefined8 *)puVar4 = uVar1;
      }
      local_1c = local_1c + 2;
    }
    puVar4 = puVar4 + 2;
  } while( true );
}

