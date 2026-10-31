/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd97a */

void FUN_1800cd97a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = spdlog::sinks::base_sink<std::mutex>::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

