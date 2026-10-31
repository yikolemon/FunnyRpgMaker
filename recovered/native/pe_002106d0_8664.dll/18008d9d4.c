/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008d9d4 */

longlong FUN_18008d9d4(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_88 [56];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_1 != '\x01') {
    local_30 = FUN_18008843c(param_1);
    FUN_1800172c9(local_50,"cannot use operator[] with a string argument with ");
    FUN_180017158(local_88,0x131,local_50,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_88,&DAT_180391520);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  lVar3 = plVar1[1];
  lVar4 = *plVar1;
  if (*plVar1 != lVar3) {
    do {
      lVar3 = lVar4;
      cVar2 = FUN_18001ba14(lVar3,param_2);
      if (cVar2 != '\0') break;
      lVar4 = lVar3 + 0x30;
      lVar3 = plVar1[1];
    } while (lVar4 != lVar3);
  }
  return lVar3 + 0x20;
}

