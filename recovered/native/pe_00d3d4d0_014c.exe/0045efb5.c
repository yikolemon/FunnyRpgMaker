/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045efb5 */

undefined4 __fastcall FUN_0045efb5(uint *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  
  pbVar4 = (byte *)*param_1;
  uVar2 = 3;
  if (pbVar4 < param_2) {
    iVar6 = 0;
    pbVar3 = pbVar4;
    do {
      bVar1 = *pbVar3;
      pbVar4 = pbVar3 + 1;
      if (bVar1 == 0x28) {
        iVar6 = iVar6 + 1;
      }
      else if (bVar1 == 0x29) {
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          uVar2 = 0;
          goto LAB_0045f03d;
        }
      }
      else if (bVar1 == 0x5c) {
        if (pbVar4 == param_2) break;
        uVar5 = *pbVar4 - 0x5c;
        if (((uVar5 < 0x19) && ((0x1440441U >> (uVar5 & 0x1f) & 1) != 0)) || (*pbVar4 - 0x28 < 2)) {
          pbVar4 = pbVar3 + 2;
        }
        else if (pbVar4 < param_2) {
          uVar5 = 0;
          do {
            if (((*pbVar4 & 0xf8) != 0x30) || (pbVar4 = pbVar4 + 1, 1 < uVar5)) break;
            uVar5 = uVar5 + 1;
          } while (pbVar4 < param_2);
        }
      }
      pbVar3 = pbVar4;
    } while (pbVar4 < param_2);
    uVar2 = 3;
  }
LAB_0045f03d:
  *param_1 = (uint)pbVar4;
  return uVar2;
}

