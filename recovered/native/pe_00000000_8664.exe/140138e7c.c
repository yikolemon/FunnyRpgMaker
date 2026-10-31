/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140138e7c */

void FUN_140138e7c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  uVar6 = *(ulonglong *)(param_1 + 0x50 + (ulonglong)param_2 * 0x898);
  if (uVar6 != 0) {
    uVar2 = *(uint *)(param_1 + (ulonglong)param_2 * 0x898 + 0x48);
    uVar1 = uVar6 + (ulonglong)uVar2 * 0x48;
    if (param_2 == 0) {
      if (uVar2 != 0) {
        do {
          lVar3 = *(longlong *)(uVar6 + 0x10);
          if (lVar3 != 0) {
            pbVar7 = (byte *)(uVar6 + 0x38);
            pbVar4 = *(byte **)(uVar6 + 0x40);
            do {
              pbVar5 = *(byte **)pbVar7;
              *(undefined4 *)(pbVar5 + 0x10) = *(undefined4 *)(lVar3 + 8);
              *pbVar5 = *pbVar5 | 4;
              pbVar7 = pbVar5 + 0x20;
            } while (pbVar5 != pbVar4);
          }
          uVar6 = uVar6 + 0x48;
        } while (uVar6 < uVar1);
      }
    }
    else if (uVar2 != 0) {
      do {
        lVar3 = *(longlong *)(uVar6 + 0x10);
        if (lVar3 != 0) {
          pbVar7 = (byte *)(uVar6 + 0x38);
          pbVar4 = *(byte **)(uVar6 + 0x40);
          do {
            pbVar5 = *(byte **)pbVar7;
            *(undefined4 *)(pbVar5 + 0x14) = *(undefined4 *)(lVar3 + 8);
            *pbVar5 = *pbVar5 | 8;
            pbVar7 = pbVar5 + 0x20;
          } while (pbVar5 != pbVar4);
        }
        uVar6 = uVar6 + 0x48;
      } while (uVar6 < uVar1);
    }
  }
  return;
}

