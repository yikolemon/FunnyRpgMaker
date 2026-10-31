/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b5be */

undefined8 FUN_18011b5be(undefined8 param_1,char *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  float local_38;
  float fStack_34;
  ulonglong local_30;
  
  lVar1 = DAT_180419160;
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(DAT_180419160 + 0x1608);
  uVar3 = FUN_180106d4e(lVar4,param_1,0);
  cVar2 = FUN_180108c26(uVar3,0);
  if (cVar2 == '\0') {
    *(undefined4 *)(lVar1 + 0x2030) = 0;
    if ((param_2 != (char *)0x0) && (*param_2 == '\x01')) {
      *param_2 = '\0';
    }
  }
  else {
    if ((*(byte *)(lVar1 + 0x2030) & 1) == 0) {
      if (*(char *)(lVar4 + 0x10a) == '\x01') {
        lVar4 = *(longlong *)(lVar4 + 0x48);
      }
      else {
        lVar4 = FUN_18010f8ee();
      }
      local_38 = (float)DAT_1802de570;
      fStack_34 = DAT_1802de570._4_4_;
      local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) *
                          DAT_1802de570._4_4_ +
                          (float)((ulonglong)*(undefined8 *)(lVar4 + 8) >> 0x20),
                          (float)*(undefined8 *)(lVar4 + 0x10) * (float)DAT_1802de570 +
                          (float)*(undefined8 *)(lVar4 + 8));
      FUN_180116a8b(&local_40,4);
    }
    cVar2 = FUN_18010ca66(param_1,param_2,param_3 | 0xc080020);
    if (cVar2 == '\0') {
      FUN_18011b3ef();
    }
    else {
      uVar5 = 1;
      if ((param_2 == (char *)0x0) || (*param_2 != '\0')) goto LAB_18011b6b5;
      FUN_18011b3ef();
      FUN_18011b0d8(*(undefined4 *)(lVar1 + 0x2158),1);
    }
  }
  uVar5 = 0;
LAB_18011b6b5:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

