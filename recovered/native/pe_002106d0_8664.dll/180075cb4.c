/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075cb4 */

void FUN_180075cb4(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_c0 [56];
  undefined8 local_88;
  int local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_180002218();
  local_88 = 0xffff00000000;
  puVar3 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  local_80 = FUN_18023a250(puVar3,local_78,3,0xffffffff);
  FUN_1800024e2(&local_88,local_80,local_78);
  iVar1 = local_80;
  local_50 = FUN_180002218();
  local_58[0] = iVar1;
  iVar2 = (int)local_88;
  if ((int)local_88 == 0) {
    if (iVar1 == 0) goto LAB_180075da4;
  }
  else {
    FUN_180002218();
    if (iVar2 == 1) {
LAB_180075da4:
      FUN_18000358a(local_58,param_2);
      FUN_180075e6b(local_78,L"File does not exist: ",local_58);
      FUN_180075ec2(local_c0,local_78);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_c0,&DAT_1803a6440);
    }
    puVar3 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    iVar2 = FUN_18023a250(puVar3,local_78,9,0xffffffff);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = local_70;
      FUN_180076130(param_1,param_2);
      *(undefined4 *)(param_1 + 0x28) = *param_3;
      *param_1 = 1;
      return;
    }
    FUN_18006ccef("file_size",iVar2,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_18000219a("exists",local_58,param_2);
}

