/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e14cb */

int __fastcall FUN_101e14cb(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  if (param_1 == 0) {
    iVar1 = 0x23;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74);
    if (*(int *)(param_1 + 0x74) == 0) {
      iVar1 = FUN_101e0097(param_3);
      if (iVar1 != 0) goto LAB_101e150b;
      *(int *)(param_1 + 0x74) = local_10;
      *(undefined1 **)(param_1 + 0x78) = &LAB_101e018b;
      iVar1 = local_10;
    }
    *param_2 = iVar1;
    iVar1 = 0;
  }
LAB_101e150b:
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

