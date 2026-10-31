/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102665c8 */

void __fastcall FUN_102665c8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 8);
  bVar1 = *pbVar2;
  if (bVar1 < 0x6b) {
    if (bVar1 == 0x6a) {
      *(undefined4 *)(param_1 + 0x20) = 5;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
      return;
    }
    if (bVar1 == 0x49) {
      bVar1 = pbVar2[1];
      if (bVar1 == 0x33) {
        if (pbVar2[2] == 0x32) {
          pbVar2 = pbVar2 + 3;
LAB_10266640:
          *(byte **)(param_1 + 8) = pbVar2;
          *(undefined4 *)(param_1 + 0x20) = 9;
          return;
        }
      }
      else if (bVar1 == 0x36) {
        if (pbVar2[2] == 0x34) {
          *(undefined4 *)(param_1 + 0x20) = 10;
          *(byte **)(param_1 + 8) = pbVar2 + 3;
          return;
        }
      }
      else if ((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) ||
              (((bVar1 == 0x75 || (bVar1 == 0x78)) || (bVar1 == 0x58)))) {
        pbVar2 = pbVar2 + 1;
        goto LAB_10266640;
      }
    }
    else {
      if (bVar1 == 0x4c) {
        *(undefined4 *)(param_1 + 0x20) = 8;
        *(byte **)(param_1 + 8) = pbVar2 + 1;
        return;
      }
      if (bVar1 == 0x54) {
        *(undefined4 *)(param_1 + 0x20) = 0xb;
        *(byte **)(param_1 + 8) = pbVar2 + 1;
        return;
      }
      if (bVar1 == 0x68) {
        pbVar3 = pbVar2 + 1;
        bVar1 = *pbVar3;
        if (bVar1 == 0x68) {
          pbVar3 = pbVar2 + 2;
        }
        *(byte **)(param_1 + 8) = pbVar3;
        *(uint *)(param_1 + 0x20) = (bVar1 != 0x68) + 1;
        return;
      }
    }
  }
  else if (bVar1 == 0x6c) {
    if (pbVar2[1] == 0x6c) {
      *(undefined4 *)(param_1 + 0x20) = 4;
      *(byte **)(param_1 + 8) = pbVar2 + 2;
      return;
    }
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    *(undefined4 *)(param_1 + 0x20) = 3;
  }
  else {
    if (bVar1 == 0x74) {
      *(undefined4 *)(param_1 + 0x20) = 7;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
      return;
    }
    if (bVar1 == 0x7a) {
      *(undefined4 *)(param_1 + 0x20) = 6;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
      return;
    }
  }
  return;
}

