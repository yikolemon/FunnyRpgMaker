/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113122 */

int __thiscall FUN_10113122(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_10;
  
  uVar1 = param_2;
  local_10 = DAT_10388d00 ^ (uint)&local_10;
  iVar2 = FUN_100fa691(&param_2,4,*(undefined4 *)(param_1[0x50] + -4 + param_1[0x4e] * 4));
  if (*(int *)(*param_1 + 0x150c) == iVar2) {
    FUN_10112e5a(iVar2,4,uVar1,0);
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_10)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

