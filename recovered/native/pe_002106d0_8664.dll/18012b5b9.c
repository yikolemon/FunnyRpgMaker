/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012b5b9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012b5b9(undefined8 param_1,uint param_2)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  lVar3 = DAT_180419160;
  local_50 = DAT_180402640 ^ (ulonglong)auStack_98;
  fVar5 = (float)FUN_18011a456();
  fVar1 = *(float *)(lVar3 + 0xe0c);
  local_78 = 0xbf800000;
  bVar2 = false;
  FUN_1801023ca(&local_68,param_1,0,0);
  local_58 = fVar1 + fVar5 + local_68;
  local_54 = fVar5;
  FUN_180132890();
  if (param_2 == 1) {
    if (*(int *)(lVar3 + 11000) < 1) {
      bVar2 = false;
    }
    else {
      local_68 = (_DAT_1802de870 - *(float *)(lVar3 + 0xee8)) * _DAT_1802deac0 +
                 *(float *)(lVar3 + 0xee8);
      fStack_64 = (_UNK_1802de874 - *(float *)(lVar3 + 0xeec)) * _UNK_1802deac4 +
                  *(float *)(lVar3 + 0xeec);
      fStack_60 = (_UNK_1802de878 - *(float *)(lVar3 + 0xef0)) * _UNK_1802deac8 +
                  *(float *)(lVar3 + 0xef0);
      fStack_5c = (_UNK_1802de87c - *(float *)(lVar3 + 0xef4)) * _UNK_1802deacc +
                  *(float *)(lVar3 + 0xef4);
      FUN_1801014f9(0);
      bVar2 = true;
    }
  }
  cVar4 = thunk_FUN_18013698f(param_1,(uint *)(lVar3 + 0x2acc),param_2);
  if (((cVar4 != '\0') && (*(char *)(lVar3 + 0x139) == '\x01')) &&
     ((*(uint *)(lVar3 + 0x2acc) & param_2) != 0)) {
    *(undefined1 *)(lVar3 + 0x2b00) = 2;
    *(uint *)(lVar3 + 0x2afc) = *(uint *)(lVar3 + 0x2afc) | param_2;
  }
  if (bVar2) {
    FUN_180101625(1);
    FUN_18011ab06("%d past errors skipped.",*(undefined4 *)(lVar3 + 11000));
  }
  else {
    FUN_18011ab06(
                 "Hold Shift when clicking to enable for 2 frames only (useful for spammy log entries)"
                 );
  }
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_98);
}

