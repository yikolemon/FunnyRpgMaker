/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048f1ac */

void FUN_14048f1ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    psVar4 = (short *)(*(code *)s_GetOEMCP_14059dfa0._0_8_)(0);
    if ((((psVar4 != (short *)0x0) && (*psVar4 == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)*(int *)(psVar4 + 0x1e) + (longlong)psVar4), *piVar5 == 0x4550))
       && ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_14048f118(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34 = 2;
  local_30[0] = 2;
  operator()<>(local_38,local_30,&local_20,&local_34);
  if (local_res18[0] == 0) {
    iVar3 = FUN_1404a7e54();
    if (iVar3 == 1) {
      bVar6 = false;
    }
    else {
      cVar2 = FUN_1404a7f20();
      bVar6 = cVar2 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_14048f17c(param_1,bVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

