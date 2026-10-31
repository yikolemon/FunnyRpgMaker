/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003f2f0 */

void FUN_1003f2f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [21];
  undefined1 local_13 [3];
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_28;
  iVar2 = *(int *)(param_2 + 0x14);
  iVar1 = iVar2 + 0x76c;
  iVar3 = -iVar1;
  if (iVar3 < 0) {
    iVar3 = iVar1;
  }
  local_10 = FUN_1002472e(auStack_28,iVar3,0x15);
  if (iVar2 < -0x76c) {
    *(undefined1 *)(local_10 + -1) = 0x2d;
    local_10 = local_10 + -1;
  }
  FUN_1001909c(local_10,local_13);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

