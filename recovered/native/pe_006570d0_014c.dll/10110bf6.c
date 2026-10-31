/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10110bf6 */

void FUN_10110bf6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *local_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if (*(char *)(DAT_1039d74c + 0x2748) == '\x01') {
    local_18 = &stack0x00000008;
    if (*(int *)(DAT_1039d74c + 0x2754) == 0) {
      FUN_100fb9e6(param_1,&stack0x00000008);
    }
    else {
      if (*(int *)(DAT_1039d74c + 0x275c) < 0) {
        uVar2 = FUN_100fa1fa(0);
        if (*(int *)(iVar1 + 0x2760) != 0) {
          FUN_1025b2d0(uVar2,*(int *)(iVar1 + 0x2760),*(undefined4 *)(iVar1 + 0x2758));
          FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x2760));
        }
        *(undefined4 *)(iVar1 + 0x2760) = uVar2;
        *(undefined4 *)(iVar1 + 0x275c) = 0;
      }
      *(undefined4 *)(iVar1 + 0x2758) = 0;
      FUN_100fb9e6(param_1,&stack0x00000008);
      iVar3 = *(int *)(iVar1 + 0x2758) + -1 + (uint)(*(int *)(iVar1 + 0x2758) == 0);
      puVar4 = &DAT_1039d750;
      if (*(undefined **)(iVar1 + 0x2760) != (undefined *)0x0) {
        puVar4 = *(undefined **)(iVar1 + 0x2760);
      }
      FUN_100fa97c(puVar4,1,0,iVar3,iVar3 >> 0x1f,*(undefined4 *)(iVar1 + 0x2754));
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

