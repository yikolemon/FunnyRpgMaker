/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101855bc */

void __fastcall FUN_101855bc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_10;
  cVar2 = FUN_1018545a(param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = FUN_1018545a(param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
    cVar2 = FUN_1018545a(param_1);
    if (cVar2 != '\0') {
      uVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

