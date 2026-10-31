/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa4b1 */

void FUN_100fa4b1(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = &stack0x00000010;
  puVar1 = (uint *)FUN_1004303e();
  iVar2 = FUN_1025ea38(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,0,&stack0x00000010);
  iVar3 = -1;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (param_1 != 0) {
    if (param_2 <= iVar3) {
      iVar3 = param_2 + -1;
    }
    if (iVar2 < 0) {
      iVar3 = param_2 + -1;
    }
    *(undefined1 *)(param_1 + iVar3) = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

