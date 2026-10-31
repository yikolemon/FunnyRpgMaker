/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ac5fe */

longlong FUN_1800ac5fe(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 200) {
    FUN_1800a7344(param_3,param_1);
    param_3 = param_3 + 200;
  }
  return param_3;
}

