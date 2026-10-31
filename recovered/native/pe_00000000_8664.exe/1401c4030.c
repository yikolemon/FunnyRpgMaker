/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c4030 */

undefined8 FUN_1401c4030(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  param_3 = param_3 & 0xfff7ffff;
  if ((param_2 & param_3 & 0xfcf0fce0) != 0) {
    if (param_1 != (undefined4 *)0x0) {
      uVar1 = thunk_FUN_1401c4b20(0,0);
      *param_1 = uVar1;
    }
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    return 0x16;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = thunk_FUN_1401c4b20(param_2,param_3);
    *param_1 = uVar1;
    return 0;
  }
  thunk_FUN_1401c4b20(param_2,param_3);
  return 0;
}

