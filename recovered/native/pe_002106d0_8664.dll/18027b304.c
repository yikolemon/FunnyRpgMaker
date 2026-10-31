/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027b304 */

undefined8 FUN_18027b304(longlong param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  pbVar3 = *(byte **)(param_1 + 8);
  bVar1 = *pbVar3;
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    else if (bVar1 < 0x4a) {
      if (bVar1 == 0x49) {
LAB_18027b43e:
        *(undefined4 *)(param_1 + 0x30) = 2;
      }
      else {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x43) {
LAB_18027b37d:
            pbVar4 = (byte *)0x0;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              *(undefined8 *)(param_1 + 0x20) = 1;
            }
            iVar2 = *(int *)(param_1 + 0x28);
            if (iVar2 == 2) {
              *(undefined1 *)(param_1 + 0x2c) = 0;
            }
            else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
              *(undefined1 *)(param_1 + 0x2c) = 1;
            }
            *(undefined4 *)(param_1 + 0x30) = 0;
            *(byte **)(param_1 + 8) = pbVar3 + 1;
            goto LAB_18027b4ca;
          }
          if (((bVar1 != 0x45) && (bVar1 != 0x46)) && (bVar1 != 0x47)) goto LAB_18027b461;
        }
LAB_18027b34c:
        *(undefined4 *)(param_1 + 0x30) = 7;
      }
    }
    else {
      if (bVar1 != 0x53) {
        if (bVar1 == 0x58) goto LAB_18027b4bb;
        if (bVar1 == 0x5b) {
          iVar2 = *(int *)(param_1 + 0x28);
          if (iVar2 == 2) {
            *(undefined1 *)(param_1 + 0x2c) = 0;
          }
          else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
            *(undefined1 *)(param_1 + 0x2c) = 1;
          }
          *(undefined4 *)(param_1 + 0x30) = 8;
          *(byte **)(param_1 + 8) = pbVar3 + 1;
          uVar5 = FUN_18027b4d0(param_1);
          return uVar5;
        }
        if (bVar1 != 0x61) {
          if (bVar1 != 99) goto LAB_18027b461;
          goto LAB_18027b37d;
        }
        goto LAB_18027b34c;
      }
LAB_18027b489:
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  else if (bVar1 < 0x70) {
    if (bVar1 == 0x6f) {
      *(undefined4 *)(param_1 + 0x30) = 4;
    }
    else {
      if (((bVar1 == 0x65) || (bVar1 == 0x66)) || (bVar1 == 0x67)) goto LAB_18027b34c;
      if (bVar1 == 0x69) goto LAB_18027b43e;
      if (bVar1 != 0x6e) {
LAB_18027b461:
        *(undefined8 *)(param_1 + 0x10) = 0x16;
        *(undefined2 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x1a) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 9;
    }
  }
  else {
    if (bVar1 == 0x70) {
      *(undefined4 *)(param_1 + 0x28) = 10;
    }
    else {
      if (bVar1 == 0x73) goto LAB_18027b489;
      if (bVar1 == 0x75) {
        *(undefined4 *)(param_1 + 0x30) = 5;
        goto LAB_18027b4c2;
      }
      if (bVar1 != 0x78) goto LAB_18027b461;
    }
LAB_18027b4bb:
    *(undefined4 *)(param_1 + 0x30) = 6;
  }
LAB_18027b4c2:
  pbVar4 = pbVar3 + 1;
  *(byte **)(param_1 + 8) = pbVar4;
LAB_18027b4ca:
  return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
}

