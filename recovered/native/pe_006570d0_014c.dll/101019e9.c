/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101019e9 */

void FUN_101019e9(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  *(undefined4 *)(DAT_1039d74c + 0x26cc) = 0;
  if (param_1 != 0) {
    local_10 = 0;
    uVar1 = FUN_101188bc(&local_10);
    iVar2 = FUN_100fa7a5(param_1,&DAT_103310de);
    if (iVar2 != 0) {
      FUN_100fa97c(uVar1,1,0,local_10,0,iVar2);
      FUN_100fa8ea(iVar2);
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

