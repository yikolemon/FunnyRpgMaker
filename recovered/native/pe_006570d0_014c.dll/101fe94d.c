/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fe94d */

undefined4 __fastcall FUN_101fe94d(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    uVar2 = 0x1d0;
    if (*(int *)(param_3 + 8) != 6) {
      uVar2 = (uint)(*(int *)(param_3 + 8) == 3) << 5 | 0x84;
    }
    local_14 = param_1 + uVar2;
    if (*(int *)(param_3 + 0xc) - 9U < 2) {
      uVar1 = (**(code **)(param_2 + 0x44))(param_2,param_3,&local_14,0,0);
    }
    else {
      uVar1 = (**(code **)(param_2 + 0x40))(param_2,param_3,&local_14,0,0);
    }
  }
  if (DAT_10388d00 != (local_10 ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar1;
}

