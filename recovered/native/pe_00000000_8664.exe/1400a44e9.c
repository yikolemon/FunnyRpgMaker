/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a44e9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a44e9(undefined8 param_1,uint param_2)

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
  
  lVar3 = DAT_140f2a910;
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  fVar5 = (float)FUN_14009376e();
  fVar1 = *(float *)(lVar3 + 0xe0c);
  local_78 = 0xbf800000;
  bVar2 = false;
  FUN_14007b686(&local_68,param_1,0,0);
  local_58 = fVar1 + fVar5 + local_68;
  local_54 = fVar5;
  FUN_1400ab7c0();
  if (param_2 == 1) {
    if (*(int *)(lVar3 + 11000) < 1) {
      bVar2 = false;
    }
    else {
      local_68 = (_DAT_1402115e0 - *(float *)(lVar3 + 0xee8)) * _DAT_140211830 +
                 *(float *)(lVar3 + 0xee8);
      fStack_64 = (_UNK_1402115e4 - *(float *)(lVar3 + 0xeec)) * _UNK_140211834 +
                  *(float *)(lVar3 + 0xeec);
      fStack_60 = (_UNK_1402115e8 - *(float *)(lVar3 + 0xef0)) * _UNK_140211838 +
                  *(float *)(lVar3 + 0xef0);
      fStack_5c = (_UNK_1402115ec - *(float *)(lVar3 + 0xef4)) * _UNK_14021183c +
                  *(float *)(lVar3 + 0xef4);
      FUN_14007a7b5(0);
      bVar2 = true;
    }
  }
  cVar4 = thunk_FUN_1400af8bf(param_1,(uint *)(lVar3 + 0x2acc),param_2);
  if (((cVar4 != '\0') && (*(char *)(lVar3 + 0x139) == '\x01')) &&
     ((*(uint *)(lVar3 + 0x2acc) & param_2) != 0)) {
    *(undefined1 *)(lVar3 + 0x2b00) = 2;
    *(uint *)(lVar3 + 0x2afc) = *(uint *)(lVar3 + 0x2afc) | param_2;
  }
  if (bVar2) {
    FUN_14007a8e1(1);
    FUN_140093dc2("%d past errors skipped.",*(undefined4 *)(lVar3 + 11000));
  }
  else {
    FUN_140093dc2(
                 "Hold Shift when clicking to enable for 2 frames only (useful for spammy log entries)"
                 );
  }
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_98);
}

