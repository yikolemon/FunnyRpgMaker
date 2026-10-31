/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400715e8 */

void FUN_1400715e8(char *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
    lVar2 = *(longlong *)(param_1 + 8);
  }
  else if (cVar1 == '\a') {
    lVar2 = (longlong)*(double *)(param_1 + 8);
  }
  else {
    if (cVar1 != '\x06') {
      local_20 = FUN_14006c034(param_1);
      FUN_14006bf5d(local_40,"type must be number, but is ");
      FUN_14006bdec(local_78,0x12e,local_40,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_78,&DAT_140196700);
    }
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *param_2 = lVar2;
  return;
}

