/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2dd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a2dd8(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_20 = (longlong *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x70))(param_1,0,&local_20);
  if (local_20 != (longlong *)0x0 && -1 < iVar2) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar2 = (**(code **)(*local_20 + 0x48))(local_20,&local_68);
    if (local_48 != 0 && -1 < iVar2) {
      cVar1 = FUN_1801a2ed9();
      if ((cVar1 != '\0') && (DAT_180420d20 != param_1)) {
        if (DAT_180420d20 != (longlong *)0x0) {
          FUN_1801c750e();
          DAT_180420d20 = (longlong *)0x0;
        }
        cVar1 = FUN_1801c7258(param_1);
        if (cVar1 != '\0') {
          _DAT_18041f148 = 0;
          _DAT_18041f140 = param_1;
          DAT_180420d20 = param_1;
        }
      }
    }
    (**(code **)(*local_20 + 0x10))();
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_88);
}

