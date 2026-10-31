/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e063a */

void FUN_1800e063a(undefined8 param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_2 == '\x03') {
    plVar2 = *(longlong **)(param_2 + 8);
    lVar1 = plVar2[2];
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    *param_3 = (longlong)plVar2;
    param_3[1] = lVar1;
    return;
  }
  local_20 = FUN_1800173a0(param_2);
  FUN_1800172c9(local_40,"type must be string, but is ");
  FUN_180017158(local_78,0x12e,local_40,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_78,&DAT_180391520);
}

