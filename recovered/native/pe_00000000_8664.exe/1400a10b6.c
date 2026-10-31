/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a10b6 */

void FUN_1400a10b6(undefined4 *param_1,longlong param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if ((longlong)*(short *)(param_2 + 0x78) == 0) {
    lVar2 = param_2 + 0x1a8;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x1c8) + (longlong)*(short *)(param_2 + 0x78) * 0x18 + -0x18;
  }
  switch(param_3) {
  case 0:
    uVar3 = *(undefined4 *)(param_2 + 0xf0);
    uVar4 = *(undefined4 *)(param_2 + 0xf4);
    uVar5 = *(undefined4 *)(param_2 + 0xf8);
    uVar6 = *(undefined4 *)(param_2 + 0xfc);
    break;
  case 1:
    uVar3 = *(undefined4 *)(param_2 + 0x100);
    uVar4 = *(undefined4 *)(param_2 + 0x104);
    uVar5 = *(undefined4 *)(param_2 + 0x108);
    uVar6 = *(undefined4 *)(param_2 + 0x10c);
    break;
  case 2:
    uVar3 = *(undefined4 *)(param_2 + 0x110);
    uVar4 = *(undefined4 *)(param_2 + 0x114);
    uVar5 = *(undefined4 *)(param_2 + 0x118);
    uVar6 = *(undefined4 *)(param_2 + 0x11c);
    break;
  case 3:
    uVar3 = *(undefined4 *)(param_2 + 0x160);
    uVar4 = *(undefined4 *)(param_2 + 0x164);
    uVar5 = *(undefined4 *)(param_2 + 0x168);
    uVar6 = *(undefined4 *)(param_2 + 0x16c);
    break;
  case 4:
    uVar3 = *(undefined4 *)(param_2 + 0x120);
    uVar4 = *(undefined4 *)(param_2 + 0x124);
    uVar5 = *(undefined4 *)(param_2 + 0x128);
    uVar6 = *(undefined4 *)(param_2 + 300);
    break;
  case 5:
    uVar3 = *(undefined4 *)(param_2 + 0x130);
    uVar4 = *(undefined4 *)(param_2 + 0x134);
    uVar5 = *(undefined4 *)(param_2 + 0x138);
    uVar6 = *(undefined4 *)(param_2 + 0x13c);
    break;
  case 6:
    fVar8 = *(float *)(param_2 + 0x124);
    fVar7 = *(float *)(lVar2 + 4) + fVar8;
    uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 8 + (longlong)param_4 * 0x74);
    uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0xc + (longlong)param_4 * 0x74);
    goto LAB_1400a1268;
  case 7:
    uVar3 = *(undefined4 *)(param_2 + 0x11c);
    uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x38 + (longlong)param_4 * 0x74);
    uVar5 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x3c + (longlong)param_4 * 0x74);
    fVar8 = *(float *)(param_2 + 0x114);
    goto LAB_1400a11e4;
  case 8:
    puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x24 + (longlong)param_4 * 0x74);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    break;
  case 9:
    fVar8 = *(float *)(param_2 + 0x124);
    fVar7 = *(float *)(lVar2 + 8) + fVar8;
    uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x38 + (longlong)param_4 * 0x74);
    uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x4c + (longlong)param_4 * 0x74);
    goto LAB_1400a1268;
  case 10:
    fVar8 = *(float *)(param_2 + 0x124);
    fVar7 = *(float *)(lVar2 + 8) + fVar8;
    uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x38 + (longlong)param_4 * 0x74);
    uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x50 + (longlong)param_4 * 0x74);
    goto LAB_1400a1268;
  case 0xb:
    fVar8 = *(float *)(param_2 + 0x124);
    fVar7 = *(float *)(lVar2 + 0xc) + fVar8;
    uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x38 + (longlong)param_4 * 0x74);
    uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x44 + (longlong)param_4 * 0x74);
LAB_1400a1268:
    *param_1 = uVar3;
    param_1[1] = fVar8;
    param_1[2] = uVar4;
    param_1[3] = fVar7;
    return;
  case 0xc:
    uVar3 = *(undefined4 *)(param_2 + 300);
    uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x38 + (longlong)param_4 * 0x74);
    uVar5 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x48 + (longlong)param_4 * 0x74);
    fVar8 = *(float *)(param_2 + 0x124) + *(float *)(lVar2 + 0xc);
LAB_1400a11e4:
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

