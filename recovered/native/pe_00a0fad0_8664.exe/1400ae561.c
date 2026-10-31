/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ae561 */

undefined8 FUN_1400ae561(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  bool bVar6;
  int local_a0 [2];
  undefined8 local_98;
  undefined8 ***local_80 [3];
  ulonglong local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar1 = DAT_1401cc988;
  local_48 = 0xfffffffffffffffe;
  lVar5 = DAT_1401cc980;
  local_50 = param_1;
  while( true ) {
    if (lVar5 == lVar1) {
      FUN_14000f628(local_50,&DAT_140174404);
      return local_50;
    }
    FUN_1400843c8(local_50,param_2,lVar5);
    FUN_14000550c(local_80,local_50,0);
    FUN_140007025();
    local_60 = 0xffff00000000;
    ppppuVar4 = local_80;
    if (7 < local_68) {
      ppppuVar4 = (undefined8 ****)local_80[0];
    }
    local_58 = FUN_1400dcbb0(ppppuVar4,local_a0,3,0xffffffff);
    FUN_140007276(&local_60,local_58,local_a0);
    iVar3 = local_58;
    local_98 = FUN_140007025();
    local_a0[0] = iVar3;
    iVar2 = (int)local_60;
    if ((int)local_60 == 0) {
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",local_a0,local_80);
      }
      bVar6 = false;
    }
    else {
      FUN_140007025();
      bVar6 = iVar2 != 1;
    }
    FUN_140005690(local_80);
    if (bVar6) break;
    FUN_140005242(local_50);
    lVar5 = lVar5 + 0x20;
  }
  return local_50;
}

