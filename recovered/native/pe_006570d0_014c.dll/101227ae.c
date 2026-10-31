/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101227ae */

void __fastcall FUN_101227ae(float *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  switch(param_3) {
  case 0:
    fVar1 = *(float *)(param_2 + 0x50);
    fVar2 = *(float *)(param_2 + 0x54);
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    *param_1 = fVar1;
    param_1[1] = fVar2;
    param_1[2] = (float)uVar5 + fVar1;
    param_1[3] = (float)((ulonglong)uVar5 >> 0x20) + fVar2;
    return;
  case 1:
    fVar1 = *(float *)(param_2 + 0x23c);
    fVar2 = *(float *)(param_2 + 0x240);
    fVar3 = *(float *)(param_2 + 0x244);
    fVar4 = *(float *)(param_2 + 0x248);
    break;
  case 2:
    fVar1 = *(float *)(param_2 + 0x24c);
    fVar2 = *(float *)(param_2 + 0x250);
    fVar3 = *(float *)(param_2 + 0x254);
    fVar4 = *(float *)(param_2 + 600);
    break;
  case 3:
    fVar1 = *(float *)(param_2 + 0x25c);
    fVar2 = *(float *)(param_2 + 0x260);
    fVar3 = *(float *)(param_2 + 0x264);
    fVar4 = *(float *)(param_2 + 0x268);
    break;
  case 4:
    fVar1 = *(float *)(param_2 + 0x26c);
    fVar2 = *(float *)(param_2 + 0x270);
    fVar3 = *(float *)(param_2 + 0x274);
    fVar4 = *(float *)(param_2 + 0x278);
    break;
  case 5:
    fVar1 = ((float)*(undefined8 *)(param_2 + 0x24c) - (float)*(undefined8 *)(param_2 + 0xc4)) +
            (float)*(undefined8 *)(param_2 + 0x80);
    fVar2 = ((float)((ulonglong)*(undefined8 *)(param_2 + 0x24c) >> 0x20) -
            (float)((ulonglong)*(undefined8 *)(param_2 + 0xc4) >> 0x20)) +
            (float)((ulonglong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
    *(ulonglong *)param_1 = CONCAT44(fVar2,fVar1);
    uVar5 = *(undefined8 *)(param_2 + 0x68);
    goto LAB_10122853;
  case 6:
    fVar1 = ((float)*(undefined8 *)(param_2 + 0x24c) - (float)*(undefined8 *)(param_2 + 0xc4)) +
            (float)*(undefined8 *)(param_2 + 0x80);
    fVar2 = ((float)((ulonglong)*(undefined8 *)(param_2 + 0x24c) >> 0x20) -
            (float)((ulonglong)*(undefined8 *)(param_2 + 0xc4) >> 0x20)) +
            (float)((ulonglong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
    *(ulonglong *)param_1 = CONCAT44(fVar2,fVar1);
    uVar5 = *(undefined8 *)(param_2 + 0x70);
LAB_10122853:
    *(ulonglong *)(param_1 + 2) =
         CONCAT44((float)((ulonglong)uVar5 >> 0x20) + fVar2,(float)uVar5 + fVar1);
    return;
  case 7:
    fVar1 = *(float *)(param_2 + 0x29c);
    fVar2 = *(float *)(param_2 + 0x2a0);
    fVar3 = *(float *)(param_2 + 0x2a4);
    fVar4 = *(float *)(param_2 + 0x2a8);
    break;
  default:
    fVar1 = 0.0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar4;
  return;
}

