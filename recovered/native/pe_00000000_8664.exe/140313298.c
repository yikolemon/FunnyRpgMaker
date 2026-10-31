/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140313298 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140313298(undefined8 param_1,char *param_2,char *param_3,char param_4)

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
  
  lVar3 = DAT_14062a630;
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  local_30 = param_1;
  if (param_4 == '\0') {
    if (param_3 == (char *)0x0) {
      sVar4 = strlen(param_2);
      param_3 = param_2 + sVar4;
    }
  }
  else {
    param_3 = (char *)FUN_140313264(param_2,param_3);
  }
  if (param_2 != param_3) {
    uVar2 = *(undefined8 *)(lVar1 + 800);
    local_58 = FUN_14031276b(0,DAT_1404bda40);
    local_38 = 0;
    local_40 = 0;
    local_50 = param_2;
    local_48 = param_3;
    FUN_1403a50fc(uVar2,*(undefined8 *)(lVar3 + 0x1310),*(undefined4 *)(lVar3 + 0x1320),&local_30);
    if (*(char *)(lVar3 + 0x2a40) == '\x01') {
      FUN_14031338e(&local_30,param_2,param_3);
    }
  }
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_78);
}

