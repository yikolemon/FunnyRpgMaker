/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10040a68 */

void __thiscall FUN_10040a68(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_2c [21];
  undefined1 local_17 [3];
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_2c;
  uVar1 = *(uint *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x14);
  iVar3 = uVar1 - *(uint *)(param_1 + 0x10);
  if ((int)((iVar2 - *(int *)(param_1 + 0x14)) - (uint)(uVar1 < *(uint *)(param_1 + 0x10))) < 0) {
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  local_14 = FUN_1002472e(auStack_2c,iVar3 * 100,0x15);
  FUN_1001909c(local_14,local_17);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

