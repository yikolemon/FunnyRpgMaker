/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7514 */

undefined8 FUN_1800f7514(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 - 1U < 4) {
    puVar1 = (&PTR_s_broken_promise_1802dc4c8)[param_3 - 1U];
  }
  else {
    puVar1 = (undefined *)FUN_1802396f0(param_3);
  }
  FUN_180001e92(param_2,puVar1);
  return param_2;
}

