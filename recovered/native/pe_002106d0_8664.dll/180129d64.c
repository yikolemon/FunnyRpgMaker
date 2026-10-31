/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180129d64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180129d64(int param_1)

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
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    cVar2 = FUN_18010759c(0xa0);
    lVar1 = DAT_180419160;
    if (cVar2 != '\0') {
      FUN_18012b956(param_1);
      uVar3 = FUN_180103228();
      local_20 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x1ff4) >> 0x20) +
                          DAT_1802de480._4_4_,
                          (float)*(undefined8 *)(lVar1 + 0x1ff4) + (float)DAT_1802de480);
      local_28 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x1fec) >> 0x20) +
                          _UNK_1802dea74,(float)*(undefined8 *)(lVar1 + 0x1fec) + _DAT_1802dea70);
      local_38 = 0;
      local_48 = 0;
      local_40 = 0x3f800000;
      FUN_180192c0a(uVar3,&local_28,&local_20,0xff00ff00);
      if (*(char *)(lVar1 + 0xb4) == '\x01') {
        if (DAT_1802ac570 < *(float *)(lVar1 + 0x269c)) {
          FUN_18012a120(0,"in ItemAdd()");
          cVar2 = FUN_180119386(*(undefined4 *)(lVar1 + 0x2b04));
          if (cVar2 != '\0') {
            *(undefined1 *)(lVar1 + 0x2b02) = 1;
          }
        }
      }
    }
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_68);
}

