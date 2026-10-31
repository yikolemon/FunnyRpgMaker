/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dcb19 */

void FUN_1800dcb19(char *param_1,longlong *param_2)

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
      local_20 = FUN_1800173a0(param_1);
      FUN_1800172c9(local_40,"type must be number, but is ");
      FUN_180017158(local_78,0x12e,local_40,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_78,&DAT_180391520);
    }
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *param_2 = lVar2;
  return;
}

