/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022e7e6 */

ulonglong FUN_14022e7e6(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 < 0x5b) {
      if (iVar1 - 0x24U < 0xb) {
        switch(iVar1) {
        default:
          return (longlong)&switchD_14022e86f::switchdataD_1404c76c4 +
                 (longlong)(int)(&switchD_14022e86f::switchdataD_1404c76c4)[iVar1 - 0x24U];
        case 0x2e:
          return (longlong)&switchD_14022e86f::switchdataD_1404c76c4 +
                 (longlong)(int)(&switchD_14022e86f::switchdataD_1404c76c4)[iVar1 - 0x24U];
        }
      }
      if (iVar1 == -1) {
LAB_14022e9f1:
        return uVar3 & 0xffffff01;
      }
      if (iVar1 == 0x3f) {
LAB_14022ea02:
        FUN_14022ec42(param_1,10);
LAB_14022ea0f:
        FUN_14022ec42(param_1,6);
        FUN_14022ec42(param_1,4);
        FUN_14022ec42(param_1,5);
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
    }
    else if (iVar1 < 0x7b) {
      if (iVar1 - 0x5bU < 4) {
        uVar3 = (*(code *)((longlong)&switchD_14022e82a::switchdataD_1404c76f0 +
                          (longlong)(int)(&switchD_14022e82a::switchdataD_1404c76f0)[iVar1 - 0x5bU])
                )();
        return uVar3;
      }
    }
    else if (iVar1 == 0x7d) {
      if ((*(byte *)(param_1 + 99) & 8) == 0) goto LAB_14022ea0f;
    }
    else {
      if (iVar1 == 0x7c) goto LAB_14022e9f1;
      if (iVar1 == 0x7b) goto LAB_14022ea02;
    }
    FUN_14022eeb6(param_1 + 0x38,*(undefined1 *)(param_1 + 0x75));
    FUN_14022eb44(param_1);
    uVar4 = FUN_14022ef28(param_1);
    uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  } while( true );
}

