/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024b490 */

undefined1 *
FUN_18024b490(longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 local_res10 [8];
  undefined2 local_res18 [8];
  undefined8 local_38 [2];
  
  if (param_2 != param_3) {
    do {
      local_res10[0] = *param_2;
      local_38[0] = 0;
      iVar1 = FUN_18023ec80(local_res18,local_res10,1,local_38,param_1 + 0x30);
      uVar2 = local_res18[0];
      if (iVar1 < 0) {
        uVar2 = 0xffff;
      }
      param_2 = param_2 + 1;
      *param_4 = uVar2;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

