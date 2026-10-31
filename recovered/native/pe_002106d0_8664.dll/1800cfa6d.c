/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cfa6d */

void FUN_1800cfa6d(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  do {
    local_48 = 0;
    local_50 = lVar1 + 0x18;
    FUN_180044980(lVar1 + 0x18);
    local_48 = '\x01';
    cVar2 = FUN_1800cfb44(lVar1 + 0x68,&local_50,param_1[9],lVar1);
    if (cVar2 == '\0') {
      if ((longlong *)param_1[8] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802398e0();
      }
      (**(code **)(*(longlong *)param_1[8] + 0x10))();
    }
    if (local_48 == '\x01') {
      FUN_18023d6e0(local_50);
    }
  } while (cVar2 == '\0');
  return;
}

