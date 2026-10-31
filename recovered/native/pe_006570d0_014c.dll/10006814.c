/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10006814 */

void __thiscall FUN_10006814(uint *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (*param_1 <= param_3) {
LAB_10006850:
    *param_2 = 0;
    return;
  }
  uVar3 = *(uint *)(param_1[1] + param_3 * 4);
  uVar6 = uVar3 >> 0x1c;
  if (0xc < uVar6 - 1) goto LAB_10006850;
  iVar1 = param_1[1] + *param_1 * 4;
  uVar3 = uVar3 & 0xfffffff;
  switch(uVar6) {
  case 1:
    uVar5 = *(undefined4 *)(iVar1 + uVar3);
    *param_2 = 1;
    break;
  case 2:
    uVar5 = *(undefined4 *)(iVar1 + uVar3);
    *param_2 = 2;
    break;
  case 3:
    uVar5 = *(undefined4 *)(iVar1 + uVar3);
    uVar4 = *(undefined4 *)(iVar1 + 4 + uVar3);
    *param_2 = 3;
    goto LAB_1000689a;
  case 4:
    uVar5 = *(undefined4 *)(iVar1 + uVar3);
    uVar4 = *(undefined4 *)(iVar1 + 4 + uVar3);
    *param_2 = 4;
LAB_1000689a:
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 8) = uVar5;
    return;
  case 5:
    uVar2 = *(undefined1 *)(iVar1 + uVar3);
    *param_2 = 5;
    goto LAB_100068ba;
  case 6:
    uVar2 = *(undefined1 *)(iVar1 + uVar3);
    *param_2 = 6;
LAB_100068ba:
    param_2[8] = uVar2;
    return;
  case 7:
    uVar5 = *(undefined4 *)(iVar1 + uVar3);
    *param_2 = 7;
    *(undefined4 *)(param_2 + 8) = uVar5;
    return;
  case 8:
    uVar7 = *(undefined8 *)(iVar1 + uVar3);
    *param_2 = 8;
    goto LAB_100068e1;
  case 9:
    uVar7 = *(undefined8 *)(iVar1 + uVar3);
    *param_2 = 9;
    goto LAB_100068e1;
  case 10:
    uVar5 = *(undefined4 *)(iVar1 + uVar3);
    *param_2 = 10;
    break;
  case 0xb:
    uVar5 = *(undefined4 *)(iVar1 + uVar3);
    *param_2 = 0xb;
    break;
  case 0xc:
    uVar5 = *(undefined4 *)(iVar1 + uVar3);
    uVar4 = *(undefined4 *)(iVar1 + 4 + uVar3);
    *param_2 = 0xc;
    *(undefined4 *)(param_2 + 8) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    return;
  case 0xd:
    *param_2 = 0xd;
    uVar7 = *(undefined8 *)(iVar1 + uVar3);
LAB_100068e1:
    *(undefined8 *)(param_2 + 8) = uVar7;
    return;
  }
  *(undefined4 *)(param_2 + 8) = uVar5;
  return;
}

