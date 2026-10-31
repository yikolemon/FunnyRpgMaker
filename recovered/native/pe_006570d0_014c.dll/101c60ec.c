/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c60ec */

int __fastcall FUN_101c60ec(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if (param_1 == (undefined4 *)0x0) {
    local_18 = 0x21;
  }
  else if (param_2 == 0) {
    local_18 = 6;
  }
  else {
    *param_4 = 0;
    uVar1 = *param_1;
    iVar2 = FUN_101bff17(uVar1,0x28,&local_18);
    if (local_18 == 0) {
      FUN_101c0a33(iVar2,param_2,param_3);
      *(undefined4 *)(iVar2 + 0xc) = uVar1;
      *(undefined1 **)(iVar2 + 0x18) = &LAB_101c617b;
      *param_4 = iVar2;
      local_18 = 0;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

