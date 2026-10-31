/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008bd12 */

void FUN_14008bd12(longlong param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((param_3 != 0) && (((int)(char)(*(uint *)(param_1 + 0x130) >> 0x10) & param_3) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfff1ffff;
  if (((*(byte *)(param_1 + 0x17) & 1) == 0) || (*(char *)(param_1 + 0x110) != '\0')) {
    *(char *)(param_1 + 0x128) = (*param_2 <= 0.0) * '\x02';
  }
  else {
    if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
      *(char *)(param_1 + 0x128) = (*param_2 <= 0.0) * '\x02';
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x40) == 0) goto LAB_14008bd72;
  }
  *(char *)(param_1 + 0x129) = (param_2[1] <= 0.0) * '\x02';
LAB_14008bd72:
  fVar1 = *(float *)(param_1 + 0x70);
  if (*param_2 <= 0.0) {
    *(undefined1 *)(param_1 + 0x12a) = 0;
    fVar3 = fVar1;
  }
  else {
    fVar3 = (float)(int)*param_2;
    *(float *)(param_1 + 0x70) = fVar3;
  }
  fVar2 = *(float *)(param_1 + 0x74);
  if (param_2[1] <= 0.0) {
    *(undefined1 *)(param_1 + 0x12a) = 0;
    fVar4 = fVar2;
  }
  else {
    fVar4 = (float)(int)param_2[1];
    *(float *)(param_1 + 0x74) = fVar4;
  }
  if ((((fVar1 == fVar3) && (!NAN(fVar1) && !NAN(fVar3))) && (fVar2 == fVar4)) &&
     (!NAN(fVar2) && !NAN(fVar4))) {
    return;
  }
  FUN_14008c560();
  return;
}

