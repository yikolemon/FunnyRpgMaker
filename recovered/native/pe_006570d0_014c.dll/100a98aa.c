/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a98aa */

int * __fastcall FUN_100a98aa(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    local_30 = param_1;
    local_2c = param_2;
    do {
      local_28 = FUN_100a9a27();
      iVar2 = (param_2 + param_3) - local_28;
      local_24 = iVar2;
      FUN_100a9a88(local_20,&local_28);
      cVar1 = FUN_100a9a40(local_18,&local_28);
      if (cVar1 == '\0') {
        FUN_100a9a88(local_20,&local_28);
        param_2 = local_2c;
        cVar1 = FUN_100a9a40(local_18,&local_28);
        param_1 = local_30;
        if (cVar1 == '\0') goto LAB_100a9940;
      }
      param_3 = param_3 - iVar2;
    } while (param_3 != 0);
    param_3 = 0;
    param_1 = local_30;
  }
LAB_100a9940:
  *param_1 = param_2;
  param_1[1] = param_3;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

