/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10054804 */

int FUN_10054804(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = &stack0x00000010;
  puVar1 = (uint *)FUN_1004303e();
  iVar2 = FUN_1025ea38(*puVar1 | 2,puVar1[1],param_1,param_2,param_3,0,&stack0x00000010);
  iVar3 = -1;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

