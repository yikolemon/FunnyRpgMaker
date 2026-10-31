/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140018884 */

longlong * FUN_140018884(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  code *local_b0;
  undefined8 local_a8;
  undefined1 local_90 [32];
  undefined1 local_70 [38];
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_2 != param_2[1]) {
    FUN_1400da260(&local_b0,(longlong)param_3);
    (*local_b0)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,local_a8);
    FUN_1400052b8(param_1,"     aliases: ");
    lVar1 = param_2[1];
    bVar2 = true;
    for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
      if (!bVar2) {
        FUN_1400052b8(param_1,&DAT_140172887);
      }
      FUN_140006874(local_90,lVar3);
      local_4a = 1;
      FUN_14000169c(local_70,"              ");
      local_49 = 0;
      FUN_140018bac(&local_b0,local_70,local_90);
      FUN_1400058b9(param_1,&local_b0);
      FUN_1400017de(&local_b0);
      local_49 = 0;
      FUN_1400017de(local_70);
      local_4a = 0;
      bVar2 = false;
    }
    FUN_1400052b8(param_1,&DAT_1401728dd);
  }
  return param_1;
}

