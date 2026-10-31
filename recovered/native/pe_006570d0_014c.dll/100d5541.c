/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5541 */

int FUN_100d5541(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  local_10 = &stack0x00000008;
  puVar1 = (uint *)FUN_1004303e();
  iVar2 = FUN_1025ea38(*puVar1 | 2,puVar1[1],0,0,param_1,0,&stack0x00000008);
  iVar3 = -1;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

