/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ebcd0 */

void FUN_1400ebcd0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
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
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_b8;
  iVar4 = FUN_140023fef(local_68,0x40,&DAT_1401744d4,param_6);
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
    FUN_1400ebd90(param_1,param_2,&local_78,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_b8);
}

