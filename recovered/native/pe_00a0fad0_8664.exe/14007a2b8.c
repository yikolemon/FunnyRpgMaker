/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007a2b8 */

void FUN_14007a2b8(undefined8 param_1,char *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_2 != '\x03') {
    local_20 = FUN_14006c034(param_2);
    FUN_14006bf5d(local_40,"type must be string, but is ");
    FUN_14006bdec(local_78,0x12e,local_40,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_78,&DAT_140196700);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if ((longlong *)param_3 != plVar2) {
    plVar1 = plVar2 + 2;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_140017200(param_3,plVar2,*plVar1);
    return;
  }
  return;
}

