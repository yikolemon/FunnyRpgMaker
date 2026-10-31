/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a2c94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a2c94(int param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    cVar2 = FUN_1400808b4(0xa0);
    lVar1 = DAT_140f2a910;
    if (cVar2 != '\0') {
      FUN_1400a4886(param_1);
      uVar3 = FUN_14007c4e4();
      local_20 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x1ff4) >> 0x20) +
                          DAT_140211200._4_4_,
                          (float)*(undefined8 *)(lVar1 + 0x1ff4) + (float)DAT_140211200);
      local_28 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x1fec) >> 0x20) +
                          _UNK_1402117e4,(float)*(undefined8 *)(lVar1 + 0x1fec) + _DAT_1402117e0);
      local_38 = 0;
      local_48 = 0;
      local_40 = 0x3f800000;
      FUN_1400de17e(uVar3,&local_28,&local_20,0xff00ff00);
      if (*(char *)(lVar1 + 0xb4) == '\x01') {
        if (DAT_1401c86c8 < *(float *)(lVar1 + 0x269c)) {
          FUN_1400a3050(0,"in ItemAdd()");
          cVar2 = FUN_14009269e(*(undefined4 *)(lVar1 + 0x2b04));
          if (cVar2 != '\0') {
            *(undefined1 *)(lVar1 + 0x2b02) = 1;
          }
        }
      }
    }
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_68);
}

