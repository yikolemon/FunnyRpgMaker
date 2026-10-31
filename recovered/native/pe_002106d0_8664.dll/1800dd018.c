/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd018 */

longlong FUN_1800dd018(char *param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_80 [56];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *param_1 = '\x02';
    uVar3 = FUN_180059790();
    *(undefined8 *)(param_1 + 8) = uVar3;
    cVar2 = *param_1;
  }
  if (cVar2 == '\x02') {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar4 = *plVar1;
    if ((ulonglong)(plVar1[1] - lVar4 >> 4) <= param_2) {
      FUN_1800dd8ca(plVar1,param_2 + 1,local_48);
      lVar4 = **(longlong **)(param_1 + 8);
    }
    return param_2 * 0x10 + lVar4;
  }
  local_28 = FUN_1800173a0(param_1);
  FUN_1800172c9(local_48,"cannot use operator[] with a numeric argument with ");
  FUN_180017158(local_80,0x131,local_48,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_80,&DAT_180391520);
}

