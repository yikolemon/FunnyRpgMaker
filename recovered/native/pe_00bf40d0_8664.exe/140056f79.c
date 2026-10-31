/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140056f79 */

int FUN_140056f79(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  local_2c = 0;
  if (param_3[0xc] == 0) {
    puVar1 = (undefined8 *)FUN_14001e961(*param_3,(int)(param_2 - (longlong)param_1) + 1,&local_2c);
    param_3[0xc] = (longlong)puVar1;
    if (local_2c == 0) {
      uVar2 = param_2 - (longlong)param_1 & 0xffffffff;
      FUN_1400b3550(puVar1,param_1,uVar2);
      *(undefined1 *)(param_3[0xc] + uVar2) = 0;
    }
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

