/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d48c4 */

void FUN_1800d48c4(undefined8 param_1,char param_2)

{
  undefined1 local_38 [32];
  char *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = "Set to false";
  if (param_2 != '\0') {
    local_18 = "Set to true";
  }
  local_18 = local_18 + 7;
  FUN_1800d574f(local_38);
  FUN_180013ef1(local_38);
  FUN_180001ef2(local_38);
  return;
}

