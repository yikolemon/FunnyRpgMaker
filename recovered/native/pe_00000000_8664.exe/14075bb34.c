/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075bb34 */

void FUN_14075bb34(void)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  uVar5 = (ulonglong)*(uint *)(uVar3 + 0x18);
  if ((*(uint *)(uVar3 + 0x20) == 0) ||
     (((int)(char)(*(uint *)(uVar5 + 0x120) >> 8) & *(uint *)(uVar3 + 0x20)) != 0)) {
    uVar2 = *(uint *)(uVar3 + 0x1c);
    *(uint *)(uVar5 + 0x120) = *(uint *)(uVar5 + 0x120) & 0xfffff1ff;
    *(undefined4 *)(uVar5 + 0x128) = 0x7f7fffff;
    *(undefined4 *)(uVar5 + 300) = 0x7f7fffff;
    uVar1 = *(undefined8 *)(uVar5 + 0x50);
    fVar6 = (float)(int)(float)*(undefined8 *)(ulonglong)uVar2;
    fVar7 = (float)(int)(float)((ulonglong)*(undefined8 *)(ulonglong)uVar2 >> 0x20);
    *(ulonglong *)(uVar5 + 0x50) = CONCAT44(fVar7,fVar6);
    fVar6 = fVar6 - (float)uVar1;
    fVar7 = fVar7 - (float)((ulonglong)uVar1 >> 0x20);
    if ((fVar6 != 0.0) || (((NAN(fVar6) || (fVar7 != 0.0)) || (NAN(fVar7))))) {
      *(ulonglong *)(uVar3 - 8) = uVar5;
      *(ulonglong *)(uVar3 - 4) = CONCAT44(fVar7,fVar6);
      *(undefined8 *)(uVar3 + 4) = 0;
      *(undefined8 *)(uVar3 - 0x10) = 0x14075bbb4;
      FUN_1407663d8();
      pfVar4 = (float *)(ulonglong)((int)(uVar3 - 8) + 4);
      fVar6 = *pfVar4;
      fVar7 = pfVar4[1];
      *(ulonglong *)(uVar5 + 0x144) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(uVar5 + 0x144) >> 0x20) + fVar7,
                    (float)*(undefined8 *)(uVar5 + 0x144) + fVar6);
      *(ulonglong *)(uVar5 + 0x164) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(uVar5 + 0x164) >> 0x20) + fVar7,
                    (float)*(undefined8 *)(uVar5 + 0x164) + fVar6);
      *(float *)(uVar5 + 0x154) = *(float *)(uVar5 + 0x154) + fVar6;
      *(float *)(uVar5 + 0x158) = *(float *)(uVar5 + 0x158) + fVar7;
      *(float *)(uVar5 + 0x15c) = *(float *)(uVar5 + 0x15c) + fVar6;
      *(float *)(uVar5 + 0x160) = *(float *)(uVar5 + 0x160) + fVar7;
    }
  }
  return;
}

