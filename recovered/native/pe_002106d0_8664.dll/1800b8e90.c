/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b8e90 */

void FUN_1800b8e90(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_78;
  FUN_180002218();
  local_48 = 0xffff00000000;
  puVar3 = DAT_180417930;
  if (DAT_180417948 < 8) {
    puVar3 = &DAT_180417930;
  }
  local_40 = FUN_18023a250(puVar3,local_38,3,0xffffffff);
  FUN_1800024e2(&local_48,local_40,local_38);
  iVar2 = local_40;
  local_50 = FUN_180002218();
  local_58[0] = iVar2;
  iVar1 = (int)local_48;
  if ((int)local_48 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18000219a("exists",local_58,&DAT_180417930);
    }
  }
  else {
    FUN_180002218();
    if (iVar1 != 1) {
      FUN_1800b9844(&DAT_1804189d0,&DAT_180417930);
      DAT_180417b14 = 1;
    }
  }
  if (DAT_180402640 != (local_18 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_18 ^ (ulonglong)auStack_78);
  }
  return;
}

