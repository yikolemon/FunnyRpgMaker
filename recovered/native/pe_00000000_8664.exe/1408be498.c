/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be498 */

void FUN_1408be498(longlong param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar1 = *pbVar4;
  if (bVar1 < 0x6b) {
    if (bVar1 == 0x6a) {
      *(undefined4 *)(param_1 + 0x20) = 5;
      *(uint *)(param_1 + 8) = uVar3;
      return;
    }
    if (bVar1 == 0x49) {
      bVar1 = pbVar4[1];
      if (bVar1 == 0x33) {
        if (pbVar4[2] == 0x32) {
          uVar3 = uVar3 + 3;
LAB_1408be510:
          *(uint *)(param_1 + 8) = uVar3;
          *(undefined4 *)(param_1 + 0x20) = 9;
          return;
        }
      }
      else if (bVar1 == 0x36) {
        if (pbVar4[2] == 0x34) {
          *(undefined4 *)(param_1 + 0x20) = 10;
          *(uint *)(param_1 + 8) = uVar3 + 3;
          return;
        }
      }
      else if ((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) ||
              (((bVar1 == 0x75 || (bVar1 == 0x78)) || (bVar1 == 0x58)))) goto LAB_1408be510;
    }
    else {
      if (bVar1 == 0x4c) {
        *(undefined4 *)(param_1 + 0x20) = 8;
        *(uint *)(param_1 + 8) = uVar3;
        return;
      }
      if (bVar1 == 0x54) {
        *(undefined4 *)(param_1 + 0x20) = 0xb;
        *(uint *)(param_1 + 8) = uVar3;
        return;
      }
      if (bVar1 == 0x68) {
        uVar5 = uVar3 + 1;
        cVar2 = *(char *)(ulonglong)uVar5;
        if (cVar2 == 'h') {
          uVar5 = uVar3 + 2;
        }
        *(uint *)(param_1 + 8) = uVar5;
        *(uint *)(param_1 + 0x20) = (uint)(cVar2 != 'h');
        return;
      }
    }
  }
  else if (bVar1 == 0x6c) {
    if (*(char *)(ulonglong)(uVar3 + 1) == 'l') {
      *(undefined4 *)(param_1 + 0x20) = 4;
      *(uint *)(param_1 + 8) = uVar3 + 2;
      return;
    }
    *(uint *)(param_1 + 8) = uVar3 + 1;
    *(undefined4 *)(param_1 + 0x20) = 3;
  }
  else {
    if (bVar1 == 0x74) {
      *(undefined4 *)(param_1 + 0x20) = 7;
      *(uint *)(param_1 + 8) = uVar3;
      return;
    }
    if (bVar1 == 0x7a) {
      *(undefined4 *)(param_1 + 0x20) = 6;
      *(uint *)(param_1 + 8) = uVar3;
      return;
    }
  }
  return;
}

