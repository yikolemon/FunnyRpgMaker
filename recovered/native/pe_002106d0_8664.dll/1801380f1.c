/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801380f1 */

void FUN_1801380f1(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) != '\0') {
    return;
  }
  uVar2 = FUN_180101d94(param_1,0);
  FUN_180137d08(0,param_1,uVar2,0);
  return;
}

