/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400602a0 */

int FUN_1400602a0(undefined8 *param_1,uint param_2,longlong param_3)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStackY_68 [32];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  param_1[6] = param_3;
  lVar2 = FUN_14001c617(param_3,8,0,param_2,0,&local_34);
  param_1[4] = lVar2;
  if (local_34 == 0) {
    iVar3 = 0;
    lVar2 = FUN_14001c617(param_3,4,0,param_2,0,&local_34);
    param_1[5] = lVar2;
    if (local_34 == 0) {
      *(uint *)((longlong)param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 3) = 0xdeadbeef;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar1 = PTR_LAB_1400f98c8;
      param_1[7] = PTR_FUN_1400f98c0;
      param_1[8] = puVar1;
      puVar1 = PTR_FUN_1400f98d8;
      param_1[9] = PTR_FUN_1400f98d0;
      param_1[10] = puVar1;
      goto LAB_14006033b;
    }
  }
  FUN_14001c53d(param_3,param_1[4]);
  param_1[4] = 0;
  iVar3 = local_34;
LAB_14006033b:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_68)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStackY_68);
}

