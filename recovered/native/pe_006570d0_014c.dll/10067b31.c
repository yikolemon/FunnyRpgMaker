/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10067b31 */

void __fastcall FUN_10067b31(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_24;
  uint local_20;
  undefined1 local_1c [4];
  char local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_24 = param_1;
  local_20 = param_2;
  if (((param_1 == 0) ||
      (iVar1 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3,
      (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3) * -0x33333333 + iVar1 * -0x3cf3cf3d
      != 0)) || ((uint)(iVar1 * 0x3cf3cf3d) <= param_2)) {
    if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
      FUN_1006235a();
      return;
    }
    goto LAB_10067cb7;
  }
  FUN_1006766a(local_1c,&local_24,&local_20);
  if (local_18 == '\0') {
LAB_10067c56:
    FUN_1006235a();
  }
  else {
    iVar1 = *(int *)(*(int *)(local_24 + 0x18) + 0x24 + local_20 * 0x28);
    if (iVar1 != 2) {
      if ((iVar1 == 1) || (iVar1 == 0)) goto LAB_10067c56;
      FUN_1006233c();
    }
    FUN_10067b31(param_3,param_4);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
LAB_10067cb7:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

