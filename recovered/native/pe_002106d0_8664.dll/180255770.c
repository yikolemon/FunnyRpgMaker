/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180255770 */

void FUN_180255770(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined2 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined2 local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_b8;
  iVar4 = FUN_18007d317(local_68,0x40,&DAT_18038744c,param_6);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  if (iVar4 < 0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
  else {
    local_88 = (longlong)iVar4;
    local_90 = local_68;
    local_98 = param_5;
    local_78 = *param_3;
    uStack_74 = uVar1;
    uStack_70 = uVar2;
    uStack_6c = uVar3;
    FUN_180255830(param_1,param_2,&local_78,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_b8);
}

