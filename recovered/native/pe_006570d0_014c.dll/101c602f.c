/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c602f */

int __fastcall
FUN_101c602f(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint local_34 [4];
  undefined1 local_24 [4];
  int local_20;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_34;
  uVar1 = *param_1;
  local_20 = 0;
  local_34[0] = 0;
  if (param_5 != 0) {
    local_20 = FUN_101c0dab(param_1,param_5);
    if (local_20 == 0) {
      FUN_101c0017(uVar1,param_2);
      iVar2 = 0xb;
      goto LAB_101c60c7;
    }
    local_34[0] = 8;
  }
  iVar2 = FUN_101c60ec(param_3,local_24);
  if (iVar2 == 0) {
    local_34[0] = local_34[0] | 2;
    iVar2 = FUN_101c1a9f(param_4,param_6,0);
  }
  else {
    FUN_101c0017(uVar1,param_2);
  }
LAB_101c60c7:
  if (DAT_10388d00 == (local_14 ^ (uint)local_34)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

