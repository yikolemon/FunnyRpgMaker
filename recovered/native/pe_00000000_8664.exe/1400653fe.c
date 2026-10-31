/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400653fe */

void FUN_1400653fe(ulonglong *param_1,undefined1 *param_2,ulonglong param_3)

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
LAB_14006544a:
    *param_2 = 0;
    return;
  }
  uVar3 = *(ulonglong *)(param_1[1] + param_3 * 8);
  uVar6 = (uint)(uVar3 >> 0x3c);
  if (0xc < uVar6 - 1) goto LAB_14006544a;
  puVar4 = (undefined8 *)((uVar3 & 0xfffffffffffffff) + param_1[1] + *param_1 * 8);
  switch(uVar6) {
  case 1:
    uVar7 = *(undefined4 *)puVar4;
    *param_2 = 1;
    goto LAB_140065493;
  case 2:
    uVar7 = *(undefined4 *)puVar4;
    *param_2 = 2;
LAB_140065493:
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
    goto LAB_1400654c1;
  case 9:
    uVar7 = (undefined4)*puVar4;
    uVar8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    *param_2 = 9;
LAB_1400654c1:
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

