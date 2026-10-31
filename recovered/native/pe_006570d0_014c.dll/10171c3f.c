/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171c3f */

int __fastcall
FUN_10171c3f(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int local_1000;
  int local_ffc;
  int local_fec;
  int local_fe8;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1000;
  iVar1 = FUN_1017207d();
  iVar2 = 0;
  if (iVar1 != 0) {
    local_ffc = param_2 + param_1;
    local_1000 = param_1;
    iVar1 = FUN_10172087(param_3,param_5);
    if (iVar1 == 0) {
      thunk_FUN_10274120(local_fe8);
    }
    else {
      *param_4 = local_fec - local_fe8;
      iVar2 = local_fe8;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1000)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

