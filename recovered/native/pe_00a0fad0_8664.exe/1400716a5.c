/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400716a5 */

void FUN_1400716a5(char *param_1,ulonglong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
    uVar2 = *(ulonglong *)(param_1 + 8);
  }
  else if (cVar1 == '\a') {
    uVar2 = (ulonglong)*(double *)(param_1 + 8);
    uVar2 = (longlong)(*(double *)(param_1 + 8) - DAT_140140ed0) & (longlong)uVar2 >> 0x3f | uVar2;
  }
  else {
    if (cVar1 != '\x06') {
      local_20 = FUN_14006c034(param_1);
      FUN_14006bf5d(local_40,"type must be number, but is ");
      FUN_14006bdec(local_78,0x12e,local_40,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_78,&DAT_140196700);
    }
    uVar2 = *(ulonglong *)(param_1 + 8);
  }
  *param_2 = uVar2;
  return;
}

