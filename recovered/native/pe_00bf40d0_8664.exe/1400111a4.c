/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400111a4 */

longlong * FUN_1400111a4(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  undefined1 auStackY_b8 [32];
  longlong local_88;
  longlong lStack_80;
  ushort *local_78;
  longlong local_68;
  longlong lStack_60;
  int local_4c;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  if ((param_4[1] < 0) && (*param_4 < 1)) {
    local_48 = *param_3;
    lStack_40 = param_3[1];
    FUN_14000f37f(param_1,param_2,&local_48);
  }
  else {
    local_68 = *param_3;
    lStack_60 = param_3[1];
    local_4c = param_4[1];
    local_78 = FUN_140011a0f(&local_68,&local_4c);
    local_88 = *param_3;
    lStack_80 = param_3[1];
    FUN_140011af8(param_1,param_2,local_4c,param_4,'\x01',&local_88);
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_b8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStackY_b8);
}

