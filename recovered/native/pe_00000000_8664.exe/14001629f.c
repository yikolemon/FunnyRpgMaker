/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001629f */

void FUN_14001629f(char *param_1,longlong *param_2)

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
      local_20 = FUN_14000ea3a(param_1);
      FUN_14000e963(local_40,"type must be number, but is ");
      FUN_14000e7f2(local_78,0x12e,local_40,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(local_78,&DAT_140ee3b30);
    }
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *param_2 = lVar2;
  return;
}

