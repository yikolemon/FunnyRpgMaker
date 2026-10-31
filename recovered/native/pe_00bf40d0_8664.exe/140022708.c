/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140022708 */

int FUN_140022708(longlong *param_1,longlong param_2,undefined4 param_3,uint param_4,char *param_5,
                 longlong *param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  uint local_70 [8];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  local_48 = (longlong *)0x0;
  local_70[0] = 0;
  if (param_5 != (char *)0x0) {
    local_48 = FUN_14001d3fa((longlong)param_1,param_5);
    if (local_48 == (longlong *)0x0) {
      FUN_14001c53d(lVar1,param_2);
      uVar2 = 0xb;
      goto LAB_1400227c2;
    }
    local_70[0] = 8;
  }
  uVar2 = FUN_1400227f1(param_1,param_2,param_3,&local_50);
  if (uVar2 == 0) {
    local_70[0] = local_70[0] | 2;
    uVar2 = FUN_14001e1c2(param_1,local_70,param_4,param_6,'\0');
  }
  else {
    FUN_14001c53d(lVar1,param_2);
  }
LAB_1400227c2:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_98)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_98);
}

