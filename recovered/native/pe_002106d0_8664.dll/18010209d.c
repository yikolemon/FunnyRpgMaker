/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010209d */

void FUN_18010209d(undefined8 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  size_t sVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char *local_70;
  char *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  lVar3 = DAT_180419160;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  local_48 = param_1;
  if (param_3 == (char *)0x0) {
    sVar4 = strlen(param_2);
    param_3 = param_2 + sVar4;
  }
  if (param_2 != param_3) {
    uVar2 = *(undefined8 *)(lVar1 + 800);
    local_78 = FUN_18010129b(0,DAT_1802ac570);
    local_58 = 0;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    FUN_180193c2c(uVar2,*(undefined8 *)(lVar3 + 0x1310),*(undefined4 *)(lVar3 + 0x1320),&local_48);
    if (*(char *)(lVar3 + 0x2a40) == '\x01') {
      FUN_180101ebe(&local_48,param_2,param_3);
    }
  }
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_98);
}

