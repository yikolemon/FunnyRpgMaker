/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016da9d */

void FUN_14016da9d(uint *param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  if (*param_1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    pbVar4 = (byte *)(*(longlong *)(param_1 + 2) + 0x1c);
    uVar5 = 0;
    do {
      if (param_2 == 0) {
        *(undefined4 *)(lVar2 + uVar5 * 8) = *(undefined4 *)(pbVar4 + 0x1c);
      }
      else {
        *(undefined4 *)(lVar2 + 4 + uVar5 * 8) = *(undefined4 *)(pbVar4 + 0x1c);
      }
      if ((*pbVar4 & 0x10) != 0) {
        pbVar1 = (byte *)(lVar3 + uVar5);
        *pbVar1 = *pbVar1 | (param_2 != 0) * ' ' + 0x20U;
      }
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 0x40;
    } while (uVar5 < *param_1);
  }
  return;
}

