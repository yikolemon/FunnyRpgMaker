/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130df1 */

undefined4 * FUN_140130df1(undefined4 *param_1,undefined4 *param_2)

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
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  cVar4 = FUN_140130d70();
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
    uVar5 = FUN_14010bfae(param_2);
    uVar6 = FUN_14010bfa8(param_2);
    FUN_14010beec(param_1,uVar6,uVar5,DAT_140e94cd8);
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_78);
}

