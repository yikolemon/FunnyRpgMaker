/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400044de */

undefined8 FUN_1400044de(undefined8 param_1,undefined8 param_2)

{
  longlong local_150 [9];
  longlong alStack_108 [9];
  longlong local_c0;
  undefined8 local_40;
  undefined2 local_38;
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_140012c7e(local_150,param_2,1,0x40,1);
  if (local_c0 == 0) {
    FUN_1400027d2(param_1,&DAT_140edcdbf);
  }
  else {
    local_40 = 0;
    local_38 = 1;
    local_30 = *(longlong *)((longlong)alStack_108 + (longlong)*(int *)(local_150[0] + 4));
    local_28 = local_30 == 0;
    local_27 = 0;
    FUN_140012cd6(param_1,&local_30,&local_40,&local_19);
  }
  FUN_140012d70(local_150);
  return param_1;
}

