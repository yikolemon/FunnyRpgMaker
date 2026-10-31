/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd348 */

undefined8 * FUN_1800cd348(undefined8 *param_1)

{
  undefined1 local_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = spdlog::sinks::base_sink<std::mutex>::vftable;
  local_20 = FUN_180239630(0xd8);
  FUN_180001e92(local_48,"\r\n");
  FUN_1800226be(local_20,0,local_48);
  param_1[2] = local_20;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 2;
  return param_1;
}

