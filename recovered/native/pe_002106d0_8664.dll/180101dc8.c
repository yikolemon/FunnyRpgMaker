/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180101dc8 */

void FUN_180101dc8(undefined8 param_1,char *param_2,char *param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  size_t sVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  lVar3 = DAT_180419160;
  local_28 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  local_30 = param_1;
  if (param_4 == '\0') {
    if (param_3 == (char *)0x0) {
      sVar4 = strlen(param_2);
      param_3 = param_2 + sVar4;
    }
  }
  else {
    param_3 = (char *)FUN_180101d94(param_2,param_3);
  }
  if (param_2 != param_3) {
    uVar2 = *(undefined8 *)(lVar1 + 800);
    local_58 = FUN_18010129b(0,DAT_1802ac570);
    local_38 = 0;
    local_40 = 0;
    local_50 = param_2;
    local_48 = param_3;
    FUN_180193c2c(uVar2,*(undefined8 *)(lVar3 + 0x1310),*(undefined4 *)(lVar3 + 0x1320),&local_30);
    if (*(char *)(lVar3 + 0x2a40) == '\x01') {
      FUN_180101ebe(&local_30,param_2,param_3);
    }
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_78);
}

