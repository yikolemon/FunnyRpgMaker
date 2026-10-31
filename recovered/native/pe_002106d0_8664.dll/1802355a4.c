/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802355a4 */

undefined4
FUN_1802355a4(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_48;
  undefined1 *local_40;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar2 = 6;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != (undefined4 *)0x0)) {
    local_70 = param_5;
    local_60 = *param_3;
    local_48 = FUN_1802356a1;
    local_40 = &LAB_1802356e9;
    local_78 = param_4;
    local_68 = param_2;
    local_38 = param_1;
    iVar1 = FUN_1802356ee(&local_78,0x2f);
    if (iVar1 == 0) {
      iVar1 = FUN_180235786(&local_78,4);
      if (iVar1 == 1) {
        *param_3 = local_5c;
        iVar1 = FUN_180236f79();
      }
      else {
        FUN_180236f79(&local_78);
        if (iVar1 == 0) {
          uVar2 = 10;
          goto LAB_18023561c;
        }
      }
      uVar2 = 0;
      if (iVar1 + 5U < 8) {
        uVar2 = *(undefined4 *)(&DAT_18034e340 + (ulonglong)(iVar1 + 5U) * 4);
      }
    }
  }
LAB_18023561c:
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_98)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_98);
}

