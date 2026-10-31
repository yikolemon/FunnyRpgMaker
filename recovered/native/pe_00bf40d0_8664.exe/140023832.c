/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023832 */

int FUN_140023832(longlong *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong **pplVar3;
  undefined1 auStackY_98 [32];
  undefined8 local_70;
  longlong *local_68;
  uint local_60 [6];
  undefined8 local_48;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  local_60[0] = 4;
  pplVar3 = &local_68;
  local_48 = param_2;
  iVar1 = FUN_14001cf06(param_1,local_60,pplVar3);
  if (iVar1 == 0) {
    uVar2 = FUN_1400232aa(param_1,local_68,pplVar3,&local_70,param_3);
    iVar1 = (int)uVar2;
    FUN_14001d05c((longlong)local_68,0);
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_98)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_98);
}

