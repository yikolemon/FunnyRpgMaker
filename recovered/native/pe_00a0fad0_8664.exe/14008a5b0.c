/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008a5b0 */

void FUN_14008a5b0(undefined8 param_1,longlong *param_2,uint *param_3)

{
  undefined1 local_68 [56];
  int local_30 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if ((ulonglong)*param_3 == 0xffffffff) {
    local_30[0] = (int)param_2[1] - (int)*param_2;
    FUN_14008a7d6();
    return;
  }
  if ((ulonglong)*param_3 <= (ulonglong)(param_2[1] - *param_2)) {
    FUN_14008a7d6(param_1,*param_2);
    return;
  }
  FUN_14000169c(local_30,"ReadBytesVec: size is larger than buffer size");
  FUN_14008a8da(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_68,&DAT_1401a5760);
}

