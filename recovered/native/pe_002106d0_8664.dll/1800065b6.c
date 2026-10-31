/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800065b6 */

void FUN_1800065b6(ulonglong *param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*param_1 <= param_3) {
LAB_180006602:
    *param_2 = 0;
    return;
  }
  uVar1 = *(ulonglong *)(param_1[1] + param_3 * 8);
  uVar5 = (uint)(uVar1 >> 0x3c);
  if (0xc < uVar5 - 1) goto LAB_180006602;
  puVar3 = (undefined8 *)((uVar1 & 0xfffffffffffffff) + param_1[1] + *param_1 * 8);
  switch(uVar5) {
  case 1:
    uVar6 = *(undefined4 *)puVar3;
    *param_2 = 1;
    goto LAB_180006649;
  case 2:
    uVar6 = *(undefined4 *)puVar3;
    *param_2 = 2;
LAB_180006649:
    *(undefined4 *)(param_2 + 8) = uVar6;
    return;
  case 3:
    uVar4 = *puVar3;
    *param_2 = 3;
    break;
  case 4:
    uVar4 = *puVar3;
    *param_2 = 4;
    break;
  case 5:
    uVar2 = *(undefined1 *)puVar3;
    *param_2 = 5;
    goto LAB_180006652;
  case 6:
    uVar2 = *(undefined1 *)puVar3;
    *param_2 = 6;
LAB_180006652:
    param_2[8] = uVar2;
    return;
  case 7:
    uVar6 = *(undefined4 *)puVar3;
    *param_2 = 7;
    *(undefined4 *)(param_2 + 8) = uVar6;
    return;
  case 8:
    uVar6 = (undefined4)*puVar3;
    uVar7 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    *param_2 = 8;
    goto LAB_180006675;
  case 9:
    uVar6 = (undefined4)*puVar3;
    uVar7 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    *param_2 = 9;
LAB_180006675:
    *(ulonglong *)(param_2 + 8) = CONCAT44(uVar7,uVar6);
    return;
  case 10:
    uVar4 = *puVar3;
    *param_2 = 10;
    break;
  case 0xb:
    uVar4 = *puVar3;
    *param_2 = 0xb;
    break;
  case 0xc:
    uVar4 = puVar3[1];
    *(undefined8 *)(param_2 + 8) = *puVar3;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    *param_2 = 0xc;
    return;
  case 0xd:
    uVar4 = puVar3[1];
    *(undefined8 *)(param_2 + 8) = *puVar3;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    *param_2 = 0xd;
    return;
  }
  *(undefined8 *)(param_2 + 8) = uVar4;
  return;
}

