/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b3212 */

void FUN_1800b3212(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_2 >> 0x3c == 0) {
    lVar1 = param_1[1];
    lVar2 = *param_1;
    uVar3 = FUN_1800013e0(*param_2 << 4);
    local_38 = *param_2;
    local_48 = param_1;
    local_40 = uVar3;
    thunk_FUN_18001bde0(*param_1,param_1[1],uVar3);
    local_40 = 0;
    FUN_1800b32d0(param_1,uVar3,lVar1 - lVar2 >> 4,*param_2);
    FUN_180016958(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

