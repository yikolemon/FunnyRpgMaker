/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400059f2 */

ulonglong FUN_1400059f2(longlong param_1,byte param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined1 auStackY_48 [32];
  WCHAR local_1a;
  undefined8 local_18;
  byte local_9;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStackY_48;
  local_18 = 0;
  local_9 = param_2;
  iVar1 = FUN_140088b60(&local_1a,&local_9,1,&local_18,(UINT *)(param_1 + 0x30));
  uVar2 = CONCAT62((int6)(CONCAT44(extraout_var,iVar1) >> 0x10),0xffff);
  if (-1 < iVar1) {
    uVar2 = (ulonglong)(ushort)local_1a;
  }
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStackY_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStackY_48);
}

