/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180216436 */

undefined8 FUN_180216436(ulonglong *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)*param_1;
  uVar2 = 3;
  if (pbVar6 < param_2) {
    iVar4 = 0;
    pbVar5 = pbVar6;
    do {
      bVar1 = *pbVar5;
      pbVar6 = pbVar5 + 1;
      if (bVar1 == 0x28) {
        iVar4 = iVar4 + 1;
      }
      else if (bVar1 == 0x29) {
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
          uVar2 = 0;
          break;
        }
      }
      else if (bVar1 == 0x5c) {
        if (pbVar6 == param_2) break;
        uVar3 = *pbVar6 - 0x5c;
        if (((uVar3 < 0x19) && ((0x1440441U >> (uVar3 & 0x1f) & 1) != 0)) || (*pbVar6 - 0x28 < 2)) {
          pbVar6 = pbVar5 + 2;
        }
        else if (pbVar6 < param_2) {
          uVar3 = 0;
          do {
            if (((*pbVar6 & 0xf8) != 0x30) || (pbVar6 = pbVar6 + 1, 1 < uVar3)) break;
            uVar3 = uVar3 + 1;
          } while (pbVar6 < param_2);
        }
      }
      pbVar5 = pbVar6;
    } while (pbVar6 < param_2);
  }
  *param_1 = (ulonglong)pbVar6;
  return uVar2;
}

