/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008246c */

undefined4
FUN_14008246c(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
             undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_48;
  undefined1 *local_40;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  uVar4 = 6;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != (undefined4 *)0x0)) {
    local_70 = param_5;
    local_60 = *param_3;
    local_48 = FUN_140082569;
    local_40 = &LAB_1400825b1;
    local_78 = param_4;
    local_68 = param_2;
    local_38 = param_1;
    uVar2 = FUN_1400825b6((longlong)&local_78,0x2f);
    if ((int)uVar2 == 0) {
      iVar1 = FUN_14008264e(&local_78,4);
      if (iVar1 == 1) {
        *param_3 = local_5c;
        uVar3 = FUN_140083e41((longlong)&local_78);
        iVar1 = (int)uVar3;
      }
      else {
        FUN_140083e41((longlong)&local_78);
        if (iVar1 == 0) {
          uVar4 = 10;
          goto LAB_1400824e4;
        }
      }
      uVar4 = 0;
      if (iVar1 + 5U < 8) {
        uVar4 = *(undefined4 *)(&DAT_14010b440 + (ulonglong)(iVar1 + 5U) * 4);
      }
    }
  }
LAB_1400824e4:
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_98)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_98);
}

