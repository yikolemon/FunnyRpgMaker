/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009e716 */

void FUN_14009e716(undefined8 param_1,longlong *param_2,uint *param_3)

{
  undefined1 local_68 [56];
  int local_30 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if ((ulonglong)*param_3 == 0xffffffff) {
    local_30[0] = (int)param_2[1] - (int)*param_2;
    FUN_14009e7ce();
    return;
  }
  if ((ulonglong)*param_3 <= (ulonglong)(param_2[1] - *param_2)) {
    FUN_14009e7ce(param_1,*param_2);
    return;
  }
  FUN_14000169c(local_30,"WriteBytesVec: size is larger than buffer size");
  FUN_14008cc42(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_68,&DAT_1401a57a0);
}

