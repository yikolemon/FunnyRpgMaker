/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bef13 */

void FUN_1400bef13(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 param_5,undefined4 param_6)

{
  float *pfVar1;
  undefined1 auStack_48 [32];
  float *local_28;
  undefined8 local_20;
  undefined4 local_18;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = &local_c;
  if (param_4 <= 0.0) {
    local_28 = (float *)0x0;
  }
  pfVar1 = (float *)0x0;
  if (0.0 < param_3) {
    pfVar1 = &local_10;
  }
  local_18 = param_6;
  local_20 = param_5;
  local_10 = param_3;
  local_c = param_4;
  FUN_1400be984(0,8,param_2,pfVar1);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
}

