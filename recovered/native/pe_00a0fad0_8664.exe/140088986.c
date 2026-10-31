/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140088986 */

undefined8 FUN_140088986(longlong param_1,undefined8 param_2)

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
  if (DAT_1401cc7c8 != 0) {
    FUN_140007025();
    local_70 = 0xffff00000000;
    puVar3 = DAT_1401cc7b8;
    if (DAT_1401cc7d0 < 8) {
      puVar3 = &DAT_1401cc7b8;
    }
    local_68 = FUN_1400dcbb0(puVar3,local_50,3,0xffffffff);
    FUN_140007276(&local_70,local_68,local_50);
    iVar2 = local_68;
    local_58 = FUN_140007025();
    local_60[0] = iVar2;
    iVar1 = (int)local_70;
    if ((int)local_70 == 0) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",local_60,&DAT_1401cc7b8);
      }
    }
    else {
      FUN_140007025();
      if (iVar1 != 1) goto LAB_140088a5c;
    }
    local_50[0] = 0;
    local_48 = FUN_140007025();
    FUN_14008cf35(&DAT_1401cc7b8,local_50);
    if (local_50[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("create_directories",local_50,&DAT_1401cc7b8);
    }
  }
LAB_140088a5c:
  FUN_140055d5e(param_1 + 8,local_50);
  FUN_14007dcb3(param_2,&DAT_1401cc7b8,local_50);
  FUN_140005690(local_50);
  return param_2;
}

