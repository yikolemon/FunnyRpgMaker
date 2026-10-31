/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140163d53 */

void FUN_140163d53(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_140128a1f(param_2,0x20,&local_34);
  if (local_34 == 0) {
    puVar1[1] = param_3;
    *puVar1 = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = 2;
    *param_1 = param_2;
    param_1[1] = puVar1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

