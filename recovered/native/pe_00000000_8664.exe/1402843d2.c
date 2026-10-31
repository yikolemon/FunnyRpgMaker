/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402843d2 */

undefined8 FUN_1402843d2(longlong param_1,undefined8 param_2)

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
  if (DAT_140629090 != 0) {
    FUN_1402136e8();
    local_70 = 0xffff00000000;
    puVar3 = DAT_140629080;
    if (DAT_140629098 < 8) {
      puVar3 = &DAT_140629080;
    }
    local_68 = FUN_14044b720(puVar3,local_50,3,0xffffffff);
    FUN_1402139b2(&local_70,local_68,local_50);
    iVar2 = local_68;
    local_58 = FUN_1402136e8();
    local_60[0] = iVar2;
    iVar1 = (int)local_70;
    if ((int)local_70 == 0) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14021366a(&DAT_140573d72,local_60,&DAT_140629080);
      }
    }
    else {
      FUN_1402136e8();
      if (iVar1 != 1) goto LAB_1402844a8;
    }
    local_50[0] = 0;
    local_48 = FUN_1402136e8();
    FUN_14027df2d(&DAT_140629080,local_50);
    if (local_50[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14021366a("ion type for pointer",local_50,&DAT_140629080);
    }
  }
LAB_1402844a8:
  FUN_14027c19e(param_1 + 8,local_50);
  FUN_140213160(param_2,&DAT_140629080,local_50);
  FUN_14021331c(local_50);
  return param_2;
}

