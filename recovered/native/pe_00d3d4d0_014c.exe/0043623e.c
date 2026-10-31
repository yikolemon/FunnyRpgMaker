/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043623e */

void __fastcall FUN_0043623e(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  uVar4 = *(uint *)(param_1 + 0x3c + param_2 * 0x544);
  if (uVar4 != 0) {
    iVar1 = *(int *)(param_1 + param_2 * 0x544 + 0x34);
    uVar5 = iVar1 * 0x2c + uVar4;
    if (param_2 == 0) {
      if (iVar1 != 0) {
        do {
          iVar1 = *(int *)(uVar4 + 0xc);
          if (iVar1 != 0) {
            pbVar6 = (byte *)(uVar4 + 0x24);
            pbVar2 = *(byte **)(uVar4 + 0x28);
            do {
              pbVar3 = *(byte **)pbVar6;
              *(undefined4 *)(pbVar3 + 0x10) = *(undefined4 *)(iVar1 + 8);
              *pbVar3 = *pbVar3 | 4;
              pbVar6 = pbVar3 + 0x20;
            } while (pbVar3 != pbVar2);
          }
          uVar4 = uVar4 + 0x2c;
        } while (uVar4 < uVar5);
      }
    }
    else if (iVar1 != 0) {
      do {
        iVar1 = *(int *)(uVar4 + 0xc);
        if (iVar1 != 0) {
          pbVar6 = (byte *)(uVar4 + 0x24);
          pbVar2 = *(byte **)(uVar4 + 0x28);
          do {
            pbVar3 = *(byte **)pbVar6;
            *(undefined4 *)(pbVar3 + 0x14) = *(undefined4 *)(iVar1 + 8);
            *pbVar3 = *pbVar3 | 8;
            pbVar6 = pbVar3 + 0x20;
          } while (pbVar3 != pbVar2);
        }
        uVar4 = uVar4 + 0x2c;
      } while (uVar4 < uVar5);
    }
  }
  return;
}

