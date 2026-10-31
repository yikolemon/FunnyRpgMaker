/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046b9c */

undefined8 FUN_140046b9c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x70726570,param_2,&local_1c);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x3c0) = local_1c;
    uVar2 = FUN_140021039(param_2,local_1c,(longlong *)(param_1 + 0x3c8));
  }
  else {
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    uVar2 = 0;
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

