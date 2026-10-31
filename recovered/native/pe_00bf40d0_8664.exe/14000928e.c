/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000928e */

undefined8 *
FUN_14000928e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             ushort param_5,uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStackY_e8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_8e [6];
  char local_88 [72];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_e8;
  FUN_14000ab28(param_1,local_8e,"ld",*(uint *)(param_4 + 0x18));
  uVar2 = FUN_140009707(local_88,0x40,(longlong)local_8e,(ulonglong)param_6);
  if ((int)uVar2 < 0) {
    uVar1 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  else {
    local_a8 = *param_3;
    uStack_a0 = param_3[1];
    FUN_140009794(param_1,(undefined1 *)param_2,(undefined1 *)&local_a8,param_4,param_5,local_88,
                  (ulonglong)uVar2);
  }
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_e8)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_e8);
}

