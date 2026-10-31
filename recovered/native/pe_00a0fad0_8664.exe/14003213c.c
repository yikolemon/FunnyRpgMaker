/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003213c */

void FUN_14003213c(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_2 >> 0x3d == 0) {
    lVar1 = param_1[1];
    lVar2 = *param_1;
    uVar3 = FUN_140006280(*param_2 << 3);
    local_38 = *param_2;
    local_48 = param_1;
    local_40 = uVar3;
    thunk_FUN_140016eb4(*param_1,param_1[1],uVar3);
    local_40 = 0;
    FUN_1400321fa(param_1,uVar3,lVar1 - lVar2 >> 3,*param_2);
    FUN_140032264(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}

