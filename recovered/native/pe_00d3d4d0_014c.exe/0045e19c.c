/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045e19c */

void __fastcall FUN_0045e19c(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (0 < (int)param_1[3]) {
    return;
  }
  uVar2 = 3;
  pbVar3 = (byte *)*param_1;
  if ((byte *)*param_1 < (byte *)param_1[2]) {
    do {
      pbVar4 = pbVar3 + 1;
      *param_1 = pbVar4;
      bVar1 = *pbVar3;
      if (bVar1 < 0x1a) {
        if (bVar1 != 9) {
          if ((bVar1 != 10) && (bVar1 != 0xd)) {
            return;
          }
          uVar2 = 2;
          break;
        }
      }
      else if (bVar1 != 0x20) {
        if (bVar1 != 0x1a) {
          if (bVar1 != 0x3b) {
            return;
          }
          uVar2 = 1;
        }
        break;
      }
      pbVar3 = pbVar4;
    } while (pbVar4 != (byte *)param_1[2]);
  }
  param_1[3] = uVar2;
  return;
}

