/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2c13 */

undefined4 FUN_101c2c13(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  uVar2 = 0;
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x5c), iVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      local_18 = param_2;
      do {
        uVar2 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x10))(iVar1,&local_18);
      } while (*(uint *)(param_1 + 0x10) <= uVar2);
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = local_18;
      }
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

