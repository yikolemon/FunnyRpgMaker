/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119733 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_180119733(void)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  ulonglong local_20;
  
  lVar2 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1801118f0("##Tooltip_Error");
  if ((lVar4 == 0) || (*(char *)(lVar2 + 0x138) == '\0')) {
    fStack_30 = (_UNK_1802de878 - *(float *)(lVar2 + 0xf30)) * _UNK_1802de888 +
                *(float *)(lVar2 + 0xf30);
    fStack_2c = (_UNK_1802de87c - *(float *)(lVar2 + 0xf34)) * _UNK_1802de88c +
                *(float *)(lVar2 + 0xf34);
    local_38 = CONCAT44((_UNK_1802de874 - *(float *)(lVar2 + 0xf2c)) * _UNK_1802de884 +
                        *(float *)(lVar2 + 0xf2c),
                        (_DAT_1802de870 - *(float *)(lVar2 + 0xf28)) * _DAT_1802de880 +
                        *(float *)(lVar2 + 0xf28));
    FUN_1801014f9(4);
  }
  else {
    cVar1 = *(char *)(lVar4 + 0x10a);
    fStack_30 = (_UNK_1802de878 - *(float *)(lVar2 + 0xf30)) * _UNK_1802de888 +
                *(float *)(lVar2 + 0xf30);
    fStack_2c = (_UNK_1802de87c - *(float *)(lVar2 + 0xf34)) * _UNK_1802de88c +
                *(float *)(lVar2 + 0xf34);
    local_38 = CONCAT44((_UNK_1802de874 - *(float *)(lVar2 + 0xf2c)) * _UNK_1802de884 +
                        *(float *)(lVar2 + 0xf2c),
                        (_DAT_1802de870 - *(float *)(lVar2 + 0xf28)) * _DAT_1802de880 +
                        *(float *)(lVar2 + 0xf28));
    FUN_1801014f9(4);
    if (cVar1 == '\x01') {
      local_38 = 0;
      FUN_180116a8b(lVar2 + 0x2a98,0);
    }
  }
  uVar3 = FUN_18010ca66("##Tooltip_Error",0,0x200016f);
  FUN_180101625(1);
  if ((char)uVar3 == '\0') {
    FUN_18010f900();
  }
  else if (*(short *)(*(longlong *)(lVar2 + 0x1608) + 0x118) == 1) {
    FUN_1801380f1("MESSAGE FROM DEAR IMGUI");
    FUN_18011994d(*(undefined8 *)(lVar2 + 0x1608));
    FUN_1801199d6(*(undefined8 *)(lVar2 + 0x1608));
    FUN_1801169cb(&local_38);
    *(undefined8 *)(lVar2 + 0x2a98) = local_38;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

