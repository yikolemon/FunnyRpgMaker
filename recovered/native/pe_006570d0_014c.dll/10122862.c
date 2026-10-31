/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10122862 */

void __fastcall FUN_10122862(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if (*(short *)(param_2 + 0x4c) == 0) {
    iVar2 = param_2 + 0x16c;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x18c) + *(short *)(param_2 + 0x4c) * 0x18 + -0x18;
  }
  switch(param_3) {
  case 0:
    uVar3 = *(undefined4 *)(param_2 + 0xc4);
    uVar4 = *(undefined4 *)(param_2 + 200);
    uVar5 = *(undefined4 *)(param_2 + 0xcc);
    uVar6 = *(undefined4 *)(param_2 + 0xd0);
    break;
  case 1:
    uVar3 = *(undefined4 *)(param_2 + 0xd4);
    uVar4 = *(undefined4 *)(param_2 + 0xd8);
    uVar5 = *(undefined4 *)(param_2 + 0xdc);
    uVar6 = *(undefined4 *)(param_2 + 0xe0);
    break;
  case 2:
    uVar3 = *(undefined4 *)(param_2 + 0xe4);
    uVar4 = *(undefined4 *)(param_2 + 0xe8);
    uVar5 = *(undefined4 *)(param_2 + 0xec);
    uVar6 = *(undefined4 *)(param_2 + 0xf0);
    break;
  case 3:
    uVar3 = *(undefined4 *)(param_2 + 0x134);
    uVar4 = *(undefined4 *)(param_2 + 0x138);
    uVar5 = *(undefined4 *)(param_2 + 0x13c);
    uVar6 = *(undefined4 *)(param_2 + 0x140);
    break;
  case 4:
    uVar3 = *(undefined4 *)(param_2 + 0xf4);
    uVar4 = *(undefined4 *)(param_2 + 0xf8);
    uVar5 = *(undefined4 *)(param_2 + 0xfc);
    uVar6 = *(undefined4 *)(param_2 + 0x100);
    break;
  case 5:
    uVar3 = *(undefined4 *)(param_2 + 0x104);
    uVar4 = *(undefined4 *)(param_2 + 0x108);
    uVar5 = *(undefined4 *)(param_2 + 0x10c);
    uVar6 = *(undefined4 *)(param_2 + 0x110);
    break;
  case 6:
    fVar8 = *(float *)(param_2 + 0xf8);
    fVar7 = *(float *)(iVar2 + 4) + fVar8;
    uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 8 + param_4 * 0x74);
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc + param_4 * 0x74);
    goto LAB_101229df;
  case 7:
    uVar3 = *(undefined4 *)(param_2 + 0xf0);
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x38 + param_4 * 0x74);
    uVar5 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x3c + param_4 * 0x74);
    fVar8 = *(float *)(param_2 + 0xe8);
    goto LAB_10122968;
  case 8:
    puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 0x24 + param_4 * 0x74);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    break;
  case 9:
    fVar8 = *(float *)(param_2 + 0xf8);
    fVar7 = *(float *)(iVar2 + 8) + fVar8;
    uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x38 + param_4 * 0x74);
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x4c + param_4 * 0x74);
    goto LAB_101229df;
  case 10:
    fVar8 = *(float *)(param_2 + 0xf8);
    fVar7 = *(float *)(iVar2 + 8) + fVar8;
    uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x38 + param_4 * 0x74);
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x50 + param_4 * 0x74);
    goto LAB_101229df;
  case 0xb:
    fVar8 = *(float *)(param_2 + 0xf8);
    fVar7 = *(float *)(iVar2 + 0xc) + fVar8;
    uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x38 + param_4 * 0x74);
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x44 + param_4 * 0x74);
LAB_101229df:
    *param_1 = uVar3;
    param_1[1] = fVar8;
    param_1[2] = uVar4;
    param_1[3] = fVar7;
    return;
  case 0xc:
    uVar3 = *(undefined4 *)(param_2 + 0x100);
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x38 + param_4 * 0x74);
    uVar5 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x48 + param_4 * 0x74);
    fVar8 = *(float *)(param_2 + 0xf8) + *(float *)(iVar2 + 0xc);
LAB_10122968:
    *param_1 = uVar4;
    param_1[1] = fVar8;
    param_1[2] = uVar5;
    param_1[3] = uVar3;
    return;
  default:
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  return;
}

