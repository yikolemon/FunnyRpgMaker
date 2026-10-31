/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b25c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14075b25c(ulonglong param_1,ulonglong param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar5 = _DAT_150af89ba;
  puVar9 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar13 = param_2 & 0xffffffff;
  uVar14 = param_1 & 0xffffffff;
  uVar12 = (ulonglong)_DAT_150af89ba;
  uVar6 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  uVar8 = (ulonglong)uVar6;
  if (uVar6 == 0) {
    *(undefined8 *)(puVar9 + -8) = 0xb0;
    *(undefined8 *)(puVar9 + -0x10) = 0x14075b284;
    uVar6 = FUN_1407520ca();
    uVar10 = (ulonglong)((int)(puVar9 + -8) + 4);
    uVar8 = (ulonglong)uVar6;
    puVar9 = (undefined1 *)(uVar10 - 8);
    *(ulonglong *)(uVar10 - 8) = (ulonglong)(uVar5 + 0x123c);
    *(undefined8 *)(uVar10 - 0x10) = 0x14075b297;
    FUN_1407deea8(uVar8);
    *(undefined4 *)(uVar8 + 0xac) = *(undefined4 *)(uVar10 + 0x14);
    *(uint *)(uVar14 + 0x90 + uVar13 * 4) = uVar6;
  }
  fVar1 = *(float *)(uVar14 + 0x88 + uVar13 * 4);
  if ((fVar1 != (float)*(double *)(uVar12 + 0x18)) ||
     (NAN(fVar1) || NAN((float)*(double *)(uVar12 + 0x18)))) {
    *(undefined8 *)(puVar9 + -8) = 0x14075b2c5;
    FUN_1407df542(uVar8);
    uVar7 = (ulonglong)*(uint *)(uVar12 + 0x5c);
    puVar11 = (undefined8 *)(ulonglong)((int)puVar9 - 0x10);
    uVar2 = *(undefined4 *)(uVar7 + 0x24);
    uVar3 = *(undefined4 *)(uVar7 + 0x28);
    uVar4 = *(undefined4 *)(uVar7 + 0x2c);
    *(undefined4 *)puVar11 = *(undefined4 *)(uVar7 + 0x20);
    *(undefined4 *)((longlong)puVar11 + 4) = uVar2;
    *(undefined4 *)(puVar11 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar4;
    puVar11[-1] = 0x14075b2da;
    FUN_1407e028a(uVar8);
    *puVar11 = CONCAT44((float)((ulonglong)*(undefined8 *)(uVar14 + 0x10) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(uVar14 + 8) >> 0x20),
                        (float)*(undefined8 *)(uVar14 + 0x10) + (float)*(undefined8 *)(uVar14 + 8));
    puVar11[-1] = 0;
    puVar11[-2] = puVar11;
    puVar11[-3] = (ulonglong)((int)param_1 + 8);
    puVar11[-4] = 0x14075b2fa;
    FUN_1407e0084(uVar8);
    *(float *)(uVar14 + 0x88 + uVar13 * 4) = (float)*(double *)(uVar12 + 0x18);
  }
  return uVar8;
}

