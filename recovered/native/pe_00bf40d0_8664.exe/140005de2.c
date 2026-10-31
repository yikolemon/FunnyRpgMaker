/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005de2 */

undefined8 * FUN_140005de2(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_18 = param_1;
  FUN_14000602e(param_1,&local_28,param_2);
  *local_18 = std::ios_base::failure::vftable;
  return local_18;
}

