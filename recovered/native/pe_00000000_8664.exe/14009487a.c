/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009487a */

undefined8 FUN_14009487a(undefined8 param_1,char *param_2,uint param_3)

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
  
  lVar1 = DAT_140f2a910;
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(DAT_140f2a910 + 0x1608);
  uVar3 = FUN_140080066(lVar4,param_1,0);
  cVar2 = FUN_140081f3e(uVar3,0);
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
        lVar4 = FUN_140088c06();
      }
      local_38 = (float)DAT_1401c8640;
      fStack_34 = DAT_1401c8640._4_4_;
      local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) *
                          DAT_1401c8640._4_4_ +
                          (float)((ulonglong)*(undefined8 *)(lVar4 + 8) >> 0x20),
                          (float)*(undefined8 *)(lVar4 + 0x10) * (float)DAT_1401c8640 +
                          (float)*(undefined8 *)(lVar4 + 8));
      FUN_14008fda3(&local_40,4);
    }
    cVar2 = FUN_140085d7e(param_1,param_2,param_3 | 0xc080020);
    if (cVar2 == '\0') {
      FUN_1400946ab();
    }
    else {
      uVar5 = 1;
      if ((param_2 == (char *)0x0) || (*param_2 != '\0')) goto LAB_140094971;
      FUN_1400946ab();
      FUN_140094394(*(undefined4 *)(lVar1 + 0x2158),1);
    }
  }
  uVar5 = 0;
LAB_140094971:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

