/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f68d2 */

uint __fastcall FUN_101f68d2(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte local_14 [4];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_14;
  iVar1 = FUN_101c4659(*param_1,local_14,*(undefined1 *)(param_1 + 4));
  uVar2 = 0;
  if ((iVar1 == 0) && (*(byte *)(param_1 + 4) != 0)) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar2 << 8 | (uint)local_14[uVar3];
      uVar3 = uVar3 + 1;
    } while (*(byte *)(param_1 + 4) != uVar3);
  }
  *param_2 = iVar1;
  if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

