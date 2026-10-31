/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100679b1 */

void __fastcall FUN_100679b1(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  undefined1 local_1c [4];
  char local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_24 = param_1;
  local_20 = param_2;
  if (((param_1 == 0) ||
      (uVar2 = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2) * -0x47dc11f7,
      *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 5 != uVar2)) || (uVar2 <= param_2)) {
    if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
      FUN_1006235a();
      return;
    }
    goto LAB_10067b26;
  }
  FUN_1006766a(local_1c,&local_24,&local_20);
  if (local_18 == '\0') {
LAB_10067acc:
    FUN_1006235a();
  }
  else {
    iVar1 = *(int *)(*(int *)(local_24 + 0x14) + 0x1c + local_20 * 0x20);
    if (iVar1 != 2) {
      if ((iVar1 == 1) || (iVar1 == 0)) goto LAB_10067acc;
      FUN_1006233c();
    }
    FUN_100679b1(param_3,param_4);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
LAB_10067b26:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

