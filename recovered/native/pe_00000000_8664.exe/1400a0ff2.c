/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a0ff2 */

void FUN_1400a0ff2(float *param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  switch(param_3) {
  case 0:
    fVar1 = *(float *)(param_2 + 0x60);
    fVar2 = *(float *)(param_2 + 100);
    uVar5 = *(undefined8 *)(param_2 + 0x68);
    *param_1 = fVar1;
    param_1[1] = fVar2;
    param_1[2] = (float)uVar5 + fVar1;
    param_1[3] = (float)((ulonglong)uVar5 >> 0x20) + fVar2;
    return;
  case 1:
    fVar1 = *(float *)(param_2 + 0x268);
    fVar2 = *(float *)(param_2 + 0x26c);
    fVar3 = *(float *)(param_2 + 0x270);
    fVar4 = *(float *)(param_2 + 0x274);
    break;
  case 2:
    fVar1 = *(float *)(param_2 + 0x278);
    fVar2 = *(float *)(param_2 + 0x27c);
    fVar3 = *(float *)(param_2 + 0x280);
    fVar4 = *(float *)(param_2 + 0x284);
    break;
  case 3:
    fVar1 = *(float *)(param_2 + 0x288);
    fVar2 = *(float *)(param_2 + 0x28c);
    fVar3 = *(float *)(param_2 + 0x290);
    fVar4 = *(float *)(param_2 + 0x294);
    break;
  case 4:
    fVar1 = *(float *)(param_2 + 0x298);
    fVar2 = *(float *)(param_2 + 0x29c);
    fVar3 = *(float *)(param_2 + 0x2a0);
    fVar4 = *(float *)(param_2 + 0x2a4);
    break;
  case 5:
    uVar5 = CONCAT44(((float)((ulonglong)*(undefined8 *)(param_2 + 0x278) >> 0x20) -
                     (float)((ulonglong)*(undefined8 *)(param_2 + 0xd4) >> 0x20)) +
                     (float)((ulonglong)*(undefined8 *)(param_2 + 0x90) >> 0x20),
                     ((float)*(undefined8 *)(param_2 + 0x278) -
                     (float)*(undefined8 *)(param_2 + 0xd4)) +
                     (float)*(undefined8 *)(param_2 + 0x90));
    *(undefined8 *)param_1 = uVar5;
    fVar1 = (float)*(undefined8 *)(param_2 + 0x78);
    fVar2 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
    goto LAB_1400a10a7;
  case 6:
    uVar5 = CONCAT44(((float)((ulonglong)*(undefined8 *)(param_2 + 0x278) >> 0x20) -
                     (float)((ulonglong)*(undefined8 *)(param_2 + 0xd4) >> 0x20)) +
                     (float)((ulonglong)*(undefined8 *)(param_2 + 0x90) >> 0x20),
                     ((float)*(undefined8 *)(param_2 + 0x278) -
                     (float)*(undefined8 *)(param_2 + 0xd4)) +
                     (float)*(undefined8 *)(param_2 + 0x90));
    *(undefined8 *)param_1 = uVar5;
    fVar1 = (float)*(undefined8 *)(param_2 + 0x80);
    fVar2 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
LAB_1400a10a7:
    *(ulonglong *)(param_1 + 2) =
         CONCAT44(fVar2 + (float)((ulonglong)uVar5 >> 0x20),fVar1 + (float)uVar5);
    return;
  case 7:
    fVar1 = *(float *)(param_2 + 0x2c8);
    fVar2 = *(float *)(param_2 + 0x2cc);
    fVar3 = *(float *)(param_2 + 0x2d0);
    fVar4 = *(float *)(param_2 + 0x2d4);
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

