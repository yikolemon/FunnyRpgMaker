/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e8e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e8e70(uint param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  uVar4 = (ulonglong)((int)&stack0xffffffffffffffe8 - 0x30);
  uVar6 = (ulonglong)param_2;
  *(undefined8 *)(uVar4 - 8) = 0x20;
  *(undefined8 *)(uVar4 - 0x10) = 0x1407e8e8e;
  pbVar2 = (byte *)FUN_1407eae26(param_2);
  if ((int)pbVar2 == 0) {
    puVar5 = (undefined1 *)(uVar4 - 0x10);
    *(undefined8 *)(uVar4 - 0x10) = 9;
    *(undefined8 *)(uVar4 - 0x18) = 0x1407e8ee8;
    FUN_1407eae26(uVar6);
  }
  else {
    *pbVar2 = *pbVar2 & 0xfd;
    puVar5 = (undefined1 *)(uVar4 - 0x10);
    *(undefined8 *)(uVar4 - 0x10) = 9;
    *(undefined8 *)(uVar4 - 0x18) = 0x1407e8ea0;
    iVar1 = FUN_1407eae26(uVar6);
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)(uVar4 - 0x10 & 0xffffffff);
      *(undefined8 *)(puVar3 + 6) = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      puVar3[10] = 0xffffffff;
      *puVar3 = 0x240;
      puVar3[1] = *(float *)(((ulonglong)pbVar2 & 0xffffffff) + 4) * _DAT_150aa1b7b;
      *(undefined4 **)(uVar4 - 0x18) = puVar3;
      *(undefined8 *)(uVar4 - 0x20) = 0;
      *(ulonglong *)(uVar4 - 0x28) = uVar6;
      *(ulonglong *)(uVar4 - 0x30) = (ulonglong)param_1;
      *(undefined8 *)(uVar4 - 0x38) = 0x1407e8eda;
      FUN_1407e81fa();
      puVar5 = (undefined1 *)(ulonglong)((int)(uVar4 - 0x30) + 0x10);
    }
  }
  if (_DAT_150b71bf4 == (*(uint *)(puVar5 + 0x2c) ^ (uint)puVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -8) = FUN_1407e8f0a;
  FUN_1408802b0(*(uint *)(puVar5 + 0x2c) ^ (uint)puVar5);
}

