/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140164719 */

undefined8 FUN_140164719(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20 [2];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_20[0] = 3;
  iVar1 = FUN_140164782(param_1,local_20,1);
  uVar2 = 0xa0;
  if (iVar1 == 1) {
    *param_2 = local_18;
    uVar2 = 0;
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
}

