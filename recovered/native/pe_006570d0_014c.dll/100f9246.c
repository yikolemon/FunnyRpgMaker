/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9246 */

void __fastcall FUN_100f9246(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = DAT_102b89a0;
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar4 = 0x110;
  uVar5 = 0xffffff70;
  do {
    if (6 < uVar5) {
      *(undefined1 *)(iVar1 + -4 + iVar4) = 0;
      *(undefined8 *)(iVar1 + iVar4) = uVar2;
    }
    iVar4 = iVar4 + 0x10;
    uVar5 = uVar5 + 1;
  } while (iVar4 != 0xac0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (*(int *)(param_1 + 0xbb4) < 0) {
    uVar3 = FUN_100fa1fa(0);
    if (*(int *)(param_1 + 3000) != 0) {
      FUN_1025b2d0(uVar3,*(int *)(param_1 + 3000),*(int *)(param_1 + 0xbb0) * 2);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 3000));
    }
    *(undefined4 *)(param_1 + 3000) = uVar3;
    *(undefined4 *)(param_1 + 0xbb4) = 0;
  }
  *(undefined4 *)(param_1 + 0xbb0) = 0;
  return;
}

