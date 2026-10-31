/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021c17a */

int __fastcall FUN_1021c17a(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = 0;
  iVar2 = 0;
  if (*(uint *)(param_1 + 0x1c) < param_2) {
    *(undefined4 *)(param_1 + 0x24) = param_3;
    uVar1 = FUN_101c2a50(param_3,4,*(uint *)(param_1 + 0x1c),param_2,*(undefined4 *)(param_1 + 0x20)
                         ,&local_14);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    iVar2 = local_14;
    if (local_14 == 0) {
      *(uint *)(param_1 + 0x1c) = param_2;
      iVar2 = 0;
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

