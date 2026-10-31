/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e19a0 */

undefined2 FUN_1400e19a0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 local_res8 [4];
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  local_res10[0] = param_2;
  iVar1 = FUN_1400da650(local_res8,local_res10,1,local_res18,param_1 + 0x30);
  if (iVar1 < 0) {
    local_res8[0] = 0xffff;
  }
  return local_res8[0];
}

