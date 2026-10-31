/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116c2d */

void FUN_180116c2d(float param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar2 = DAT_180419160;
  lVar3 = *(longlong *)(DAT_180419160 + 0x1608);
  pfVar1 = (float *)(DAT_180419160 + 0x1324);
  *(float *)(DAT_180419160 + 0xda8) = *pfVar1;
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
  uVar4 = FUN_1801179ee((float)(int)(param_1 + DAT_1802dbb2c),DAT_1802ac570,DAT_1802de860);
  if ((*(longlong *)(lVar2 + 0x1310) != 0) && ((*(byte *)(lVar2 + 0x34) & 0x10) != 0)) {
    *(undefined4 *)(*(longlong *)(lVar2 + 0x1310) + 0x14) = *(undefined4 *)(lVar2 + 0x132c);
  }
  *(undefined4 *)(lVar2 + 0x1320) = uVar4;
  *(undefined4 *)(lVar2 + 0x1358) = uVar4;
  if (lVar3 == 0) {
LAB_180116d55:
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
    if (*(longlong *)(lVar2 + 0x1310) == 0) goto LAB_180116d55;
    lVar3 = FUN_180197b74(*(longlong *)(lVar2 + 0x1310),uVar4,DAT_1802bb8e0);
    *(longlong *)(lVar2 + 0x1318) = lVar3;
    if (lVar3 != 0) {
      fVar5 = *(float *)(lVar2 + 0x1320) / *(float *)(lVar3 + 0x14);
      goto LAB_180116d63;
    }
  }
  fVar5 = 0.0;
LAB_180116d63:
  *(float *)(lVar2 + 0x1328) = fVar5;
  *(float *)(lVar2 + 0x135c) = fVar5;
  return;
}

