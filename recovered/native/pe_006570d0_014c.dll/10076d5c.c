/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10076d5c */

void __fastcall FUN_10076d5c(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_15 = FUN_10077c4c();
  piVar3 = &local_1c;
  if (*(int *)(param_1 + 0xc) == 2) {
    local_1c = 1;
    cVar1 = FUN_10076c78(piVar3);
    if (cVar1 != 'P') goto LAB_10076e2e;
    local_20 = 5;
    cVar1 = FUN_10076c78(&local_20);
    if (cVar1 != 'T') goto LAB_10076e2e;
    local_24 = 7;
    cVar1 = FUN_10076c78(&local_24);
    if (cVar1 != 'K') goto LAB_10076e2e;
  }
  FUN_1007745a(&local_15);
  *param_1 = 1;
  DAT_1039cbc8 = 1;
  local_1c = 5;
  FUN_10077a84(piVar3);
  iVar2 = FUN_10077b66();
  local_1c = iVar2;
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = FUN_10077c4c();
    if (DAT_10388110 == -1) {
      DAT_10388110 = (int)cVar1;
    }
    local_20 = iVar2 + -1;
    piVar3 = &local_20;
  }
  FUN_10077a84(piVar3);
LAB_10076e2e:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

