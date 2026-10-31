/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006292c */

int * __thiscall FUN_1006292c(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_1c [4];
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  puVar2 = param_3;
  if (0xf < (uint)param_3[5]) {
    puVar2 = (undefined4 *)*param_3;
  }
  uVar1 = FUN_1001c721(puVar2,param_3[4]);
  FUN_1004340a(auStack_1c,param_3,uVar1);
  if (local_18 == 0) {
    local_18 = *(int *)(param_1 + 4);
  }
  *param_2 = local_18;
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_1c)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

