/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400637da */

void FUN_1400637da(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  ushort *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  if (uVar1 < param_2) {
    uVar4 = *param_5;
    uVar2 = (ulonglong)(uint)((int)param_2 - (int)uVar1);
    if (param_4 < uVar2) {
      uVar2 = param_4;
    }
    if (uVar2 != 0) {
      uVar3 = 0;
      uVar5 = (uint)uVar4;
      do {
        uVar6 = (uVar5 + *(byte *)(uVar1 + uVar3)) * 0xce6d + 0x58bf;
        uVar4 = (ushort)uVar6;
        *(byte *)(param_3 + uVar3) = (byte)(uVar5 >> 8) ^ *(byte *)(uVar1 + uVar3);
        uVar3 = uVar3 + 1;
        uVar5 = uVar6;
      } while (uVar2 != uVar3);
    }
    *param_1 = uVar1 + uVar2;
    *param_5 = uVar4;
  }
  return;
}

