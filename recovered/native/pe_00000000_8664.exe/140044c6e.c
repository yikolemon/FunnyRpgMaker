/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140044c6e */

undefined8 * FUN_140044c6e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_148 [144];
  longlong local_b8;
  longlong local_38;
  longlong local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_140012c7e(local_148,param_2,0x20,0x40,1);
  if (local_b8 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_14003d3fe(local_148,0,2);
    FUN_140044e60(local_148,&local_38);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_20 = param_1;
    if (local_30 + local_38 != 0 && SCARRY8(local_30,local_38) == local_30 + local_38 < 0) {
      FUN_140044f8a(param_1);
      FUN_14003d3fe(local_148,0,0);
      FUN_14003d296(local_148,*local_20,local_30 + local_38);
      param_1 = local_20;
    }
  }
  FUN_140012d70(local_148);
  return param_1;
}

