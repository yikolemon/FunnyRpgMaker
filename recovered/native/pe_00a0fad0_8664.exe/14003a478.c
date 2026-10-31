/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003a478 */

int FUN_14003a478(longlong param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  longlong local_78;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(char *)(param_1 + 0x269) == '\x01') && (lVar2 = *(longlong *)(param_2 + 0x10), lVar2 != 0))
  {
    pcVar3 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar3 = *(char **)param_2;
    }
    if ((*pcVar3 == '[') && (pcVar3[lVar2 + -1] == ']')) {
      *(longlong *)(param_2 + 0x10) = lVar2 + -1;
      pcVar3[lVar2 + -1] = '\0';
      FUN_1400191d4(&local_60,param_2,1,0xffffffffffffffff,&local_39);
      FUN_140009ce9(&local_78,&local_60,0x2c);
      FUN_1400017de(&local_60);
      iVar4 = 0;
      for (; local_78 != local_70; local_78 = local_78 + 0x20) {
        if (*(longlong *)(local_78 + 0x10) != 0) {
          iVar1 = FUN_14003a478(param_1,local_78,param_3);
          iVar4 = iVar4 + iVar1;
        }
      }
      FUN_14000eeca(&local_78);
      return iVar4;
    }
  }
  if (*(char *)(param_1 + 0x25) == '\0') {
    FUN_14001a45e(param_3,param_2);
    iVar4 = 1;
  }
  else {
    lVar2 = FUN_14000e108(param_2,*(char *)(param_1 + 0x25),0);
    if (lVar2 == -1) {
      FUN_14001a45e(param_3,param_2);
      iVar4 = 1;
    }
    else {
      FUN_140009ce9(&local_60,param_2,*(undefined1 *)(param_1 + 0x25));
      iVar4 = 0;
      for (; local_60 != local_58; local_60 = local_60 + 0x20) {
        if (*(longlong *)(local_60 + 0x10) != 0) {
          FUN_14000d086(param_3,local_60);
          iVar4 = iVar4 + 1;
        }
      }
      FUN_14000eeca(&local_60);
    }
  }
  return iVar4;
}

