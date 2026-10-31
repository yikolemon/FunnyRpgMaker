/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007150d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007150d(char *param_1,double *param_2)

{
  char cVar1;
  double dVar2;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
    dVar2 = (double)*(longlong *)(param_1 + 8);
  }
  else if (cVar1 == '\a') {
    dVar2 = *(double *)(param_1 + 8);
  }
  else {
    if (cVar1 != '\x06') {
      local_20 = FUN_14006c034(param_1);
      FUN_14006bf5d(local_40,"type must be number, but is ");
      FUN_14006bdec(local_78,0x12e,local_40,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_78,&DAT_140196700);
    }
    dVar2 = ((double)CONCAT44(DAT_140140eb0._4_4_,
                              (int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20)) -
            _UNK_140140ec8) +
            ((double)CONCAT44((undefined4)DAT_140140eb0,(int)*(undefined8 *)(param_1 + 8)) -
            _DAT_140140ec0);
  }
  *param_2 = dVar2;
  return;
}

