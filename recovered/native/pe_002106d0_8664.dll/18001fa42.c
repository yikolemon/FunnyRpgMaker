/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001fa42 */

undefined8 *
FUN_18001fa42(undefined8 *param_1,undefined4 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  if (param_3 != 0) {
    FUN_18001ff3e(param_1,param_3);
    local_38 = *param_1;
    uStack_30 = param_1[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_18001fe1c(&local_48,&local_38,*param_4);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

