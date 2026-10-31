/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140313945 */

void FUN_140313945(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_140313264(param_3,param_4);
  lVar1 = DAT_14062a630;
  if ((int)uVar2 != (int)param_3) {
    FUN_140313659(*(undefined8 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 800),param_1,param_2,
                  param_3,uVar2,param_5,param_6,param_7);
    if (*(char *)(lVar1 + 0x2a40) == '\x01') {
      FUN_14031338e(param_1,param_3,uVar2);
      return;
    }
  }
  return;
}

