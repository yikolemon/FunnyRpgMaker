/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801dfa1a */

undefined8 FUN_1801dfa1a(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_1d8 [152];
  longlong *local_140;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar1 = FUN_1801d3d29(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_1801d3d1c(param_2);
    if (cVar1 == '\0') {
      uVar3 = DAT_180330c10;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar3 = DAT_180330cb8;
      }
    }
    else {
      FUN_1801d9b6c(local_1d8);
      if (local_140 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802398e0();
      }
      uVar2 = (**(code **)(*local_140 + 0x10))(local_140,param_2);
      uVar3 = FUN_1801dff70(uVar2,DAT_180330cd8);
      FUN_18019f2e0(local_1d8);
    }
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar3 = DAT_18032a0f8;
    }
  }
  return uVar3;
}

