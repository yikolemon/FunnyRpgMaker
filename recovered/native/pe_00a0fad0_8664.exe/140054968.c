/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140054968 */

int FUN_140054968(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar4 = *param_2;
  lVar1 = param_2[1];
  local_50 = param_1;
  do {
    if (lVar4 == lVar1) {
      return 0;
    }
    FUN_14000550c(local_b0,lVar4,0);
    FUN_14000559c(local_b0,local_70);
    FUN_14000892c(local_90,local_70);
    cVar2 = FUN_1400ae712(local_90);
    FUN_140005242(local_90);
    FUN_140005690(local_70);
    FUN_140005690(local_b0);
    if (cVar2 != '\0') {
      local_90[0] = 0;
      local_70[0] = 0;
      iVar3 = FUN_140054ae2(local_50,lVar4,local_70,local_90);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    lVar4 = lVar4 + 0x20;
  } while( true );
}

