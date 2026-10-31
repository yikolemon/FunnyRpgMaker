/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011677e */

undefined4 FUN_1011677e(undefined4 param_1,char *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_24;
  float local_1c;
  float fStack_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar4 = *(int *)(DAT_1039d74c + 0x14cc);
  uVar3 = FUN_101021d4(param_1,0);
  cVar2 = FUN_10103f84(uVar3,0);
  if (cVar2 == '\0') {
    *(undefined4 *)(iVar1 + 0x1ed0) = 0;
    if ((param_2 != (char *)0x0) && (*param_2 == '\x01')) {
      *param_2 = '\0';
    }
  }
  else {
    if ((*(byte *)(iVar1 + 0x1ed0) & 1) == 0) {
      if (*(char *)(iVar4 + 0xfa) == '\x01') {
        iVar4 = *(int *)(iVar4 + 0x3c);
      }
      else {
        iVar4 = FUN_1010ad36();
      }
      local_1c = (float)DAT_102b89c0;
      fStack_18 = DAT_102b89c0._4_4_;
      local_24 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar4 + 0x10) >> 0x20) *
                          DAT_102b89c0._4_4_ +
                          (float)((ulonglong)*(undefined8 *)(iVar4 + 8) >> 0x20),
                          (float)*(undefined8 *)(iVar4 + 0x10) * (float)DAT_102b89c0 +
                          (float)*(undefined8 *)(iVar4 + 8));
      FUN_10111d56(&local_24,4,&local_1c);
    }
    cVar2 = FUN_10107d2b(param_1,param_2,param_3 | 0xc080020);
    if (cVar2 == '\0') {
      FUN_101165cb();
    }
    else {
      uVar3 = 1;
      if ((param_2 == (char *)0x0) || (*param_2 != '\0')) goto LAB_1011686e;
      FUN_101165cb();
      FUN_1011630c(*(undefined4 *)(iVar1 + 0x1fc8),1);
    }
  }
  uVar3 = 0;
LAB_1011686e:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

