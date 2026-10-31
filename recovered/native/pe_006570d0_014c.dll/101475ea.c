/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101475ea */

void __fastcall FUN_101475ea(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  iVar2 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_20;
  if (*(int *)(DAT_1039d74c + 0x2568) == *(int *)(DAT_1039d74c + 0x2564)) {
    iVar1 = *(int *)(DAT_1039d74c + 0x2574);
    local_18 = *(undefined4 *)(param_1 + 1);
    local_20 = *param_1;
    local_14 = 0;
    iVar3 = FUN_100fad3d(&local_20);
    if (iVar1 == iVar3) {
      *param_2 = *(undefined4 *)(iVar2 + 0x256c);
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

