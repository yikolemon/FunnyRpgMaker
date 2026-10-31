/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140008ab2 */

undefined8 *
FUN_140008ab2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             ushort param_5,undefined8 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStackY_c8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78 [72];
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  uVar2 = FUN_140009707(local_78,0x40,0x14011a995,param_6);
  if ((int)uVar2 < 0) {
    uVar1 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  else {
    local_88 = *param_3;
    uStack_80 = param_3[1];
    FUN_140009794(param_1,(undefined1 *)param_2,(undefined1 *)&local_88,param_4,param_5,local_78,
                  (ulonglong)uVar2);
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_c8)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStackY_c8);
}

