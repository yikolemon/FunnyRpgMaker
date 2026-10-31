/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10011d71 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10011d71(undefined1 *param_1,undefined1 *param_2,longlong param_3,int param_4,undefined4 param_5
            )

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 *local_2c;
  uint local_20;
  uint uStack_1c;
  
  uStack_1c = (uint)((ulonglong)param_3 >> 0x20);
  local_20 = (uint)param_3;
  if (param_3 < 0) {
    if (param_1 == param_2) {
      return param_1;
    }
    *param_1 = 0x2d;
    local_20 = local_20 & _DAT_1028b420;
    uStack_1c = uStack_1c & _UNK_1028b424;
    lVar4 = CONCAT44(uStack_1c,local_20);
    local_2c = param_1 + 1;
  }
  else {
    local_2c = param_1;
    lVar4 = param_3;
  }
  if ((~uStack_1c & 0x7ff00000) == 0) {
    if (local_20 == 0 && (uStack_1c & 0xfffff) == 0) {
      iVar2 = 3;
      pcVar1 = "inf";
    }
    else if (((byte)((ulonglong)param_3 >> 0x3f) &
             (local_20 == 0 && (uStack_1c & 0xfffff) == 0x80000)) == 0) {
      bVar3 = (uStack_1c & 0x80000) == 0;
      pcVar1 = "nan";
      if (bVar3) {
        pcVar1 = "nan(snan)";
      }
      iVar2 = 3;
      if (bVar3) {
        iVar2 = 9;
      }
    }
    else {
      iVar2 = 8;
      pcVar1 = "nan(ind)";
    }
    if (iVar2 <= (int)param_2 - (int)local_2c) {
      FUN_1025b2d0(local_2c,pcVar1,iVar2);
      param_2 = local_2c + iVar2;
    }
  }
  else if (param_4 == 3) {
    param_2 = (undefined1 *)FUN_10011fb5(local_2c,param_2,lVar4,param_5);
  }
  else if (param_4 == 2) {
    param_2 = (undefined1 *)FUN_10011f38(local_2c,param_2,lVar4,param_5);
  }
  else if (param_4 == 1) {
    param_2 = (undefined1 *)FUN_10011ef1(local_2c,param_2,lVar4,param_5);
  }
  else {
    param_2 = (undefined1 *)FUN_10012227(local_2c,param_2,lVar4,param_5);
  }
  return param_2;
}

