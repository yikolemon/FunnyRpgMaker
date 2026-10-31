/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015de21 */

void FUN_14015de21(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1b0));
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    lVar3 = *(longlong *)(param_1 + 0x1a0);
    if (lVar3 != 0) {
      if (0 < *(int *)(param_1 + 0x19c)) {
        lVar3 = 0x10;
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(param_1 + 0x1a0);
          if (lVar2 != 0) {
            FUN_140128b39(uVar1,*(undefined8 *)(lVar2 + -0x10 + lVar3));
            *(undefined8 *)(lVar2 + -0x10 + lVar3) = 0;
            if (*(char *)(lVar2 + -8 + lVar3) != '\0') {
              FUN_140128b39(uVar1,*(undefined8 *)(lVar2 + lVar3));
              *(undefined8 *)(lVar2 + lVar3) = 0;
            }
          }
          lVar4 = lVar4 + 1;
          lVar3 = lVar3 + 0x18;
        } while (lVar4 < *(int *)(param_1 + 0x19c));
        lVar3 = *(longlong *)(param_1 + 0x1a0);
      }
      FUN_140128b39(uVar1,lVar3);
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (*(longlong *)(param_1 + 0xa0) == param_1 + 0xd8) {
      FUN_140129646();
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x120);
    }
  }
  return;
}

