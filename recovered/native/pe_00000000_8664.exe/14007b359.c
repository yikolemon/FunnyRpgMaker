/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007b359 */

void FUN_14007b359(undefined8 param_1,char *param_2,char *param_3,undefined4 param_4)

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
  
  lVar3 = DAT_140f2a910;
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  local_48 = param_1;
  if (param_3 == (char *)0x0) {
    sVar4 = strlen(param_2);
    param_3 = param_2 + sVar4;
  }
  if (param_2 != param_3) {
    uVar2 = *(undefined8 *)(lVar1 + 800);
    local_78 = FUN_14007a557(0,DAT_1401c86c8);
    local_58 = 0;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    FUN_1400df1a0(uVar2,*(undefined8 *)(lVar3 + 0x1310),*(undefined4 *)(lVar3 + 0x1320),&local_48);
    if (*(char *)(lVar3 + 0x2a40) == '\x01') {
      FUN_14007b17a(&local_48,param_2,param_3);
    }
  }
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_98);
}

