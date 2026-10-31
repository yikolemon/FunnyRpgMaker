/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10066257 */

void FUN_10066257(undefined4 *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  puVar6 = param_3;
  do {
    puVar4 = puVar6;
    if (puVar4 <= param_2) break;
    puVar6 = puVar4 + -3;
  } while (*puVar4 == puVar4[-3]);
  do {
    param_3 = param_3 + 3;
    puVar6 = puVar4;
    puVar7 = param_3;
    if (param_4 <= param_3) break;
  } while (*puVar4 == *param_3);
LAB_1006629c:
  do {
    puVar5 = puVar4;
    if (puVar7 < param_4) {
      if (*puVar7 <= *puVar6) {
        if (*puVar6 != *puVar7) goto joined_r0x100662e9;
        if (puVar7 != param_3) {
          local_18 = param_3[2];
          local_20 = *(undefined8 *)param_3;
          param_3[2] = puVar7[2];
          *(undefined8 *)param_3 = *(undefined8 *)puVar7;
          puVar7[2] = local_18;
          *(undefined8 *)puVar7 = local_20;
        }
        param_3 = param_3 + 3;
      }
      puVar7 = puVar7 + 3;
      goto LAB_1006629c;
    }
joined_r0x100662e9:
    while (puVar3 = puVar6, puVar4 = puVar5, puVar6 = puVar3, param_2 < puVar4) {
      puVar5 = puVar4 + -3;
      if (*puVar3 <= puVar4[-3]) {
        if (*puVar3 < puVar4[-3]) break;
        puVar6 = puVar3 + -3;
        if (puVar4 != puVar3) {
          local_18 = puVar3[-1];
          local_20 = *(undefined8 *)puVar6;
          puVar3[-1] = puVar4[-1];
          *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
          puVar4[-1] = local_18;
          *(undefined8 *)puVar5 = local_20;
        }
      }
    }
    if (puVar7 == param_4 && puVar4 == param_2) {
      *param_1 = puVar3;
      param_1[1] = param_3;
      if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      return;
    }
    if (puVar4 == param_2) {
      if (param_3 != puVar7) {
        uVar2 = puVar3[2];
        uVar1 = *(undefined8 *)puVar3;
        puVar3[2] = param_3[2];
        *(undefined8 *)puVar3 = *(undefined8 *)param_3;
        param_3[2] = uVar2;
        *(undefined8 *)param_3 = uVar1;
      }
      param_3 = param_3 + 3;
      local_18 = puVar3[2];
      local_20 = *(undefined8 *)puVar3;
      puVar3[2] = puVar7[2];
      *(undefined8 *)puVar3 = *(undefined8 *)puVar7;
      puVar7[2] = local_18;
      *(undefined8 *)puVar7 = local_20;
      puVar6 = puVar3 + 3;
      puVar7 = puVar7 + 3;
    }
    else {
      puVar5 = puVar4 + -3;
      if (puVar7 == param_4) {
        puVar6 = puVar3 + -3;
        if (puVar4 != puVar3) {
          uVar2 = puVar4[-1];
          uVar1 = *(undefined8 *)puVar5;
          puVar4[-1] = puVar3[-1];
          *(undefined8 *)puVar5 = *(undefined8 *)puVar6;
          puVar3[-1] = uVar2;
          *(undefined8 *)puVar6 = uVar1;
        }
        local_18 = puVar3[-1];
        local_20 = *(undefined8 *)puVar6;
        puVar3[-1] = param_3[-1];
        *(undefined8 *)puVar6 = *(undefined8 *)(param_3 + -3);
        param_3[-1] = local_18;
        *(undefined8 *)(param_3 + -3) = local_20;
        param_3 = param_3 + -3;
        puVar4 = puVar5;
      }
      else {
        local_18 = puVar7[2];
        local_20 = *(undefined8 *)puVar7;
        puVar7[2] = puVar4[-1];
        *(undefined8 *)puVar7 = *(undefined8 *)puVar5;
        puVar4[-1] = local_18;
        *(undefined8 *)puVar5 = local_20;
        puVar4 = puVar5;
        puVar7 = puVar7 + 3;
      }
    }
  } while( true );
}

