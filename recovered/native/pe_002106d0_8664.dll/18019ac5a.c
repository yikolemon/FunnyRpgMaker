/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ac5a */

void FUN_18019ac5a(int *param_1,ushort param_2)

{
  undefined4 in_XMM1_Da;
  undefined1 auStack_48 [44];
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  if (((int)(uint)param_2 < *param_1) &&
     (in_XMM1_Da = 0, 0.0 <= *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)param_2 * 4))) {
    return;
  }
  uStack_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if ((DAT_1803273b0 <= (float)param_1[5]) || ((*(byte *)((longlong)param_1 + 0x4f) & 0x10) != 0)) {
    uStack_1c = 0;
    FUN_18019a97c(param_1,in_XMM1_Da,&uStack_1c);
  }
  else {
    FUN_18019a97c(param_1,in_XMM1_Da,0);
  }
  if (DAT_180402640 != (uStack_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(uStack_18 ^ (ulonglong)auStack_48);
  }
  return;
}

