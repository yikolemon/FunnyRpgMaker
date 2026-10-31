/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ad20d */

undefined4 FUN_1400ad20d(undefined8 param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  lVar1 = DAT_140f2a910;
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar5 = -(uint)(param_2[1] != 0.0);
    uVar6 = -(uint)(*param_2 != 0.0);
    FUN_14008a3c7(local_38,CONCAT44(~uVar5 & DAT_140211724 | (uint)param_2[1] & uVar5,
                                    ~uVar6 & DAT_140211724 | (uint)*param_2 & uVar6));
    uVar4 = 0;
    uVar3 = FUN_140080066(lVar1,param_1,0);
    local_48 = *(undefined8 *)(lVar1 + 0x158);
    local_40 = CONCAT44(local_38._4_4_ + (float)((ulonglong)local_48 >> 0x20),
                        local_38._0_4_ + (float)local_48);
    FUN_14008a82c(local_38);
    cVar2 = FUN_14008a9ce(&local_48,uVar3,0,~param_3 >> 2 & 2);
    if (cVar2 != '\0') {
      local_58 = param_3;
      uVar4 = FUN_1400ac79b(&local_48,uVar3,&local_49,&local_4a);
      FUN_14007bdca(&local_48,uVar3,0);
    }
  }
  else {
    uVar4 = 0;
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_78)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_78);
}

