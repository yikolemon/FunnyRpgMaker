/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10184446 */

void __fastcall FUN_10184446(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 == (undefined4 *)param_1[2]) {
    FUN_10051662(puVar1,param_2);
    iVar2 = param_1[1];
  }
  else {
    *puVar1 = *param_2;
    iVar2 = param_1[1] + 4;
    param_1[1] = iVar2;
  }
  if (1 < iVar2 - *param_1 >> 2) {
    local_10 = *(undefined4 *)(iVar2 + -4);
    FUN_10184faa(&local_10,param_1[3]);
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

