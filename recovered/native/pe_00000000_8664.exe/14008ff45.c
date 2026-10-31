/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008ff45 */

void FUN_14008ff45(float param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar2 = DAT_140f2a910;
  lVar3 = *(longlong *)(DAT_140f2a910 + 0x1608);
  pfVar1 = (float *)(DAT_140f2a910 + 0x1324);
  *(float *)(DAT_140f2a910 + 0xda8) = *pfVar1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    param_1 = *pfVar1 * *(float *)(lVar2 + 0xdac) * *(float *)(lVar2 + 0xdb0);
    if (lVar3 != 0) {
      param_1 = param_1 * *(float *)(lVar3 + 0x310);
    }
    param_1 = param_1 * *(float *)(lVar2 + 0xc28);
    if (*(longlong *)(lVar2 + 0x1310) != 0) {
      param_1 = param_1 * *(float *)(*(longlong *)(lVar2 + 0x1310) + 0x48);
    }
  }
  uVar4 = FUN_140090d06((float)(int)(param_1 + DAT_1401c86a0),DAT_1401c86c8,DAT_1402115c0);
  if ((*(longlong *)(lVar2 + 0x1310) != 0) && ((*(byte *)(lVar2 + 0x34) & 0x10) != 0)) {
    *(undefined4 *)(*(longlong *)(lVar2 + 0x1310) + 0x14) = *(undefined4 *)(lVar2 + 0x132c);
  }
  *(undefined4 *)(lVar2 + 0x1320) = uVar4;
  *(undefined4 *)(lVar2 + 0x1358) = uVar4;
  if (lVar3 == 0) {
LAB_14009006d:
    *(undefined8 *)(lVar2 + 0x1318) = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x10e) == '\x01') {
      lVar3 = *(longlong *)(lVar2 + 0x24f8);
      if (lVar3 == 0) {
        return;
      }
      if (((longlong)*(int *)(lVar3 + 0x74) != -1) &&
         (*(char *)(*(longlong *)(lVar3 + 0x18) + 0x6c + (longlong)*(int *)(lVar3 + 0x74) * 0x74) ==
          '\0')) {
        return;
      }
    }
    if (*(longlong *)(lVar2 + 0x1310) == 0) goto LAB_14009006d;
    lVar3 = FUN_1400e30e8(*(longlong *)(lVar2 + 0x1310),uVar4,DAT_1401c86a4);
    *(longlong *)(lVar2 + 0x1318) = lVar3;
    if (lVar3 != 0) {
      fVar5 = *(float *)(lVar2 + 0x1320) / *(float *)(lVar3 + 0x14);
      goto LAB_14009007b;
    }
  }
  fVar5 = 0.0;
LAB_14009007b:
  *(float *)(lVar2 + 0x1328) = fVar5;
  *(float *)(lVar2 + 0x135c) = fVar5;
  return;
}

