/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180072f02 */

undefined8 FUN_180072f02(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_70;
  int local_68;
  int local_60 [2];
  undefined8 local_58;
  int local_50 [2];
  undefined8 local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (DAT_180417bc0 != 0) {
    FUN_180002218();
    local_70 = 0xffff00000000;
    puVar3 = DAT_180417bb0;
    if (DAT_180417bc8 < 8) {
      puVar3 = &DAT_180417bb0;
    }
    local_68 = FUN_18023a250(puVar3,local_50,3,0xffffffff);
    FUN_1800024e2(&local_70,local_68,local_50);
    iVar2 = local_68;
    local_58 = FUN_180002218();
    local_60[0] = iVar2;
    iVar1 = (int)local_70;
    if ((int)local_70 == 0) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18000219a("exists",local_60,&DAT_180417bb0);
      }
    }
    else {
      FUN_180002218();
      if (iVar1 != 1) goto LAB_180072fd8;
    }
    local_50[0] = 0;
    local_48 = FUN_180002218();
    FUN_18006ca5d(&DAT_180417bb0,local_50);
    if (local_50[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18000219a("create_directories",local_50,&DAT_180417bb0);
    }
  }
LAB_180072fd8:
  FUN_18006acce(param_1 + 8,local_50);
  FUN_180001c90(param_2,&DAT_180417bb0,local_50);
  FUN_180001e4c(local_50);
  return param_2;
}

