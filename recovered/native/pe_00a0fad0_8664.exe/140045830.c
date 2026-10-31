/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140045830 */

void FUN_140045830(ulonglong *param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*param_1 <= param_3) {
LAB_14004587c:
    *param_2 = 0;
    return;
  }
  uVar1 = *(ulonglong *)(param_1[1] + param_3 * 8);
  uVar5 = (uint)(uVar1 >> 0x3c);
  if (0xc < uVar5 - 1) goto LAB_14004587c;
  puVar3 = (undefined8 *)((uVar1 & 0xfffffffffffffff) + param_1[1] + *param_1 * 8);
  switch(uVar5) {
  case 1:
    uVar6 = *(undefined4 *)puVar3;
    *param_2 = 1;
    goto LAB_1400458c3;
  case 2:
    uVar6 = *(undefined4 *)puVar3;
    *param_2 = 2;
LAB_1400458c3:
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
    goto LAB_1400458cc;
  case 6:
    uVar2 = *(undefined1 *)puVar3;
    *param_2 = 6;
LAB_1400458cc:
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
    goto LAB_1400458ef;
  case 9:
    uVar6 = (undefined4)*puVar3;
    uVar7 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    *param_2 = 9;
LAB_1400458ef:
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

