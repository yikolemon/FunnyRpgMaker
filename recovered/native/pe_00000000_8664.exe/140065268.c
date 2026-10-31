/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140065268 */

short * FUN_140065268(longlong *param_1,undefined8 param_2,longlong param_3,short *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  short *psVar3;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  longlong local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  undefined2 local_67;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  code *local_50;
  undefined8 local_44;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  *param_1 = param_3;
  param_1[1] = param_1[1] - (param_3 - lVar2 >> 1);
  plVar1 = param_1 + 4;
  FUN_1400653be(&local_60,plVar1,param_2);
  if ((char)local_60 == '\r') {
    (*local_50)(param_1,plVar1,CONCAT44(uStack_54,uStack_58));
    psVar3 = (short *)*param_1;
  }
  else {
    local_44 = 0xffffffff00000000;
    local_38 = 0;
    local_3c = 0;
    local_36 = 1;
    local_34 = 0x20;
    local_68 = (char)local_60;
    local_67 = 0;
    local_80 = &local_44;
    local_78 = param_1;
    local_70 = plVar1;
    psVar3 = (short *)FUN_140065f25(param_3,param_4);
    if ((psVar3 == param_4) || (*psVar3 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_140049b0a("Missing \'}\' in format string.");
    }
    local_98 = local_50;
    local_a8 = local_60;
    uStack_a4 = uStack_5c;
    uStack_a0 = uStack_58;
    uStack_9c = uStack_54;
    local_b8 = plVar1;
    local_b0 = &local_44;
    FUN_1400660a0(&local_88);
    *plVar1 = local_88;
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_d8)) {
    return psVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_d8);
}

