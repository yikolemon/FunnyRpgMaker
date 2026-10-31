/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c9a2b */

undefined8 * FUN_1800c9a2b(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  HANDLE pvVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_180005764(&local_68,0,0x104);
  while( true ) {
    uVar2 = uStack_50;
    uVar1 = local_58;
    puVar5 = local_68;
    pvVar4 = GetCurrentProcess();
    if (uVar2 < 8) {
      puVar5 = &local_68;
    }
    uVar3 = K32GetMappedFileNameW(pvVar4,param_2,puVar5,uVar1 & 0xffffffff);
    if (uVar3 == 0) break;
    if ((ulonglong)uVar3 < local_58 - 1) {
      FUN_180004aa4(&local_68,(ulonglong)uVar3,0);
      param_1[2] = local_58;
      param_1[3] = uStack_50;
      *(undefined4 *)param_1 = (undefined4)local_68;
      *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
      local_58 = 0;
      uStack_50 = 7;
      local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffffffff0000);
LAB_1800c9b11:
      FUN_1800010ec(&local_68);
      return param_1;
    }
    FUN_180004aa4(&local_68,local_58 * 2,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  goto LAB_1800c9b11;
}

