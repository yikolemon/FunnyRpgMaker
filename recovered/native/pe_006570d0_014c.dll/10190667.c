/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190667 */

void FUN_10190667(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_28;
  FUN_10192167(&local_1c,param_1);
  FUN_1018e5fa(param_1);
  FUN_10191561(param_1,local_1c,local_18);
  FUN_1018f313(param_1);
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = *(int *)(param_1 + 0x60) << 7;
    do {
      FUN_1018f679(param_1,iVar2);
      iVar2 = iVar2 + 0x80;
      iVar3 = iVar3 + -0x80;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    piVar1 = *(int **)(param_1 + 0x5c);
    piStack_24 = piVar1 + *(int *)(param_1 + 0x54);
    do {
      iStack_28 = *piVar1;
      iVar2 = *(int *)(iStack_28 + 0x18);
      piStack_20 = piVar1;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iStack_28 + 0x20);
        iVar4 = 0;
        do {
          FUN_1018f6b9(param_1,iStack_28,*(undefined4 *)(iVar3 + iVar4));
          iVar4 = iVar4 + 4;
        } while (iVar2 << 2 != iVar4);
      }
      piVar1 = piStack_20 + 1;
    } while (piVar1 != piStack_24);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&iStack_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

