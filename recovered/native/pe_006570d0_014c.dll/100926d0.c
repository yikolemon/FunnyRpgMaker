/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100926d0 */

uint __thiscall FUN_100926d0(int param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_18 [2];
  ushort local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_18;
  local_9 = param_2;
  local_10 = 0;
  local_14 = 0;
  iVar1 = FUN_1022d8f0(&local_16,&local_9,1,&local_14,param_1 + 0x18);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)local_16;
  }
  if (DAT_10388d00 == (local_8 ^ (uint)auStack_18)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

