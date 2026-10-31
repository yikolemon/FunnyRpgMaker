/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10045168 */

void __thiscall FUN_10045168(uint *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (*param_1 <= param_3) {
LAB_100451a4:
    *param_2 = 0;
    return;
  }
  uVar4 = *(uint *)(param_1[1] + param_3 * 4);
  uVar7 = uVar4 >> 0x1c;
  if (0xc < uVar7 - 1) goto LAB_100451a4;
  iVar1 = param_1[1] + *param_1 * 4;
  uVar4 = uVar4 & 0xfffffff;
  switch(uVar7) {
  case 1:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_2 = 1;
    goto LAB_10045230;
  case 2:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_2 = 2;
    goto LAB_10045230;
  case 3:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    uVar5 = *(undefined4 *)(iVar1 + 4 + uVar4);
    *param_2 = 3;
    goto LAB_100451f4;
  case 4:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    uVar5 = *(undefined4 *)(iVar1 + 4 + uVar4);
    *param_2 = 4;
LAB_100451f4:
    *(undefined4 *)(param_2 + 0xc) = uVar5;
    *(undefined4 *)(param_2 + 8) = uVar6;
    break;
  case 5:
    uVar2 = *(undefined1 *)(iVar1 + uVar4);
    *param_2 = 5;
    param_2[8] = uVar2;
    break;
  case 6:
    uVar3 = *(undefined2 *)(iVar1 + uVar4);
    *param_2 = 6;
    *(undefined2 *)(param_2 + 8) = uVar3;
    break;
  case 7:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_2 = 7;
    *(undefined4 *)(param_2 + 8) = uVar6;
    break;
  case 8:
    uVar8 = *(undefined8 *)(iVar1 + uVar4);
    *param_2 = 8;
    goto LAB_1004523d;
  case 9:
    uVar8 = *(undefined8 *)(iVar1 + uVar4);
    *param_2 = 9;
    goto LAB_1004523d;
  case 10:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_2 = 10;
    goto LAB_10045230;
  case 0xb:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_2 = 0xb;
LAB_10045230:
    *(undefined4 *)(param_2 + 8) = uVar6;
    break;
  case 0xc:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    uVar5 = *(undefined4 *)(iVar1 + 4 + uVar4);
    *param_2 = 0xc;
    *(undefined4 *)(param_2 + 8) = uVar6;
    *(undefined4 *)(param_2 + 0xc) = uVar5;
    break;
  case 0xd:
    *param_2 = 0xd;
    uVar8 = *(undefined8 *)(iVar1 + uVar4);
LAB_1004523d:
    *(undefined8 *)(param_2 + 8) = uVar8;
  }
  return;
}

