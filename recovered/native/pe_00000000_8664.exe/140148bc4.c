/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140148bc4 */

undefined8 FUN_140148bc4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x6670676d,param_2,&local_1c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3b0) = local_1c;
    uVar2 = FUN_14012dc0a(param_2,local_1c,param_1 + 0x3b8);
  }
  else {
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    uVar2 = 0;
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

