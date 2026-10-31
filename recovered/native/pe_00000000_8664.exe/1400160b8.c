/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400160b8 */

void FUN_1400160b8(undefined8 param_1,char *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_2 != '\x03') {
    local_20 = FUN_14000ea3a(param_2);
    FUN_14000e963(local_40,"type must be string, but is ");
    FUN_14000e7f2(local_78,0x12e,local_40,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_78,&DAT_140ee3b30);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if ((longlong *)param_3 != plVar2) {
    plVar1 = plVar2 + 2;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14001617e(param_3,plVar2,*plVar1);
    return;
  }
  return;
}

