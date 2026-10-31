/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140171dda */

undefined8
FUN_140171dda(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140176926();
  if (lVar1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + 0xc);
    }
    uVar2 = FUN_14012d612(param_3,*(undefined4 *)(lVar1 + 8));
    return uVar2;
  }
  return 0x8e;
}

