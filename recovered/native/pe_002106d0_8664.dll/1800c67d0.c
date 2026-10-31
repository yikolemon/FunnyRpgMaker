/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c67d0 */

undefined8 FUN_1800c67d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1800c689c(param_1,&local_48,param_2,param_3);
  uVar1 = local_40;
  if ((local_38 & 1) == 0) {
    if (param_1[1] == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_180053f28();
    }
    FUN_1800c6a1e(&local_48,param_1,*param_1,param_3);
    uVar2 = local_40;
    local_40 = 0;
    FUN_1800c6ac4(&local_48);
    local_58 = local_48;
    local_50 = uVar1;
    local_48 = FUN_180053dd8(param_1,&local_58,uVar2);
  }
  return local_48;
}

