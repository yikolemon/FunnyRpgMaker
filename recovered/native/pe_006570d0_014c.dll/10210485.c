/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10210485 */

void __fastcall FUN_10210485(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  uVar2 = param_2 + 7U & 0xfffffff8;
  uVar1 = FUN_101c2a50(param_3,0xc,*(undefined4 *)(param_1 + 4),uVar2,*(undefined4 *)(param_1 + 8),
                       &local_14);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (local_14 == 0) {
    *(uint *)(param_1 + 4) = uVar2;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

