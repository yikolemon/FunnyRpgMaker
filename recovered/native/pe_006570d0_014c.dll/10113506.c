/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113506 */

int FUN_10113506(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_c;
  
  uVar1 = param_1;
  local_c = DAT_10388d00 ^ (uint)&local_c;
  iVar2 = FUN_100fa691(&param_1,4,param_2);
  if (*(int *)(DAT_1039d74c + 0x150c) == iVar2) {
    FUN_10112e5a(iVar2,4,uVar1,0);
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_c)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

