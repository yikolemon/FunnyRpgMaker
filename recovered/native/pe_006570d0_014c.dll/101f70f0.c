/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f70f0 */

int __fastcall FUN_101f70f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x1c);
    local_20 = FUN_101f6767(&local_18,&local_1c);
    if (local_20 == 0) {
      iVar2 = FUN_101c21f6(uVar1,local_1c + 1,&local_20);
      if (local_20 == 0) {
        FUN_1025b2d0(iVar2,local_18,local_1c);
        *(undefined1 *)(iVar2 + local_1c) = 0;
      }
      FUN_101f6754();
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

