/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024b440 */

undefined2 FUN_18024b440(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 local_res8 [4];
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  local_res10[0] = param_2;
  iVar1 = FUN_18023ec80(local_res8,local_res10,1,local_res18,param_1 + 0x30);
  if (iVar1 < 0) {
    local_res8[0] = 0xffff;
  }
  return local_res8[0];
}

