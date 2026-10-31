/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0f0f */

int FUN_101c0f0f(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if (param_1 == 0) {
    local_18 = 0x23;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60);
    if (iVar2 == 0) {
      local_18 = 6;
    }
    else {
      uVar1 = *(undefined4 *)(iVar2 + 8);
      iVar2 = FUN_101bff17(uVar1,*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x2c),&local_18);
      if (local_18 == 0) {
        *(int *)(iVar2 + 4) = param_1;
        local_18 = FUN_101c0fc8();
        if (local_18 == 0) {
          *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x54);
          *(int *)(param_1 + 0x54) = iVar2;
          local_18 = 0;
          if (param_2 != (int *)0x0) {
            *param_2 = iVar2;
          }
        }
        else {
          FUN_101c108b();
          FUN_101c0017(uVar1,iVar2);
        }
      }
      else if (param_2 != (int *)0x0) {
        *param_2 = 0;
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

