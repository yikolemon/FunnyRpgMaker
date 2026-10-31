/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140062669 */

undefined8 FUN_140062669(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20 [2];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_20[0] = 3;
  uVar1 = FUN_1400626d2(param_1,(longlong)local_20,1);
  uVar2 = 0xa0;
  if ((int)uVar1 == 1) {
    *param_2 = local_18;
    uVar2 = 0;
  }
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_48);
}

