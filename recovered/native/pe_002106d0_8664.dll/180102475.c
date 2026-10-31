/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180102475 */

void FUN_180102475(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_180101d94(param_3,param_4);
  lVar1 = DAT_180419160;
  if ((int)uVar2 != (int)param_3) {
    FUN_180102189(*(undefined8 *)(*(longlong *)(DAT_180419160 + 0x1608) + 800),param_1,param_2,
                  param_3,uVar2,param_5,param_6,param_7);
    if (*(char *)(lVar1 + 0x2a40) == '\x01') {
      FUN_180101ebe(param_1,param_3,uVar2);
      return;
    }
  }
  return;
}

