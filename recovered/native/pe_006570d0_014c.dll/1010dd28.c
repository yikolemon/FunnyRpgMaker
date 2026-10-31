/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010dd28 */

void FUN_1010dd28(int param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((param_3 != 0) && (((int)(char)(*(uint *)(param_1 + 0x120) >> 0x10) & param_3) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xfff1ffff;
  if (((*(byte *)(param_1 + 0xf) & 1) == 0) || (*(char *)(param_1 + 0x100) != '\0')) {
    *(char *)(param_1 + 0x118) = (*param_2 <= 0.0) * '\x02';
  }
  else {
    if ((*(byte *)(param_1 + 0x14) & 0x40) != 0) {
      *(char *)(param_1 + 0x118) = (*param_2 <= 0.0) * '\x02';
    }
    if ((*(byte *)(param_1 + 0x14) & 0x40) == 0) goto LAB_1010dd93;
  }
  *(char *)(param_1 + 0x119) = (param_2[1] <= 0.0) * '\x02';
LAB_1010dd93:
  fVar1 = *(float *)(param_1 + 0x60);
  if (*param_2 <= 0.0) {
    *(undefined1 *)(param_1 + 0x11a) = 0;
    fVar3 = fVar1;
  }
  else {
    fVar3 = (float)(int)*param_2;
    *(float *)(param_1 + 0x60) = fVar3;
  }
  fVar2 = *(float *)(param_1 + 100);
  if (param_2[1] <= 0.0) {
    *(undefined1 *)(param_1 + 0x11a) = 0;
    fVar4 = fVar2;
  }
  else {
    fVar4 = (float)(int)param_2[1];
    *(float *)(param_1 + 100) = fVar4;
  }
  if ((((fVar1 == fVar3) && (!NAN(fVar1) && !NAN(fVar3))) && (fVar2 == fVar4)) &&
     (!NAN(fVar2) && !NAN(fVar4))) {
    return;
  }
  FUN_1010e508();
  return;
}

