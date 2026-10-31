/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004551c */

void FUN_18004551c(ulonglong *param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*param_1 <= param_3) {
LAB_180045568:
    *param_2 = 0;
    return;
  }
  uVar3 = *(ulonglong *)(param_1[1] + param_3 * 8);
  uVar6 = (uint)(uVar3 >> 0x3c);
  if (0xc < uVar6 - 1) goto LAB_180045568;
  puVar4 = (undefined8 *)((uVar3 & 0xfffffffffffffff) + param_1[1] + *param_1 * 8);
  switch(uVar6) {
  case 1:
    uVar7 = *(undefined4 *)puVar4;
    *param_2 = 1;
    goto LAB_1800455b1;
  case 2:
    uVar7 = *(undefined4 *)puVar4;
    *param_2 = 2;
LAB_1800455b1:
    *(undefined4 *)(param_2 + 8) = uVar7;
    return;
  case 3:
    uVar5 = *puVar4;
    *param_2 = 3;
    break;
  case 4:
    uVar5 = *puVar4;
    *param_2 = 4;
    break;
  case 5:
    uVar1 = *(undefined1 *)puVar4;
    *param_2 = 5;
    param_2[8] = uVar1;
    return;
  case 6:
    uVar2 = *(undefined2 *)puVar4;
    *param_2 = 6;
    *(undefined2 *)(param_2 + 8) = uVar2;
    return;
  case 7:
    uVar7 = *(undefined4 *)puVar4;
    *param_2 = 7;
    *(undefined4 *)(param_2 + 8) = uVar7;
    return;
  case 8:
    uVar7 = (undefined4)*puVar4;
    uVar8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    *param_2 = 8;
    goto LAB_1800455df;
  case 9:
    uVar7 = (undefined4)*puVar4;
    uVar8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    *param_2 = 9;
LAB_1800455df:
    *(ulonglong *)(param_2 + 8) = CONCAT44(uVar8,uVar7);
    return;
  case 10:
    uVar5 = *puVar4;
    *param_2 = 10;
    break;
  case 0xb:
    uVar5 = *puVar4;
    *param_2 = 0xb;
    break;
  case 0xc:
    uVar5 = puVar4[1];
    *(undefined8 *)(param_2 + 8) = *puVar4;
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    *param_2 = 0xc;
    return;
  case 0xd:
    uVar5 = puVar4[1];
    *(undefined8 *)(param_2 + 8) = *puVar4;
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    *param_2 = 0xd;
    return;
  }
  *(undefined8 *)(param_2 + 8) = uVar5;
  return;
}

