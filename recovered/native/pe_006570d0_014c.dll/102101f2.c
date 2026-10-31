/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102101f2 */

int __fastcall FUN_102101f2(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  uVar3 = *(uint *)(param_1 + 4) >> 3;
  uVar4 = param_2 + 7U >> 3;
  local_14 = 0;
  iVar2 = 0;
  if (uVar3 < uVar4) {
    uVar4 = uVar4 + 7 & 0xfffffff8;
    uVar1 = FUN_101c00c3(param_3,1,uVar3,uVar4,*(undefined4 *)(param_1 + 8),&local_14);
    *(undefined4 *)(param_1 + 8) = uVar1;
    iVar2 = local_14;
    if (local_14 == 0) {
      *(uint *)(param_1 + 4) = uVar4 << 3;
      iVar2 = 0;
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

