/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10210554 */

int __fastcall FUN_10210554(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = 0;
  iVar2 = 0;
  if (*(uint *)(param_1 + 4) < param_2) {
    uVar3 = param_2 + 7 & 0xfffffff8;
    uVar1 = FUN_101c00c3(param_3,0x10,*(uint *)(param_1 + 4),uVar3,*(undefined4 *)(param_1 + 8),
                         &local_14);
    *(undefined4 *)(param_1 + 8) = uVar1;
    iVar2 = local_14;
    if (local_14 == 0) {
      *(uint *)(param_1 + 4) = uVar3;
      iVar2 = 0;
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

