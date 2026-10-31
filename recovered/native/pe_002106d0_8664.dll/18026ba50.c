/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026ba50 */

undefined8 * FUN_18026ba50(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_18 [2];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  puVar1 = param_1 + 2;
  *param_1 = std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
  *puVar1 = 0;
  uVar2 = thunk_FUN_18026fdcc();
  if (puVar1 != local_18) {
    thunk_FUN_180290e40(*puVar1);
    *puVar1 = uVar2;
    uVar2 = 0;
  }
  thunk_FUN_180290e40(uVar2);
  return param_1;
}

