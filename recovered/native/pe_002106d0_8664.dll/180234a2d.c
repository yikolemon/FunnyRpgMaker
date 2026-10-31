/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180234a2d */

undefined4 * FUN_180234a2d(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  cVar4 = FUN_1802349ac();
  if (cVar4 == '\0') {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = uVar3;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  else {
    uVar5 = FUN_18019efba(param_2);
    uVar6 = FUN_18019efb4(param_2);
    FUN_18019eef8(param_1,uVar6,uVar5,DAT_180330ce8);
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_78);
}

