/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015565c */

void FUN_14015565c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    lVar4 = *(longlong *)(param_1 + 0x1d0);
    if (lVar4 != 0) {
      uVar3 = *(uint *)(param_1 + 0x1b0);
      if (uVar3 != 0) {
        lVar4 = 8;
        uVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_1 + 0x1d0);
          if (*(undefined8 **)(lVar2 + lVar4) != (undefined8 *)0x0) {
            FUN_140128b39(uVar1,**(undefined8 **)(lVar2 + lVar4));
            **(undefined8 **)(lVar2 + lVar4) = 0;
            FUN_140128b39(uVar1,*(undefined8 *)(lVar2 + lVar4));
            *(undefined8 *)(lVar2 + lVar4) = 0;
            uVar3 = *(uint *)(param_1 + 0x1b0);
          }
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x10;
        } while (uVar5 < uVar3);
        lVar4 = *(longlong *)(param_1 + 0x1d0);
      }
      FUN_140128b39(uVar1,lVar4);
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1b8));
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return;
}

