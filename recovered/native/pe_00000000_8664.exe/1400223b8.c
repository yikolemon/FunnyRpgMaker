/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400223b8 */

longlong FUN_1400223b8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  iVar1 = FUN_1400217c6();
  if (iVar1 < 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  else {
    FUN_14001a560(param_1,param_2,iVar1);
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

